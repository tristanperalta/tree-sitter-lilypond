#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_BSLASHheader = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ = 4,
  sym_assignment_id = 5,
  anon_sym_BSLASHbook = 6,
  anon_sym_BSLASHbookpart = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  sym_bare_number = 12,
  anon_sym_BSLASHversion = 13,
  aux_sym_block_token1 = 14,
  anon_sym_BSLASH = 15,
  sym_comment_statement = 16,
  sym_string = 17,
  sym_lilypond = 18,
  sym__top_level_expression = 19,
  sym_header_block = 20,
  aux_sym__lilypond_header_body = 21,
  sym_assignment = 22,
  sym_book_block = 23,
  sym__book_body = 24,
  sym_bookpart_block = 25,
  sym_version_statement = 26,
  sym_any = 27,
  aux_sym_lilypond_repeat1 = 28,
  aux_sym_book_block_repeat1 = 29,
  alias_sym_version_number = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHheader] = "\\header",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [sym_assignment_id] = "assignment_id",
  [anon_sym_BSLASHbook] = "\\book",
  [anon_sym_BSLASHbookpart] = "\\bookpart",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_bare_number] = "bare_number",
  [anon_sym_BSLASHversion] = "\\version",
  [aux_sym_block_token1] = "block_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_comment_statement] = "comment_statement",
  [sym_string] = "string",
  [sym_lilypond] = "lilypond",
  [sym__top_level_expression] = "_top_level_expression",
  [sym_header_block] = "header_block",
  [aux_sym__lilypond_header_body] = "_lilypond_header_body",
  [sym_assignment] = "assignment",
  [sym_book_block] = "book_block",
  [sym__book_body] = "_book_body",
  [sym_bookpart_block] = "bookpart_block",
  [sym_version_statement] = "version_statement",
  [sym_any] = "any",
  [aux_sym_lilypond_repeat1] = "lilypond_repeat1",
  [aux_sym_book_block_repeat1] = "book_block_repeat1",
  [alias_sym_version_number] = "version_number",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHheader] = anon_sym_BSLASHheader,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_assignment_id] = sym_assignment_id,
  [anon_sym_BSLASHbook] = anon_sym_BSLASHbook,
  [anon_sym_BSLASHbookpart] = anon_sym_BSLASHbookpart,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_bare_number] = sym_bare_number,
  [anon_sym_BSLASHversion] = anon_sym_BSLASHversion,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment_statement] = sym_comment_statement,
  [sym_string] = sym_string,
  [sym_lilypond] = sym_lilypond,
  [sym__top_level_expression] = sym__top_level_expression,
  [sym_header_block] = sym_header_block,
  [aux_sym__lilypond_header_body] = aux_sym__lilypond_header_body,
  [sym_assignment] = sym_assignment,
  [sym_book_block] = sym_book_block,
  [sym__book_body] = sym__book_body,
  [sym_bookpart_block] = sym_bookpart_block,
  [sym_version_statement] = sym_version_statement,
  [sym_any] = sym_any,
  [aux_sym_lilypond_repeat1] = aux_sym_lilypond_repeat1,
  [aux_sym_book_block_repeat1] = aux_sym_book_block_repeat1,
  [alias_sym_version_number] = alias_sym_version_number,
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
  [anon_sym_BSLASHbook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbookpart] = {
    .visible = true,
    .named = false,
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
  [anon_sym_BSLASHversion] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
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
  [sym__top_level_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_header_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__lilypond_header_body] = {
    .visible = false,
    .named = false,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_book_block] = {
    .visible = true,
    .named = true,
  },
  [sym__book_body] = {
    .visible = false,
    .named = true,
  },
  [sym_bookpart_block] = {
    .visible = true,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lilypond_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_book_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_version_number] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_version_number,
  },
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASHheader);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_assignment_id);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_assignment_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASHbook);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASHbook);
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASHbookpart);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASHversion);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment_statement);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
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
    [sym_lilypond] = STATE(20),
    [sym__top_level_expression] = STATE(2),
    [sym_header_block] = STATE(2),
    [sym_book_block] = STATE(2),
    [sym_version_statement] = STATE(2),
    [aux_sym_lilypond_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHheader] = ACTIONS(5),
    [anon_sym_BSLASHbook] = ACTIONS(7),
    [anon_sym_BSLASHversion] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_BSLASHheader,
    ACTIONS(7), 1,
      anon_sym_BSLASHbook,
    ACTIONS(9), 1,
      anon_sym_BSLASHversion,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__top_level_expression,
      sym_header_block,
      sym_book_block,
      sym_version_statement,
      aux_sym_lilypond_repeat1,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_BSLASHheader,
    ACTIONS(18), 1,
      anon_sym_BSLASHbook,
    ACTIONS(21), 1,
      anon_sym_BSLASHversion,
    STATE(3), 5,
      sym__top_level_expression,
      sym_header_block,
      sym_book_block,
      sym_version_statement,
      aux_sym_lilypond_repeat1,
  [40] = 5,
    ACTIONS(5), 1,
      anon_sym_BSLASHheader,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_BSLASHbookpart,
    ACTIONS(28), 1,
      sym_comment_statement,
    STATE(6), 4,
      sym_header_block,
      sym__book_body,
      sym_bookpart_block,
      aux_sym_book_block_repeat1,
  [59] = 5,
    ACTIONS(30), 1,
      anon_sym_BSLASHheader,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_BSLASHbookpart,
    ACTIONS(38), 1,
      sym_comment_statement,
    STATE(5), 4,
      sym_header_block,
      sym__book_body,
      sym_bookpart_block,
      aux_sym_book_block_repeat1,
  [78] = 5,
    ACTIONS(5), 1,
      anon_sym_BSLASHheader,
    ACTIONS(26), 1,
      anon_sym_BSLASHbookpart,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_comment_statement,
    STATE(5), 4,
      sym_header_block,
      sym__book_body,
      sym_bookpart_block,
      aux_sym_book_block_repeat1,
  [97] = 2,
    ACTIONS(47), 1,
      anon_sym_BSLASHbook,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
      anon_sym_RBRACE,
      anon_sym_BSLASHbookpart,
      anon_sym_BSLASHversion,
      sym_comment_statement,
  [109] = 4,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_assignment_id,
    ACTIONS(53), 1,
      sym_comment_statement,
    STATE(9), 2,
      aux_sym__lilypond_header_body,
      sym_assignment,
  [123] = 4,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      sym_assignment_id,
    ACTIONS(60), 1,
      sym_comment_statement,
    STATE(9), 2,
      aux_sym__lilypond_header_body,
      sym_assignment,
  [137] = 3,
    ACTIONS(51), 1,
      sym_assignment_id,
    ACTIONS(63), 1,
      sym_comment_statement,
    STATE(8), 2,
      aux_sym__lilypond_header_body,
      sym_assignment,
  [148] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
      anon_sym_BSLASHbook,
      anon_sym_BSLASHversion,
  [155] = 1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
      anon_sym_BSLASHbook,
      anon_sym_BSLASHversion,
  [162] = 1,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_BSLASHheader,
      anon_sym_BSLASHbook,
      anon_sym_BSLASHversion,
  [169] = 1,
    ACTIONS(71), 4,
      anon_sym_BSLASHheader,
      anon_sym_RBRACE,
      anon_sym_BSLASHbookpart,
      sym_comment_statement,
  [176] = 1,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      sym_assignment_id,
      sym_comment_statement,
  [182] = 2,
    ACTIONS(75), 1,
      aux_sym_block_token1,
    STATE(25), 1,
      sym_any,
  [189] = 1,
    ACTIONS(77), 1,
      anon_sym_EQ,
  [193] = 1,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
  [197] = 1,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
  [201] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [205] = 1,
    ACTIONS(85), 1,
      sym_string,
  [209] = 1,
    ACTIONS(87), 1,
      sym_string,
  [213] = 1,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
  [217] = 1,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
  [221] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 201,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 209,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 221,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2), SHIFT_REPEAT(18),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2), SHIFT_REPEAT(23),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_repeat1, 2), SHIFT_REPEAT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_book_block_repeat1, 2), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_book_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_book_block_repeat1, 2), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_book_block_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_block, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_block, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lilypond_header_body, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lilypond_header_body, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lilypond_header_body, 2), SHIFT_REPEAT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_book_block, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_book_block, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bookpart_block, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
