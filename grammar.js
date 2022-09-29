module.exports = grammar({
  name: "lilypond",

  rules: {
    source_file: $ => choice(
      $.version,
      repeat(
        choice($.block, $.command)
      )
    ),

    version: $ => seq(
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

    string: $ => /".+"/
  }
})
