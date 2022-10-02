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
      $.string,
    ),

    block: $ => seq(
      "{",
      repeat(/.+/),
      "}"
    ),

    command: $ => seq(
      $.identifier,
      choice($.block, $.string)
    ),

    identifier: $ => token(seq("\\", /[^ ]+/)),

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
