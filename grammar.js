/**
 * Tree-sitter grammar for LilyPond music notation
 * Based on LilyPond 2.24.4 parser (lily/parser.yy)
 */

const PREC = {
  NUMBER_ADD: 1,
  NUMBER_MUL: 2,
  UNARY: 3,
};

module.exports = grammar({
  name: "lilypond",

  extras: $ => [
    /\s+/,
  ],

  rules: {
    lilypond: $ => repeat($._top_level_expression),

    _top_level_expression: $ => choice(
      $.version_statement,
      $.header_block,
      $.book_block,
      $.bookpart_block,
      $.score_block,
      $.paper_block,
      $.layout_block,
      $.midi_block,
      $.assignment,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
      $.markup,
      $.lyric_mode,
      $.addlyrics,
      $.lyricsto,
      $.figure_mode,
      $.chord_mode,
      $.embedded_scm,
      $.comment,
    ),

    // Comments

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: $ => token(seq('%', /[^{\n][^\n]*/)),

    block_comment: $ => token(seq(
      '%{',
      /[^%]*(%+[^%}][^%]*)*/,
      '%}'
    )),

    // Version

    version_statement: $ => seq(
      '\\version',
      alias($.string, $.version_number),
    ),

    // Header

    header_block: $ => seq(
      '\\header',
      '{',
      repeat($._header_body),
      '}',
    ),

    _header_body: $ => choice(
      $.assignment,
      $.embedded_scm,
      $.comment,
    ),

    // Book structure

    book_block: $ => seq(
      '\\book',
      '{',
      repeat($._book_body),
      '}',
    ),

    _book_body: $ => choice(
      $.header_block,
      $.bookpart_block,
      $.score_block,
      $.paper_block,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
      $.embedded_scm,
      $.comment,
    ),

    bookpart_block: $ => seq(
      '\\bookpart',
      '{',
      repeat($._bookpart_body),
      '}',
    ),

    _bookpart_body: $ => choice(
      $.header_block,
      $.score_block,
      $.paper_block,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
      $.embedded_scm,
      $.comment,
    ),

    score_block: $ => seq(
      '\\score',
      '{',
      repeat($._score_body),
      '}',
    ),

    _score_body: $ => choice(
      $.header_block,
      $.layout_block,
      $.midi_block,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
      $.lyric_mode,
      $.figure_mode,
      $.chord_mode,
      $.markup,
      $.embedded_scm,
      $.comment,
    ),

    // Output definitions

    paper_block: $ => seq(
      '\\paper',
      '{',
      repeat($._output_body),
      '}',
    ),

    layout_block: $ => seq(
      '\\layout',
      '{',
      repeat($._output_body),
      '}',
    ),

    midi_block: $ => seq(
      '\\midi',
      '{',
      repeat($._output_body),
      '}',
    ),

    _output_body: $ => choice(
      $.assignment,
      $.embedded_scm,
      $.comment,
    ),

    // Assignments

    assignment: $ => seq(
      $.assignment_id,
      '=',
      $._identifier_init,
    ),

    assignment_id: $ => choice(
      $.symbol,
      $.string,
    ),

    _identifier_init: $ => choice(
      $.string,
      $.number_expression,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
      $.embedded_scm,
    ),

    // Number expressions

    number_expression: $ => choice(
      prec.left(PREC.NUMBER_ADD, seq($.number_expression, '+', $.number_term)),
      prec.left(PREC.NUMBER_ADD, seq($.number_expression, '-', $.number_term)),
      $.number_term,
    ),

    number_term: $ => choice(
      prec.left(PREC.NUMBER_MUL, seq($.number_term, '*', $.number_factor)),
      prec.left(PREC.NUMBER_MUL, seq($.number_term, '/', $.number_factor)),
      $.number_factor,
    ),

    number_factor: $ => choice(
      prec(PREC.UNARY, seq('-', $.number_factor)),
      $.bare_number,
    ),

    bare_number: $ => choice(
      $.unsigned,
      $.real,
      $.fraction,
    ),

    // Basic tokens

    unsigned: $ => /[0-9]+/,
    real: $ => /[0-9]*\.[0-9]+/,
    fraction: $ => /[0-9]+\/[0-9]+/,
    string: $ => /"([^"\\]|\\.)*"/,
    symbol: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,

    // Embedded Scheme

    embedded_scm: $ => seq(
      '#',
      choice(
        $.scheme_boolean,
        $.scheme_number,
        $.scheme_symbol,
        $.scheme_string,
        $.scheme_list,
      ),
    ),

    scheme_boolean: $ => choice('##t', '##f', '#t', '#f'),
    scheme_number: $ => choice($.unsigned, $.real, $.fraction),
    scheme_symbol: $ => seq("'", $.symbol),
    scheme_string: $ => $.string,
    scheme_list: $ => seq(
      choice("'(", '('),
      repeat($._scheme_element),
      ')',
    ),

    _scheme_element: $ => choice(
      $.scheme_boolean,
      $.scheme_number,
      $.scheme_symbol,
      $.scheme_string,
      $.scheme_list,
      $.symbol,
    ),

    // Markup

    markup: $ => seq(
      '\\markup',
      $._markup_body,
    ),

    _markup_body: $ => choice(
      $.markup_block,
      $.markup_command,
      $.markup_word,
      $.string,
    ),

    markup_block: $ => seq(
      '{',
      repeat($._markup_element),
      '}',
    ),

    _markup_element: $ => choice(
      $.markup_command,
      $.markup_word,
      $.string,
      $.markup_block,
      $.embedded_scm,
    ),

    markup_command: $ => prec.right(seq(
      $.markup_command_name,
      repeat($._markup_argument),
    )),

    markup_command_name: $ => choice(
      '\\bold', '\\italic', '\\underline',
      '\\box', '\\circle', '\\oval',
      '\\concat', '\\column', '\\line', '\\center-column',
      '\\fontsize', '\\abs-fontsize', '\\magnify',
      '\\raise', '\\lower', '\\translate',
      '\\super', '\\sub', '\\caps', '\\smallCaps',
      '\\huge', '\\large', '\\normalsize', '\\small', '\\tiny', '\\teeny',
      '\\hspace', '\\vspace',
      '\\combine', '\\pad-around',
      '\\fill-line', '\\justify', '\\wordwrap',
      '\\note', '\\note-by-number',
      '\\sharp', '\\flat', '\\natural',
      '\\dynamic',
    ),

    _markup_argument: $ => choice(
      $.string,
      $.markup_block,
      $.markup_command,
      $.number_expression,
      $.embedded_scm,
    ),

    markup_word: $ => /[^\s{}\\#"]+/,

    // Lyrics

    lyric_mode: $ => seq(
      choice('\\lyricmode', '\\lyrics'),
      optional($.context_modification),
      $._lyric_body,
    ),

    _lyric_body: $ => $.lyric_block,

    lyric_block: $ => seq(
      '{',
      repeat($._lyric_element),
      '}',
    ),

    _lyric_element: $ => choice(
      $.lyric_word,
      $.lyric_extender,
      $.lyric_hyphen,
      $.lyric_skip,
      $.duration,
      $.string,
      $.comment,
    ),

    lyric_skip: $ => prec.right(seq('s', optional($.duration))),

    lyric_word: $ => /[a-zA-Z][a-zA-Z0-9']*/,
    lyric_extender: $ => '__',
    lyric_hyphen: $ => '--',

    addlyrics: $ => seq(
      '\\addlyrics',
      optional($.context_modification),
      $._lyric_body,
    ),

    lyricsto: $ => seq(
      '\\lyricsto',
      choice($.string, $.symbol),
      $._lyric_body,
    ),

    // Figured bass

    figure_mode: $ => seq(
      choice('\\figuremode', '\\figures'),
      optional($.context_modification),
      $.figure_block,
    ),

    figure_block: $ => seq(
      '{',
      repeat($._figure_element),
      '}',
    ),

    _figure_element: $ => choice(
      $.figure_group,
      $.figure_rest,
      $.figure_skip,
      $.comment,
    ),

    figure_rest: $ => prec.right(seq('r', optional($.duration))),
    figure_skip: $ => prec.right(seq('s', optional($.duration))),

    figure_group: $ => seq(
      '<',
      repeat($.figure),
      '>',
      optional($.duration),
    ),

    figure: $ => seq(
      choice(
        $.figure_number,
        '_',
      ),
      repeat($.figure_modifier),
    ),

    figure_number: $ => /[0-9]+/,

    figure_modifier: $ => choice(
      '+',
      '\\+',
      '!',
      '\\!',
      '[',
      ']',
    ),

    // Chord mode

    chord_mode: $ => seq(
      choice('\\chordmode', '\\chords'),
      optional($.context_modification),
      $.chord_body_block,
    ),

    chord_body_block: $ => seq(
      '{',
      repeat($._chord_body_element),
      '}',
    ),

    _chord_body_element: $ => choice(
      $.chord_name,
      $.rest,
      $.skip,
      $.comment,
    ),

    chord_name: $ => seq(
      $.pitch,
      optional($.chord_quality),
      optional($.chord_inversion),
      optional($.duration),
    ),

    chord_quality: $ => prec.right(seq(
      ':',
      repeat1($.chord_modifier),
    )),

    chord_modifier: $ => choice(
      // Chord intervals - only common ones
      '3', '5', '6', '7', '9', '11', '13',
      'maj',
      'min',
      'm',
      'dim',
      'aug',
      'sus',
      '+',
      '-',
      '^',
    ),

    chord_inversion: $ => seq(
      '/',
      $.pitch,
    ),

    // Music

    music: $ => seq(
      '{',
      repeat($._music_expression),
      '}',
    ),

    simultaneous_music: $ => seq(
      '<<',
      repeat($._music_expression),
      '>>',
    ),

    // Context

    context_expression: $ => seq(
      choice('\\new', '\\context'),
      $.symbol,
      optional(seq('=', $.string)),
      optional($.context_modification),
      $._contextable_music,
    ),

    _contextable_music: $ => choice(
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.repeat_expression,
      $.music_function,
    ),

    context_modification: $ => seq(
      '\\with',
      '{',
      repeat($._context_mod),
      '}',
    ),

    _context_mod: $ => choice(
      $.context_def_mod,
      $.assignment,
      $.embedded_scm,
      $.comment,
    ),

    context_def_mod: $ => seq(
      choice('\\consists', '\\remove', '\\accepts', '\\denies', '\\alias'),
      choice($.string, $.symbol),
    ),

    // Property operations

    property_expression: $ => choice(
      $.override_expression,
      $.set_expression,
      $.revert_expression,
      $.unset_expression,
    ),

    override_expression: $ => seq(
      '\\override',
      $.property_path,
      '=',
      $._scalar,
    ),

    set_expression: $ => seq(
      '\\set',
      $.property_path,
      '=',
      $._scalar,
    ),

    revert_expression: $ => seq(
      '\\revert',
      $.property_path,
    ),

    unset_expression: $ => seq(
      '\\unset',
      $.property_path,
    ),

    property_path: $ => seq(
      $.symbol,
      repeat(seq('.', $.symbol)),
    ),

    _scalar: $ => choice(
      $.string,
      $.number_expression,
      $.embedded_scm,
    ),

    // Repeat

    repeat_expression: $ => prec.right(seq(
      '\\repeat',
      $.symbol,
      $.unsigned,
      $._contextable_music,
      optional($.alternative_expression),
    )),

    alternative_expression: $ => seq(
      '\\alternative',
      '{',
      repeat($._contextable_music),
      '}',
    ),

    // Music functions

    music_function: $ => seq(
      choice(
        '\\relative',
        '\\transpose',
        '\\fixed',
        '\\absolute',
      ),
      repeat($.pitch),
      $._contextable_music,
    ),

    _music_expression: $ => choice(
      $.note,
      $.rest,
      $.skip,
      $.chord,
      $.music,
      $.simultaneous_music,
      $.context_expression,
      $.property_expression,
      $.repeat_expression,
      $.music_function,
      $.addlyrics,
      $.lyricsto,
      $.markup,
      $.comment,
    ),

    // Notes, rests, skips, chords

    note: $ => seq(
      $.pitch,
      optional($.duration),
      repeat($.post_event),
    ),

    rest: $ => seq(
      'r',
      optional($.duration),
      repeat($.post_event),
    ),

    skip: $ => seq(
      's',
      optional($.duration),
      repeat($.post_event),
    ),

    chord: $ => seq(
      '<',
      repeat1($.chord_element),
      '>',
      optional($.duration),
      repeat($.post_event),
    ),

    chord_element: $ => $.pitch,

    // Post-events

    post_event: $ => choice(
      $.tie,
      $.slur_open,
      $.slur_close,
      $.beam_open,
      $.beam_close,
      $.articulation,
      $.dynamic,
      $.fingering,
    ),

    tie: $ => '~',
    slur_open: $ => '(',
    slur_close: $ => ')',
    beam_open: $ => '[',
    beam_close: $ => ']',

    // Articulations

    articulation: $ => choice(
      seq($.script_direction, $.articulation_mark),
      seq(optional($.script_direction), $.articulation_command),
    ),

    script_direction: $ => choice('^', '_', '-'),

    articulation_mark: $ => choice(
      '.',
      '>',
      '!',
      '+',
    ),

    articulation_command: $ => choice(
      '\\accent',
      '\\staccato',
      '\\staccatissimo',
      '\\tenuto',
      '\\marcato',
      '\\portato',
      '\\trill',
      '\\turn',
      '\\mordent',
      '\\prall',
      '\\fermata',
      '\\upbow',
      '\\downbow',
      '\\open',
      '\\stopped',
      '\\flageolet',
      '\\thumb',
      '\\lheel',
      '\\rheel',
      '\\ltoe',
      '\\rtoe',
      '\\snappizzicato',
      '\\espressivo',
    ),

    // Dynamics

    dynamic: $ => choice(
      $.dynamic_mark,
      $.hairpin,
    ),

    dynamic_mark: $ => choice(
      '\\ppppp', '\\pppp', '\\ppp', '\\pp', '\\p',
      '\\mp', '\\mf',
      '\\f', '\\ff', '\\fff', '\\ffff', '\\fffff',
      '\\fp', '\\sf', '\\sfz', '\\sff', '\\fz', '\\rfz', '\\sp', '\\spp',
    ),

    hairpin: $ => choice(
      '\\<',
      '\\>',
      '\\!',
      '\\cr',
      '\\decr',
      '\\cresc',
      '\\decresc',
      '\\dim',
    ),

    // Fingering

    fingering: $ => seq(
      $.script_direction,
      $.fingering_number,
    ),

    fingering_number: $ => /[0-5]/,

    // Pitch

    pitch: $ => seq(
      $.pitch_name,
      optional($.accidental),
      optional($.octave),
    ),

    pitch_name: $ => /[a-g]/,

    accidental: $ => choice(
      'isis',
      'eses',
      'is',
      'es',
    ),

    octave: $ => choice(
      $.octave_up,
      $.octave_down,
    ),

    octave_up: $ => repeat1("'"),
    octave_down: $ => repeat1(","),

    // Duration

    duration: $ => seq(
      $.duration_value,
      optional($.dots),
      repeat($.multiplier),
    ),

    duration_value: $ => choice(
      '\\breve',
      '\\longa',
      '\\maxima',
      /[0-9]+/,
    ),

    dots: $ => repeat1('.'),

    multiplier: $ => seq(
      '*',
      choice($.unsigned, $.fraction),
    ),
  },
});
