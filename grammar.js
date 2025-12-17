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
      ),
    ),

    scheme_boolean: $ => choice('##t', '##f', '#t', '#f'),
    scheme_number: $ => $.unsigned,
    scheme_symbol: $ => seq("'", $.symbol),

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
    ),

    tie: $ => '~',
    slur_open: $ => '(',
    slur_close: $ => ')',
    beam_open: $ => '[',
    beam_close: $ => ']',

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
