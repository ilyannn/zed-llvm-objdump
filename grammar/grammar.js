/**
 * Tree-sitter grammar for `llvm-objdump -d` output.
 *
 * Line-oriented: newlines are significant, other whitespace is not.
 * Handles AArch64-style 32-bit instruction words (`d10083ff`) as well as
 * x86-style space-separated bytes (`55 48 89 e5`), symbol references
 * (`<foo+0x10>`), trailing comments (`// =3`, `# 0x...`, `; ...`) and
 * relocation lines from `-r`.
 */

const HEX = /[0-9a-fA-F]+/;

module.exports = grammar({
  name: 'llvm_objdump',

  extras: _ => [/[ \t\r]/],

  rules: {
    source: $ => seq(
      repeat(seq(optional($._line), '\n')),
      optional($._line),
    ),

    _line: $ => choice(
      $.file_header,
      $.section_header,
      $.symbol_label,
      $.instruction_line,
      $.relocation,
      $.ellipsis,
      $.comment,
    ),

    // /path/to/foo.o:	file format elf64-littleaarch64
    file_header: $ => seq(
      field('path', $.file_path),
      ':',
      'file format',
      field('format', $.file_format),
    ),
    file_path: _ => /[^\s:<]+/,
    file_format: _ => /\S+/,

    // Disassembly of section .text:
    section_header: $ => seq(
      'Disassembly of section',
      field('name', $.section_name),
      ':',
    ),
    section_name: _ => /[^\s:]+/,

    // 0000000000000000 <arith>:
    // The address token swallows the trailing whitespace so that it is
    // always longer than a competing `file_path` match.
    symbol_label: $ => seq(
      field('address', alias($._label_address, $.address)),
      '<',
      field('name', $.symbol),
      '>',
      ':',
    ),
    _label_address: _ => token(seq(HEX, /[ \t]+/)),

    //       0: d10083ff     	sub	sp, sp, #0x20
    instruction_line: $ => seq(
      field('address', $.address),
      optional(field('bytes', $.bytes)),
      optional($.instruction),
      optional($.comment),
    ),
    address: _ => token(seq(HEX, ':')),
    // Even-length hex groups, so hex-looking mnemonics (`add`, `adc`)
    // are not mistaken for bytes under --no-show-raw-insn.
    bytes: _ => /[0-9a-fA-F]{2}([0-9a-fA-F]{2})*( [0-9a-fA-F]{2}([0-9a-fA-F]{2})*)*/,

    instruction: $ => seq(
      field('mnemonic', $.mnemonic),
      repeat($._operand),
    ),
    mnemonic: _ => /[a-zA-Z_][\w.]*/,

    _operand: $ => choice(
      $.register,
      $.immediate,
      $.symbol_ref,
      $.operand_text,
      ',', '[', ']', '(', ')', '{', '}', '!', ':', '*', '+', '-',
    ),
    register: _ => /%?[a-zA-Z_.][\w.@]*/,
    immediate: _ => /[#$]?-?(0x[0-9a-fA-F]+|[0-9]+(\.[0-9]+)?)/,
    operand_text: _ => token(prec(-1, /[^\s,\[\](){}<>!:*+\-]+/)),

    // <branch_max+0x38>
    symbol_ref: $ => seq(
      '<',
      field('name', $.symbol),
      optional(seq('+', field('offset', $.offset))),
      '>',
    ),
    symbol: _ => /[^\s<>+]+/,
    offset: _ => /0x[0-9a-fA-F]+/,

    // 		000000000000000c:  R_AARCH64_CALL26	course_sink
    relocation: $ => seq(
      field('address', $.address),
      field('type', $.relocation_type),
      field('symbol', alias(/[^\s+\-]+/, $.symbol)),
      optional(seq(choice('+', '-'), field('addend', $.offset))),
    ),
    relocation_type: _ => token(prec(1, /R_[A-Z0-9_]+/)),

    ellipsis: _ => '...',

    // `//` (AArch64), `# ` (x86), `;` (source / line info from -S / -l)
    comment: _ => token(choice(
      seq('//', /[^\n]*/),
      seq(';', /[^\n]*/),
      seq('#', /[ \t]/, /[^\n]*/),
    )),
  },
});
