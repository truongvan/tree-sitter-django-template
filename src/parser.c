#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE_PERCENT = 1,
  aux_sym_tag_token1 = 2,
  aux_sym_tag_token2 = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_LBRACE = 5,
  anon_sym_RBRACE_RBRACE = 6,
  sym_doctype = 7,
  anon_sym_LT = 8,
  aux_sym_html_tag_token1 = 9,
  anon_sym_EQ = 10,
  aux_sym_html_tag_token2 = 11,
  anon_sym_GT = 12,
  sym_text = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym__element = 16,
  sym__django_element = 17,
  sym__html_element = 18,
  sym_tag = 19,
  sym_variable = 20,
  sym_html_tag = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_html_tag_repeat1 = 23,
  alias_sym_attribute_name = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_tag_token2] = "tag_token2",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_doctype] = "doctype",
  [anon_sym_LT] = "<",
  [aux_sym_html_tag_token1] = "tag_name",
  [anon_sym_EQ] = "=",
  [aux_sym_html_tag_token2] = "attribute_value",
  [anon_sym_GT] = ">",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym__django_element] = "_django_element",
  [sym__html_element] = "_html_element",
  [sym_tag] = "tag",
  [sym_variable] = "variable",
  [sym_html_tag] = "html_tag",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_html_tag_repeat1] = "html_tag_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_doctype] = sym_doctype,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_html_tag_token1] = aux_sym_html_tag_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_html_tag_token2] = aux_sym_html_tag_token2,
  [anon_sym_GT] = anon_sym_GT,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym__django_element] = sym__django_element,
  [sym__html_element] = sym__html_element,
  [sym_tag] = sym_tag,
  [sym_variable] = sym_variable,
  [sym_html_tag] = sym_html_tag,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_html_tag_repeat1] = aux_sym_html_tag_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_tag_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym__django_element] = {
    .visible = false,
    .named = true,
  },
  [sym__html_element] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_html_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_attribute_name,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '{') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(14);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_doctype);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_html_tag_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_html_tag_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_html_tag_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_html_tag_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_html_tag_token2] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__element] = STATE(2),
    [sym__django_element] = STATE(2),
    [sym__html_element] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_variable] = STATE(2),
    [sym_html_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [sym_doctype] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__element] = STATE(3),
    [sym__django_element] = STATE(3),
    [sym__html_element] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_variable] = STATE(3),
    [sym_html_tag] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [sym_doctype] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(13),
    [sym_text] = ACTIONS(23),
    [sym_comment] = ACTIONS(17),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym__django_element] = STATE(3),
    [sym__html_element] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_variable] = STATE(3),
    [sym_html_tag] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(30),
    [sym_doctype] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(36),
    [sym_text] = ACTIONS(39),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(44), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [14] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(48), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [28] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(52), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [42] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(56), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [56] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(60), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [70] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(64), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [84] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(68), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [98] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(72), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [112] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(76), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      sym_doctype,
      anon_sym_LT,
  [126] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_tag_token1,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(82), 1,
      anon_sym_GT,
  [139] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_tag_token1,
    ACTIONS(86), 1,
      anon_sym_GT,
    STATE(16), 1,
      aux_sym_html_tag_repeat1,
  [152] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_tag_token1,
    ACTIONS(91), 1,
      anon_sym_GT,
    STATE(15), 1,
      aux_sym_html_tag_repeat1,
  [165] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_tag_token1,
    ACTIONS(95), 1,
      anon_sym_GT,
    STATE(15), 1,
      aux_sym_html_tag_repeat1,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_html_tag_token1,
    ACTIONS(99), 1,
      anon_sym_GT,
  [188] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_tag_token1,
    ACTIONS(103), 1,
      anon_sym_RBRACE_RBRACE,
  [198] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_tag_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACE_RBRACE,
  [208] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_tag_token1,
    ACTIONS(111), 1,
      aux_sym_tag_token2,
  [218] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_tag_token1,
    ACTIONS(115), 1,
      aux_sym_tag_token2,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_html_tag_token1,
    ACTIONS(117), 1,
      anon_sym_GT,
  [238] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_tag_token1,
    ACTIONS(121), 1,
      anon_sym_PERCENT_RBRACE,
  [248] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_tag_token1,
    ACTIONS(125), 1,
      anon_sym_PERCENT_RBRACE,
  [258] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_tag_token1,
    ACTIONS(129), 1,
      anon_sym_GT,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENT_RBRACE,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE_RBRACE,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_html_tag_token1,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PERCENT_RBRACE,
  [296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE_RBRACE,
  [303] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_tag_token2,
  [310] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_tag_token2,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_html_tag_token2,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_html_tag_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 178,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 218,
  [SMALL_STATE(22)] = 228,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 258,
  [SMALL_STATE(26)] = 268,
  [SMALL_STATE(27)] = 275,
  [SMALL_STATE(28)] = 282,
  [SMALL_STATE(29)] = 289,
  [SMALL_STATE(30)] = 296,
  [SMALL_STATE(31)] = 303,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_tag, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag, 5),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_tag, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_tag, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_tag_repeat1, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_tag_repeat1, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_tag_repeat1, 2), SHIFT_REPEAT(35),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_tag_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_tag_repeat1, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_tag_repeat1, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_django_template(void) {
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
