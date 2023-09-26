const PRECS = {
  BOOK_IDENTIFIER: 1,
  composite_music: 2,
  full_markup: 3,
  full_markup_list: 4,
  SCM_TOKEN: 5,
  embedded_scm_active: 6,
  output_def: 7,
  book_block: 50,
  book_body: 49,
  bookpart_block: 48,
  bookpart_body: 49
};

module.exports = grammar({
  name: "lilypond",

  rules: {
    lilypond: $ => repeat($.top_level_expression),
    top_level_expression: $ => choice(
      $.header_block,
      //$.book_block,
      //$.bookpart_block,
      //$.BOOK_IDENTIFIER,
      //$.score_block,
      //$.composite_music,
      //$.full_markup,
      //$.full_markup_list,
      //$.SCM_TOKEN,
      //$.embedded_scm_active,
      //$.output_def
    ),

    header_block: $ => seq(
      "\\header", "{", repeat($.lilypond_header_body), "}"
    ),

    lilypond_header_body: $ => choice(
      $.assignment,
      //$.SCM_TOKEN,
      //$.embedded_scm_active
    ),

    assignment: $ => choice(
      seq(/\w+/, '=', $.string)
      //seq($.assignment_id, '=', $.identifier_init),
      //seq($.assignment_id, '.', $.property_path, '=', $.identifier_init),
      //seq($.markup_mode_word, '=', $.identifier_init)
    ),

    assignment_id: $ => choice(
      $.identifier,
      // $.symbol
    ),

    identifier_init: $ => choice(
      //$.identifier_init_nonumber,
      $.number_expression,
      $.string,
      //seq($.symbol_list_part_bare, '.', $.property_path),
      //seq($.symbol_list_part_bare, ',', $.property_path),
      // seq($.post_event_nofinger, $.post_events)
    ),

    identifier_init_nonumber: $ => choice(
      $.header_block,
      $.score_block,
      $.book_block,
      $.bookpart_block,
      $.output_def,
      $.context_def_spec_block,
      $.music_assign,
      $.pitch_or_music,
      $.FRACTION,
      $.string,
      $.embedded_scm,
      $.partial_markup,
      $.full_markup_list,
      $.context_modification,
      seq($.partial_function, $.ETC),
    ),

    BOOK_IDENTIFIER: $ => prec(PRECS.BOOK_IDENTIFIER, $.any),

    book_block: $ => prec(PRECS.book_block, seq(
      "\\book", "{", $.book_body, "}"
    )),

    book_body: $ => prec(PRECS.book_body, choice(
      //$.BOOK_IDENTIFIER,
      seq($.book_body, $.paper_block),
      seq($.book_body, $.bookpart_block),
      seq($.book_body, $.score_block),
      seq($.book_body, $.composite_music),
      seq($.book_body, $.full_markup),
      seq($.book_body, $.full_markup_list),
      seq($.book_body, $.SCM_TOKEN),
      seq($.book_body, $.embedded_scm_active),
      $.book_body,
      seq($.book_body, $.error)
    )),

    bookpart_block: $ => prec(PRECS.bookpart_block, seq(
      "\\bookpart", "{", $.bookpart_body, "}"
    )),

    bookpart_body: $ => prec(PRECS.bookpart_body, choice(
      //$.BOOK_IDENTIFIER,
      seq($.bookpart_body, $.paper_block),
      seq($.bookpart_body, $.score_block),
      seq($.bookpart_body, $.composite_music),
      seq($.bookpart_body, $.full_markup),
      seq($.bookpart_body, $.full_markup_list),
      seq($.bookpart_body, $.SCM_TOKEN),
      seq($.bookpart_body, $.embedded_scm_active),
      //$.bookpart_body,
      seq($.bookpart_body, $.error)
    )),

    score_block: $ => seq(
      "\\score", "{", $.score_body, "}"
    ),

    score_body: $ => choice(
      $.score_items,
      seq($.score_body, $.error)
    ),

    score_items: $ => $.any,

    score_item: $ => choice(
      $.embedded_scm,
      $.music,
      $.output_def
    ),

    number_expression: $ => choice(
      seq($.number_expression, "+", $.number_term),
      seq($.number_expression, "-", $.number_term),
      $.number_term
    ),

    number_term: $ => prec(5, choice(
      $.number_factor,
      seq($.number_factor, "*", $.number_factor),
      seq($.number_factor, "/", $.number_factor),
    )),

    number_factor: $ => choice(
      $.number_factor,
      $.bare_number
    ),

    bare_number: $ => /[0-9]+/,

    composite_music: $ => $.any,
    full_markup: $ => $.any,
    full_markup_list: $ => $.any,
    SCM_TOKEN: $ => prec(2, $.any),
    embedded_scm_active: $ => prec(1, $.any),
    embedded_scm: $ => $.any,
    output_def: $ => $.any,
    property_path: $ => $.any,
    markup_mode_word: $ => $.any,
    symbol_list_part_bare: $ => $.any,
    partial_function: $ => $.any,
    ETC: $ => $.any,
    context_def_spec_block: $ => $.any,


    music_assign: $ => $.any,
    pitch_or_music: $ => $.any,
    FRACTION: $ => $.any,
    partial_markup: $ => $.any,
    context_modification: $ => $.any,
    paper_block: $ => $.any,
    error: $ => $.any,
    music: $ => $.any,

    version_statement: $ => seq(
      "\\version",
      alias($.string, $.version_number),
    ),

    block: $ => seq(
      "{",
      repeat(/.+/),
      "}"
    ),

    command: $ => seq(
      "\\",
      $.identifier,
      choice($.block, $.string)
    ),

    identifier: $ => /[^ ]+/,

    comment_statement: $ => token(choice(
      seq("%", /.*/),
      seq(
        "%{",
        't',
        "%}"
      )
    )),

    string: $ => /".+"/,

    any: $ => /.+/
  }
})
