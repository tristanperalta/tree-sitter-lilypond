; Comments
(comment_statement) @comment

; Strings
(string) @string
(version_number) @string.special

; Keywords (backslash commands)
"\\version" @keyword
"\\header" @keyword
"\\book" @keyword
"\\bookpart" @keyword

; Identifiers in assignments
(assignment_id) @property
