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

; Context commands
"\\new" @keyword
"\\context" @keyword
"\\with" @keyword

; Property commands
"\\set" @keyword
"\\override" @keyword
"\\revert" @keyword
"\\unset" @keyword

; Context modifiers
"\\consists" @keyword
"\\remove" @keyword
"\\accepts" @keyword
"\\denies" @keyword
"\\alias" @keyword

; Repeat
"\\repeat" @keyword
"\\alternative" @keyword

; Music functions
"\\relative" @keyword
"\\transpose" @keyword
"\\fixed" @keyword
"\\absolute" @keyword

; Property paths
(property_path) @property

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

; Music
(pitch_name) @variable.parameter
(accidental) @operator
(octave_up) @operator
(octave_down) @operator
(duration_value) @number
(dots) @operator
"r" @keyword
"s" @keyword
"\\breve" @number
"\\longa" @number
"\\maxima" @number

; Punctuation
"{" @punctuation.bracket
"}" @punctuation.bracket
"<<" @punctuation.bracket
">>" @punctuation.bracket
"<" @punctuation.bracket
">" @punctuation.bracket

; Post-events
(tie) @operator
(slur_open) @punctuation.special
(slur_close) @punctuation.special
(beam_open) @punctuation.special
(beam_close) @punctuation.special
