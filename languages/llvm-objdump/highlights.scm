(file_path) @string.special
(file_format) @type
"file format" @keyword

"Disassembly of section" @keyword
(section_name) @title

(symbol_label name: (symbol) @function)
(symbol_ref name: (symbol) @function)
(relocation symbol: (symbol) @function)

(address) @number
(bytes) @comment
(offset) @number

(mnemonic) @keyword
(register) @variable
(immediate) @number
(operand_text) @variable

(relocation_type) @attribute

(comment) @comment
(ellipsis) @comment

["<" ">"] @punctuation.special
["[" "]" "(" ")" "{" "}"] @punctuation.bracket
["," ":" "+" "-" "!" "*"] @punctuation.delimiter
