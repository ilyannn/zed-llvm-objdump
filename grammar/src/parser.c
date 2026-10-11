#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_fileformat = 3,
  sym_file_path = 4,
  sym_file_format = 5,
  anon_sym_Disassemblyofsection = 6,
  sym_section_name = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  sym__label_address = 10,
  sym_address = 11,
  sym_bytes = 12,
  sym_mnemonic = 13,
  anon_sym_COMMA = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_BANG = 21,
  anon_sym_STAR = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  sym_register = 25,
  sym_immediate = 26,
  sym_operand_text = 27,
  sym_symbol = 28,
  sym_offset = 29,
  aux_sym_relocation_token1 = 30,
  sym_relocation_type = 31,
  sym_ellipsis = 32,
  sym_comment = 33,
  sym_source = 34,
  sym__line = 35,
  sym_file_header = 36,
  sym_section_header = 37,
  sym_symbol_label = 38,
  sym_instruction_line = 39,
  sym_instruction = 40,
  sym__operand = 41,
  sym_symbol_ref = 42,
  sym_relocation = 43,
  aux_sym_source_repeat1 = 44,
  aux_sym_instruction_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_fileformat] = "file format",
  [sym_file_path] = "file_path",
  [sym_file_format] = "file_format",
  [anon_sym_Disassemblyofsection] = "Disassembly of section",
  [sym_section_name] = "section_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym__label_address] = "address",
  [sym_address] = "address",
  [sym_bytes] = "bytes",
  [sym_mnemonic] = "mnemonic",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_register] = "register",
  [sym_immediate] = "immediate",
  [sym_operand_text] = "operand_text",
  [sym_symbol] = "symbol",
  [sym_offset] = "offset",
  [aux_sym_relocation_token1] = "symbol",
  [sym_relocation_type] = "relocation_type",
  [sym_ellipsis] = "ellipsis",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_file_header] = "file_header",
  [sym_section_header] = "section_header",
  [sym_symbol_label] = "symbol_label",
  [sym_instruction_line] = "instruction_line",
  [sym_instruction] = "instruction",
  [sym__operand] = "_operand",
  [sym_symbol_ref] = "symbol_ref",
  [sym_relocation] = "relocation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fileformat] = anon_sym_fileformat,
  [sym_file_path] = sym_file_path,
  [sym_file_format] = sym_file_format,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [sym_section_name] = sym_section_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym__label_address] = sym_address,
  [sym_address] = sym_address,
  [sym_bytes] = sym_bytes,
  [sym_mnemonic] = sym_mnemonic,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_register] = sym_register,
  [sym_immediate] = sym_immediate,
  [sym_operand_text] = sym_operand_text,
  [sym_symbol] = sym_symbol,
  [sym_offset] = sym_offset,
  [aux_sym_relocation_token1] = sym_symbol,
  [sym_relocation_type] = sym_relocation_type,
  [sym_ellipsis] = sym_ellipsis,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_file_header] = sym_file_header,
  [sym_section_header] = sym_section_header,
  [sym_symbol_label] = sym_symbol_label,
  [sym_instruction_line] = sym_instruction_line,
  [sym_instruction] = sym_instruction,
  [sym__operand] = sym__operand,
  [sym_symbol_ref] = sym_symbol_ref,
  [sym_relocation] = sym_relocation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fileformat] = {
    .visible = true,
    .named = false,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_file_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Disassemblyofsection] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__label_address] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_text] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_relocation_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_file_header] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_line] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_addend = 1,
  field_address = 2,
  field_bytes = 3,
  field_format = 4,
  field_mnemonic = 5,
  field_name = 6,
  field_offset = 7,
  field_path = 8,
  field_symbol = 9,
  field_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_addend] = "addend",
  [field_address] = "address",
  [field_bytes] = "bytes",
  [field_format] = "format",
  [field_mnemonic] = "mnemonic",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_path] = "path",
  [field_symbol] = "symbol",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 4},
  [9] = {.index = 16, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_address, 0},
  [1] =
    {field_address, 0},
    {field_bytes, 1},
  [3] =
    {field_mnemonic, 0},
  [4] =
    {field_name, 1},
  [5] =
    {field_address, 0},
    {field_symbol, 2},
    {field_type, 1},
  [8] =
    {field_format, 3},
    {field_path, 0},
  [10] =
    {field_address, 0},
    {field_name, 2},
  [12] =
    {field_addend, 4},
    {field_address, 0},
    {field_symbol, 2},
    {field_type, 1},
  [16] =
    {field_name, 1},
    {field_offset, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static TSCharacterRange sym_operand_text_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'.', '9'}, {';', ';'}, {'=', '='}, {'?', 'Z'}, {'\\', '\\'},
  {'^', 'z'}, {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '!', 81,
        '#', 99,
        '(', 77,
        ')', 78,
        '*', 82,
        '+', 83,
        ',', 74,
        '-', 84,
        '.', 96,
        '/', 97,
        '0', 98,
        ':', 41,
        ';', 111,
        '<', 64,
        '>', 65,
        'R', 70,
        '[', 75,
        ']', 76,
        '{', 79,
        '}', 80,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(63);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '!', 81,
        '#', 93,
        '$', 94,
        '%', 103,
        '(', 77,
        ')', 78,
        '*', 82,
        '+', 83,
        ',', 74,
        '-', 85,
        '/', 97,
        '0', 87,
        ':', 41,
        ';', 111,
        '<', 64,
        '[', 75,
        ']', 76,
        '{', 79,
        '}', 80,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '.' || '<' < lookahead)) ADVANCE(60);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_fileformat);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'y') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '<') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_file_format);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__label_address);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_address);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_bytes);
      if (lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bytes);
      if (lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == '.') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '.') ADVANCE(109);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '.') ADVANCE(95);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '/') ADVANCE(111);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == 'x') ADVANCE(101);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_operand_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_operand_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_operand_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_operand_text);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_operand_text);
      if ((!eof && set_contains(sym_operand_text_character_set_1, 11, lookahead))) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_offset);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_relocation_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_relocation_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ellipsis);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_mnemonic] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_operand_text] = ACTIONS(1),
    [sym_offset] = ACTIONS(1),
    [sym_relocation_type] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(36),
    [sym__line] = STATE(15),
    [sym_file_header] = STATE(15),
    [sym_section_header] = STATE(15),
    [sym_symbol_label] = STATE(15),
    [sym_instruction_line] = STATE(15),
    [sym_relocation] = STATE(15),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_file_path] = ACTIONS(7),
    [anon_sym_Disassemblyofsection] = ACTIONS(9),
    [sym__label_address] = ACTIONS(11),
    [sym_address] = ACTIONS(13),
    [sym_ellipsis] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 2,
      anon_sym_DASH,
      sym_operand_text,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    STATE(3), 3,
      sym__operand,
      sym_symbol_ref,
      aux_sym_instruction_repeat1,
    ACTIONS(19), 13,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_register,
      sym_immediate,
  [33] = 5,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 2,
      anon_sym_DASH,
      sym_operand_text,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    STATE(4), 3,
      sym__operand,
      sym_symbol_ref,
      aux_sym_instruction_repeat1,
    ACTIONS(27), 13,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_register,
      sym_immediate,
  [66] = 5,
    ACTIONS(36), 1,
      anon_sym_LT,
    ACTIONS(39), 2,
      anon_sym_DASH,
      sym_operand_text,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    STATE(4), 3,
      sym__operand,
      sym_symbol_ref,
      aux_sym_instruction_repeat1,
    ACTIONS(33), 13,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_register,
      sym_immediate,
  [99] = 2,
    ACTIONS(44), 2,
      anon_sym_DASH,
      sym_operand_text,
    ACTIONS(42), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_register,
      sym_immediate,
      sym_comment,
  [123] = 2,
    ACTIONS(48), 2,
      anon_sym_DASH,
      sym_operand_text,
    ACTIONS(46), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_register,
      sym_immediate,
      sym_comment,
  [147] = 9,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      sym_file_path,
    ACTIONS(58), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(61), 1,
      sym__label_address,
    ACTIONS(64), 1,
      sym_address,
    STATE(7), 1,
      aux_sym_source_repeat1,
    ACTIONS(67), 2,
      sym_ellipsis,
      sym_comment,
    STATE(29), 6,
      sym__line,
      sym_file_header,
      sym_section_header,
      sym_symbol_label,
      sym_instruction_line,
      sym_relocation,
  [181] = 9,
    ACTIONS(7), 1,
      sym_file_path,
    ACTIONS(9), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(11), 1,
      sym__label_address,
    ACTIONS(13), 1,
      sym_address,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_source_repeat1,
    ACTIONS(74), 2,
      sym_ellipsis,
      sym_comment,
    STATE(16), 6,
      sym__line,
      sym_file_header,
      sym_section_header,
      sym_symbol_label,
      sym_instruction_line,
      sym_relocation,
  [215] = 2,
    ACTIONS(76), 3,
      sym_file_path,
      sym_ellipsis,
      sym_comment,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_Disassemblyofsection,
      sym__label_address,
      sym_address,
  [228] = 6,
    ACTIONS(80), 1,
      sym_bytes,
    ACTIONS(82), 1,
      sym_mnemonic,
    ACTIONS(84), 1,
      sym_relocation_type,
    ACTIONS(86), 1,
      sym_comment,
    STATE(13), 1,
      sym_instruction,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [248] = 4,
    ACTIONS(90), 1,
      sym_mnemonic,
    ACTIONS(92), 1,
      sym_comment,
    STATE(14), 1,
      sym_instruction,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [262] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(96), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [271] = 2,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [279] = 2,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [287] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
  [294] = 2,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [301] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [306] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [311] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [316] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [321] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [326] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [331] = 2,
    ACTIONS(118), 1,
      anon_sym_GT,
    ACTIONS(120), 1,
      anon_sym_PLUS,
  [338] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [343] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [348] = 1,
    ACTIONS(126), 1,
      sym_offset,
  [352] = 1,
    ACTIONS(128), 1,
      anon_sym_LT,
  [356] = 1,
    ACTIONS(130), 1,
      anon_sym_fileformat,
  [360] = 1,
    ACTIONS(106), 1,
      anon_sym_LF,
  [364] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
  [368] = 1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [372] = 1,
    ACTIONS(136), 1,
      sym_symbol,
  [376] = 1,
    ACTIONS(138), 1,
      sym_file_format,
  [380] = 1,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [384] = 1,
    ACTIONS(142), 1,
      anon_sym_GT,
  [388] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [392] = 1,
    ACTIONS(146), 1,
      aux_sym_relocation_token1,
  [396] = 1,
    ACTIONS(148), 1,
      sym_offset,
  [400] = 1,
    ACTIONS(150), 1,
      sym_symbol,
  [404] = 1,
    ACTIONS(152), 1,
      anon_sym_GT,
  [408] = 1,
    ACTIONS(154), 1,
      sym_section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 181,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 356,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 364,
  [SMALL_STATE(31)] = 368,
  [SMALL_STATE(32)] = 372,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 380,
  [SMALL_STATE(35)] = 384,
  [SMALL_STATE(36)] = 388,
  [SMALL_STATE(37)] = 392,
  [SMALL_STATE(38)] = 396,
  [SMALL_STATE(39)] = 400,
  [SMALL_STATE(40)] = 404,
  [SMALL_STATE(41)] = 408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 5, 0, 9),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_ref, 5, 0, 9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 3, 0, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_ref, 3, 0, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 1, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 2, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation, 3, 0, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 2, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 3, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 4, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 4, 0, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_label, 5, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_line, 3, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation, 5, 0, 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_llvm_objdump(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
