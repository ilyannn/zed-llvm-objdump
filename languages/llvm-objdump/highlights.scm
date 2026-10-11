(file_path) @string.special
(file_format) @type
"file format" @keyword

"Disassembly of section" @keyword
(section_name) @title

(symbol_label name: (symbol) @type)
(symbol_ref name: (symbol) @type)
(relocation symbol: (symbol) @type)

(address) @number
(bytes) @comment
(offset) @number

(mnemonic) @function
(register) @variable
(immediate) @number
(operand_text) @variable

(relocation_type) @attribute

(comment) @comment
(ellipsis) @comment

["<" ">"] @punctuation.special
["[" "]" "(" ")" "{" "}"] @punctuation.bracket
["," ":" "+" "-" "!" "*"] @punctuation.delimiter
