#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHheader = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ = 4,
  sym_assignment_id = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  sym_bare_number = 10,
  anon_sym_BSLASH = 11,
  sym_comment_statement = 12,
  sym_string = 13,
  sym_lilypond = 14,
  sym_top_level_expression = 15,
  sym_header_block = 16,
  sym_lilypond_header_body = 17,
  sym_assignment = 18,
  aux_sym_lilypond_repeat1 = 19,
  aux_sym_lilypond_header_body_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHheader] = "\\header",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [sym_assignment_id] = "assignment_id",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_bare_number] = "bare_number",
  [anon_sym_BSLASH] = "\\",
  [sym_comment_statement] = "comment_statement",
  [sym_string] = "string",
  [sym_lilypond] = "lilypond",
  [sym_top_level_expression] = "top_level_expression",
  [sym_header_block] = "header_block",
  [sym_lilypond_header_body] = "lilypond_header_body",
  [sym_assignment] = "assignment",
  [aux_sym_lilypond_repeat1] = "lilypond_repeat1",
  [aux_sym_lilypond_header_body_repeat1] = "lilypond_header_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHheader] = anon_sym_BSLASHheader,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_assignment_id] = sym_assignment_id,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_bare_number] = sym_bare_number,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment_statement] = sym_comment_statement,
  [sym_string] = sym_string,
  [sym_lilypond] = sym_lilypond,
  [sym_top_level_expression] = sym_top_level_expression,
  [sym_header_block] = sym_header_block,
  [sym_lilypond_header_body] = sym_lilypond_header_body,
  [sym_assignment] = sym_assignment,
  [aux_sym_lilypond_repeat1] = aux_sym_lilypond_repeat1,
  [aux_sym_lilypond_header_body_repeat1] = aux_sym_lilypond_header_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHheader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_lilypond] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_header_block] = {
    .visible = true,
    .named = true,
  },
  [sym_lilypond_header_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lilypond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lilypond_header_body_repeat1] = {
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
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASHheader);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_assignment_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_assignment_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_assignment_id] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_bare_number] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_comment_statement] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_lilypond] = STATE(11),
    [sym_top_level_expression] = STATE(2),
    [sym_header_block] = STATE(7),
    [aux_sym_lilypond_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHheader] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_BSLASHheader,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_header_block,
    STATE(3), 2,
      sym_top_level_expression,
      aux_sym_lilypond_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_BSLASHheader,
    STATE(7), 1,
      sym_header_block,
    STATE(3), 2,
      sym_top_level_expression,
      aux_sym_lilypond_repeat1,
  [28] = 3,
    ACTIONS(14), 1,
      sym_assignment_id,
    STATE(13), 1,
      sym_lilypond_header_body,
    STATE(5), 2,
      sym_assignment,
      aux_sym_lilypond_header_body_repeat1,
  [39] = 3,
    ACTIONS(14), 1,
      sym_assignment_id,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_assignment,
      aux_sym_lilypond_header_body_repeat1,
  [50] = 3,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      sym_assignment_id,
    STATE(6), 2,
      sym_assignment,
      aux_sym_lilypond_header_body_repeat1,
  [61] = 1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
  [66] = 1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
  [71] = 1,
    ACTIONS(27), 2,
      anon_sym_RBRACE,
      sym_assignment_id,
  [76] = 1,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
  [80] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(33), 1,
      anon_sym_EQ,
  [88] = 1,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
  [92] = 1,
    ACTIONS(37), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_header_body, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lilypond_header_body_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_header_body_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_block, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
