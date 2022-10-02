#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHversion = 1,
  anon_sym_LBRACE = 2,
  aux_sym_block_token1 = 3,
  anon_sym_RBRACE = 4,
  sym_command_identifier = 5,
  sym_comment_statement = 6,
  sym_string = 7,
  sym_source_file = 8,
  sym_statement = 9,
  sym_version_statement = 10,
  sym_block = 11,
  sym_command = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_block_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHversion] = "\\version",
  [anon_sym_LBRACE] = "{",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_RBRACE] = "}",
  [sym_command_identifier] = "command_identifier",
  [sym_comment_statement] = "comment_statement",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_version_statement] = "version_statement",
  [sym_block] = "block",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHversion] = anon_sym_BSLASHversion,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_command_identifier] = sym_command_identifier,
  [sym_comment_statement] = sym_comment_statement,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_version_statement] = sym_version_statement,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_command_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BSLASHversion);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHversion] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_command_identifier] = ACTIONS(1),
    [sym_comment_statement] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_statement] = STATE(2),
    [sym_version_statement] = STATE(4),
    [sym_block] = STATE(4),
    [sym_command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHversion] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_command_identifier] = ACTIONS(9),
    [sym_comment_statement] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_version_statement] = STATE(4),
    [sym_block] = STATE(4),
    [sym_command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_BSLASHversion] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_command_identifier] = ACTIONS(9),
    [sym_comment_statement] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_version_statement] = STATE(4),
    [sym_block] = STATE(4),
    [sym_command] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_BSLASHversion] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(20),
    [sym_command_identifier] = ACTIONS(23),
    [sym_comment_statement] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(31), 2,
      anon_sym_BSLASHversion,
      sym_command_identifier,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_comment_statement,
  [10] = 2,
    ACTIONS(35), 2,
      anon_sym_BSLASHversion,
      sym_command_identifier,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_comment_statement,
  [20] = 2,
    ACTIONS(39), 2,
      anon_sym_BSLASHversion,
      sym_command_identifier,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_comment_statement,
  [30] = 2,
    ACTIONS(43), 2,
      anon_sym_BSLASHversion,
      sym_command_identifier,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_comment_statement,
  [40] = 2,
    ACTIONS(47), 2,
      anon_sym_BSLASHversion,
      sym_command_identifier,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_comment_statement,
  [50] = 3,
    ACTIONS(49), 1,
      aux_sym_block_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_block_repeat1,
  [60] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_string,
    STATE(7), 1,
      sym_block,
  [70] = 3,
    ACTIONS(55), 1,
      aux_sym_block_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_block_repeat1,
  [80] = 3,
    ACTIONS(59), 1,
      aux_sym_block_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_block_repeat1,
  [90] = 1,
    ACTIONS(64), 1,
      sym_string,
  [94] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 94,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_statement, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lilypond(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
