(file_path) @string.special
(file_format) @type
"file format" @keyword

"Disassembly of section" @keyword
(section_name) @title

(symbol_label name: (symbol) @label)
(symbol_ref name: (symbol) @label)
(relocation symbol: (symbol) @label)

(address) @number
(bytes) @comment
(offset) @number

(mnemonic) @function
(register) @variable.parameter
(immediate) @number
(operand_text) @variable.parameter

(relocation_type) @attribute

(comment) @comment
(ellipsis) @comment

["<" ">"] @punctuation.special
["[" "]" "(" ")" "{" "}"] @punctuation.bracket
["," ":" "+" "-" "!" "*"] @punctuation.delimiter
