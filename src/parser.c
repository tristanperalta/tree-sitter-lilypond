#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
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
  sym_string = 6,
  sym_source_file = 7,
  sym_version = 8,
  sym_block = 9,
  sym_command = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHversion] = "\\version",
  [anon_sym_LBRACE] = "{",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_RBRACE] = "}",
  [sym_command_identifier] = "command_identifier",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_version] = "version",
  [sym_block] = "block",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHversion] = anon_sym_BSLASHversion,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_command_identifier] = sym_command_identifier,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_version] = sym_version,
  [sym_block] = sym_block,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BSLASHversion);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_block_token1);
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
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_command_identifier);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHversion] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_command_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_version] = STATE(10),
    [sym_block] = STATE(2),
    [sym_command] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHversion] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_command_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_command_identifier,
    STATE(3), 3,
      sym_block,
      sym_command,
      aux_sym_source_file_repeat1,
  [15] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(20), 1,
      sym_command_identifier,
    STATE(3), 3,
      sym_block,
      sym_command,
      aux_sym_source_file_repeat1,
  [30] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_string,
    STATE(5), 1,
      sym_block,
  [40] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_command_identifier,
  [46] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_command_identifier,
  [52] = 1,
    ACTIONS(29), 1,
      sym_string,
  [56] = 1,
    ACTIONS(31), 1,
      aux_sym_block_token1,
  [60] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [64] = 1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
  [68] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [72] = 1,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 68,
  [SMALL_STATE(12)] = 72,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
