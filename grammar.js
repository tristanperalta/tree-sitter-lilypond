module.exports = grammar({
  name: "lilypond",

  rules: {
    source_file: $ => repeat($.statement),
    statement: $ => choice(
      $.version_statement,
      $.comment_statement,
      $.block,
      $.command
    ),

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
        repeat(/.*/),
        "%}"
      )
    )),

    string: $ => /".+"/,
  }
})
