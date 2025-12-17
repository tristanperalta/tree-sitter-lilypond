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

; Articulations
(script_direction) @operator
(articulation_mark) @operator
(articulation_command) @function

; Dynamics
(dynamic_mark) @function.builtin
(hairpin) @function.builtin

; Fingering
(fingering_number) @number

; Markup
"\\markup" @keyword
(markup_command_name) @function
(markup_word) @string

; Lyrics
"\\lyricmode" @keyword
"\\lyrics" @keyword
"\\addlyrics" @keyword
"\\lyricsto" @keyword
(lyric_word) @string
(lyric_extender) @operator
(lyric_hyphen) @operator
(lyric_skip) @keyword

; Figured bass
"\\figuremode" @keyword
"\\figures" @keyword
(figure_number) @number
(figure_modifier) @operator
(figure_rest) @keyword
(figure_skip) @keyword

; Chord mode
"\\chordmode" @keyword
"\\chords" @keyword
(chord_modifier) @type
":" @operator

; Scheme
(scheme_list) @embedded
(scheme_string) @string

; Time/Key/Clef
"\\time" @keyword
"\\key" @keyword
"\\clef" @keyword
"\\partial" @keyword
(key_mode) @type
(clef_name) @type

; Grace notes
"\\grace" @keyword
"\\acciaccatura" @keyword
"\\appoggiatura" @keyword

; Tuplets
"\\tuplet" @keyword
"\\times" @keyword

; Bar/Navigation
"\\bar" @keyword
"\\tempo" @keyword
(segno) @function.builtin
(coda) @function.builtin
(fine) @function.builtin
"\\mark" @keyword

; Direction commands
(direction_command) @function.builtin

; Voice commands
(voice_command) @function.builtin
"\\change" @keyword

; Breaks
(break_command) @keyword

; Other
(breathe) @function.builtin
"\\ottava" @keyword
(arpeggio) @function.builtin
(glissando) @function.builtin
(cadenza_command) @function.builtin
"\\once" @keyword

; Phrasing slurs
(phrasing_slur_open) @punctuation.special
(phrasing_slur_close) @punctuation.special

; Voice separator
(voice_separator) @punctuation.special

; M8: Regression fixes
(accidental_modifier) @operator
(repeat_tie) @function.builtin
(dimension_unit) @type

; Tag commands
"\\tag" @keyword
"\\keepWithTag" @keyword
"\\removeWithTag" @keyword
