/**
 * Tree-sitter grammar for LilyPond music notation
 *
 * Based on LilyPond 2.24.4 parser (lily/parser.yy)
 * Milestone 1: Core Structure
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
      $.embedded_scm,
      $.comment,
      // Future milestones:
      // $.composite_music,
      // $.full_markup,
    ),

    // ==========================================================================
    // Comments (Step 1.2)
    // ==========================================================================

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: $ => token(seq('%', /[^{\n][^\n]*/)),

    // Simple block comment (non-nested) - will be replaced by external scanner
    block_comment: $ => token(seq(
      '%{',
      /[^%]*(%+[^%}][^%]*)*/,
      '%}'
    )),

    // ==========================================================================
    // Version Statement (Step 1.3)
    // ==========================================================================

    version_statement: $ => seq(
      '\\version',
      alias($.string, $.version_number),
    ),

    // ==========================================================================
    // Header Block (Step 1.4)
    // ==========================================================================

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

    // ==========================================================================
    // Book Structure (Step 1.5)
    // ==========================================================================

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
      $.embedded_scm,
      $.comment,
      // Future milestones:
      // $.composite_music,
      // $.full_markup,
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
      $.embedded_scm,
      $.comment,
      // Future milestones:
      // $.composite_music,
      // $.full_markup,
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
      $.embedded_scm,
      $.comment,
      // Future milestones:
      // $.music,
    ),

    // ==========================================================================
    // Output Definitions (Step 1.5)
    // ==========================================================================

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
      // Future: $.context_def
    ),

    // ==========================================================================
    // Assignments (Step 1.4, 1.5)
    // ==========================================================================

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
      $.embedded_scm,
      // Future milestones:
      // $.music,
      // $.markup,
    ),

    // ==========================================================================
    // Number Expressions (Step 1.6)
    // ==========================================================================

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

    // ==========================================================================
    // Basic Tokens (Step 1.1)
    // ==========================================================================

    // Unsigned integer: 0, 123, 456
    unsigned: $ => /[0-9]+/,

    // Real number: 3.14, .5, 0.123
    real: $ => /[0-9]*\.[0-9]+/,

    // Fraction: 3/4, 1/2
    fraction: $ => /[0-9]+\/[0-9]+/,

    // String with escape handling
    string: $ => /"([^"\\]|\\.)*"/,

    // Symbol/identifier
    symbol: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,

    // ==========================================================================
    // Embedded Scheme (Step 1.8) - Placeholder
    // ==========================================================================

    // Basic embedded Scheme - will be expanded with external scanner
    embedded_scm: $ => seq(
      '#',
      choice(
        $.scheme_boolean,
        $.scheme_number,
        $.scheme_symbol,
        // $.scheme_expression - requires external scanner for balanced parens
      ),
    ),

    scheme_boolean: $ => choice('##t', '##f', '#t', '#f'),

    scheme_number: $ => $.unsigned,

    scheme_symbol: $ => seq("'", $.symbol),
  },
});
