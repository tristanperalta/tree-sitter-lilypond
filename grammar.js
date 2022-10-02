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
      "{", /.+/, "}"
    ),

    command: $ => seq(
      $.command_identifier,
      choice($.block, $.string)
    ),

    command_identifier: $ => /\\[^ ]+/,

    comment_statement: $ => /% .+/,

    string: $ => /".+"/
  }
})
