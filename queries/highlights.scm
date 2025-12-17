; Comments
(line_comment) @comment
(block_comment) @comment

; Strings
(string) @string
(version_number) @string.special

; Numbers
(unsigned) @number
(real) @number
(fraction) @number

; Keywords (backslash commands)
"\\version" @keyword
"\\header" @keyword
"\\book" @keyword
"\\bookpart" @keyword
"\\score" @keyword
"\\paper" @keyword
"\\layout" @keyword
"\\midi" @keyword

; Identifiers
(symbol) @variable

; Operators
"=" @operator
"+" @operator
"-" @operator
"*" @operator
"/" @operator

; Scheme
(scheme_boolean) @constant.builtin
(scheme_number) @number
(scheme_symbol) @variable
"#" @punctuation.special

; Punctuation
"{" @punctuation.bracket
"}" @punctuation.bracket
