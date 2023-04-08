#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_atom_token1 = 1,
  aux_sym_atom_token2 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_quoted_string_token1 = 4,
  anon_sym_PERCENT = 5,
  anon_sym_DQUOTE_BSLASH_PIPE = 6,
  aux_sym_block_string_token1 = 7,
  anon_sym_DQUOTE_BSLASH_GT = 8,
  aux_sym_raw_string_token1 = 9,
  sym_escape_sequence = 10,
  anon_sym_PERCENT_LBRACE = 11,
  anon_sym_PERCENT_LBRACE2 = 12,
  anon_sym_COLON = 13,
  anon_sym_RBRACE = 14,
  sym_variable_name = 15,
  sym_variable_value = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_comment = 19,
  sym_configuration = 20,
  sym_atom = 21,
  sym_quoted_string = 22,
  sym_block_string = 23,
  sym_raw_string = 24,
  sym_variable = 25,
  sym__immediate_variable = 26,
  sym_list = 27,
  aux_sym_configuration_repeat1 = 28,
  aux_sym_atom_repeat1 = 29,
  aux_sym_quoted_string_repeat1 = 30,
  aux_sym_block_string_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_atom_token1] = "atom_token1",
  [aux_sym_atom_token2] = "atom_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE_BSLASH_PIPE] = "\"\\|",
  [aux_sym_block_string_token1] = "block_string_token1",
  [anon_sym_DQUOTE_BSLASH_GT] = "\"\\>",
  [aux_sym_raw_string_token1] = "raw_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_LBRACE2] = "%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_variable_name] = "variable_name",
  [sym_variable_value] = "variable_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [sym_configuration] = "configuration",
  [sym_atom] = "atom",
  [sym_quoted_string] = "quoted_string",
  [sym_block_string] = "block_string",
  [sym_raw_string] = "raw_string",
  [sym_variable] = "variable",
  [sym__immediate_variable] = "variable",
  [sym_list] = "list",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_block_string_repeat1] = "block_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [aux_sym_atom_token2] = aux_sym_atom_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DQUOTE_BSLASH_PIPE] = anon_sym_DQUOTE_BSLASH_PIPE,
  [aux_sym_block_string_token1] = aux_sym_block_string_token1,
  [anon_sym_DQUOTE_BSLASH_GT] = anon_sym_DQUOTE_BSLASH_GT,
  [aux_sym_raw_string_token1] = aux_sym_raw_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_PERCENT_LBRACE2] = anon_sym_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_variable_value] = sym_variable_value,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [sym_configuration] = sym_configuration,
  [sym_atom] = sym_atom,
  [sym_quoted_string] = sym_quoted_string,
  [sym_block_string] = sym_block_string,
  [sym_raw_string] = sym_raw_string,
  [sym_variable] = sym_variable,
  [sym__immediate_variable] = sym_variable,
  [sym_list] = sym_list,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_block_string_repeat1] = aux_sym_block_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_BSLASH_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_BSLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_block_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_string_repeat1] = {
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
  [6] = 3,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 18,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 16,
  [26] = 26,
  [27] = 18,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 16,
  [37] = 17,
  [38] = 18,
  [39] = 39,
  [40] = 39,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 43,
  [47] = 39,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 49,
  [55] = 51,
  [56] = 56,
  [57] = 49,
  [58] = 51,
  [59] = 49,
  [60] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '|') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(47);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if ((0 <= lookahead && lookahead <= 31) ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(25);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead == '{') ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE_BSLASH_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if ((0 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= ' ') ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_BSLASH_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(23);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable_value);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < 127 || 255 < lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_configuration] = STATE(53),
    [sym_atom] = STATE(4),
    [sym_quoted_string] = STATE(4),
    [sym_block_string] = STATE(4),
    [sym_raw_string] = STATE(4),
    [sym_variable] = STATE(13),
    [sym_list] = STATE(4),
    [aux_sym_configuration_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_atom_token1] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(13),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_atom_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_BSLASH_GT,
    ACTIONS(15), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_BSLASH_PIPE,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_variable,
    STATE(5), 6,
      sym_atom,
      sym_quoted_string,
      sym_block_string,
      sym_raw_string,
      sym_list,
      aux_sym_configuration_repeat1,
  [36] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_atom_token1,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_BSLASH_PIPE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE_BSLASH_GT,
    ACTIONS(37), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_variable,
    STATE(3), 6,
      sym_atom,
      sym_quoted_string,
      sym_block_string,
      sym_raw_string,
      sym_list,
      aux_sym_configuration_repeat1,
  [72] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_atom_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_BSLASH_PIPE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_BSLASH_GT,
    ACTIONS(15), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_variable,
    STATE(3), 6,
      sym_atom,
      sym_quoted_string,
      sym_block_string,
      sym_raw_string,
      sym_list,
      aux_sym_configuration_repeat1,
  [108] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_atom_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_BSLASH_GT,
    ACTIONS(15), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_BSLASH_PIPE,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_variable,
    STATE(6), 6,
      sym_atom,
      sym_quoted_string,
      sym_block_string,
      sym_raw_string,
      sym_list,
      aux_sym_configuration_repeat1,
  [144] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      aux_sym_atom_token1,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_DQUOTE_BSLASH_GT,
    ACTIONS(37), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_BSLASH_PIPE,
    STATE(13), 1,
      sym_variable,
    STATE(6), 6,
      sym_atom,
      sym_quoted_string,
      sym_block_string,
      sym_raw_string,
      sym_list,
      aux_sym_configuration_repeat1,
  [180] = 6,
    ACTIONS(54), 1,
      aux_sym_block_string_token1,
    ACTIONS(56), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(12), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(50), 7,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [207] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_block_string_token1,
    ACTIONS(66), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(62), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(11), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(50), 6,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [236] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_block_string_token1,
    ACTIONS(78), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(72), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(9), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(70), 6,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [265] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_block_string_token1,
    ACTIONS(87), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(81), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(10), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(70), 7,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [292] = 7,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      aux_sym_block_string_token1,
    ACTIONS(94), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(9), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(92), 6,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [321] = 6,
    ACTIONS(56), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_block_string_token1,
    ACTIONS(98), 2,
      anon_sym_PERCENT,
      sym_escape_sequence,
    STATE(10), 2,
      sym__immediate_variable,
      aux_sym_block_string_repeat1,
    ACTIONS(92), 7,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_atom_token2,
    ACTIONS(108), 1,
      anon_sym_PERCENT_LBRACE2,
    STATE(15), 2,
      sym__immediate_variable,
      aux_sym_atom_repeat1,
    ACTIONS(104), 3,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_atom_token2,
    ACTIONS(117), 1,
      anon_sym_PERCENT_LBRACE2,
    STATE(14), 2,
      sym__immediate_variable,
      aux_sym_atom_repeat1,
    ACTIONS(112), 3,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [400] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(124), 1,
      aux_sym_atom_token2,
    STATE(14), 2,
      sym__immediate_variable,
      aux_sym_atom_repeat1,
    ACTIONS(122), 3,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [426] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(128), 2,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(126), 9,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [445] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(132), 8,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [464] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(136), 2,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(134), 9,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [483] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(126), 8,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [502] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(134), 8,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
  [521] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(130), 2,
      aux_sym_block_string_token1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(132), 9,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      aux_sym_atom_token1,
      aux_sym_atom_token2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      aux_sym_atom_token1,
      anon_sym_DQUOTE,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE_BSLASH_PIPE,
      anon_sym_DQUOTE_BSLASH_GT,
      anon_sym_PERCENT_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [728] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_PERCENT,
    ACTIONS(178), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(172), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
    STATE(33), 2,
      sym__immediate_variable,
      aux_sym_quoted_string_repeat1,
  [749] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_PERCENT,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(183), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
    STATE(33), 2,
      sym__immediate_variable,
      aux_sym_quoted_string_repeat1,
  [770] = 6,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LBRACE2,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
    STATE(34), 2,
      sym__immediate_variable,
      aux_sym_quoted_string_repeat1,
  [791] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
    ACTIONS(128), 3,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE2,
  [804] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
    ACTIONS(130), 3,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE2,
  [817] = 3,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
    ACTIONS(136), 3,
      aux_sym_quoted_string_token1,
      sym_escape_sequence,
      anon_sym_PERCENT_LBRACE2,
  [830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      sym_variable_value,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_variable_value,
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      sym_variable_value,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_variable_value,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
  [920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_variable_value,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
  [937] = 2,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_raw_string_token1,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_variable_name,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_variable_name,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_variable_name,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_variable_name,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 374,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 445,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 521,
  [SMALL_STATE(22)] = 540,
  [SMALL_STATE(23)] = 558,
  [SMALL_STATE(24)] = 576,
  [SMALL_STATE(25)] = 594,
  [SMALL_STATE(26)] = 612,
  [SMALL_STATE(27)] = 630,
  [SMALL_STATE(28)] = 648,
  [SMALL_STATE(29)] = 664,
  [SMALL_STATE(30)] = 680,
  [SMALL_STATE(31)] = 696,
  [SMALL_STATE(32)] = 712,
  [SMALL_STATE(33)] = 728,
  [SMALL_STATE(34)] = 749,
  [SMALL_STATE(35)] = 770,
  [SMALL_STATE(36)] = 791,
  [SMALL_STATE(37)] = 804,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 830,
  [SMALL_STATE(40)] = 840,
  [SMALL_STATE(41)] = 850,
  [SMALL_STATE(42)] = 860,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 880,
  [SMALL_STATE(45)] = 890,
  [SMALL_STATE(46)] = 900,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 920,
  [SMALL_STATE(49)] = 930,
  [SMALL_STATE(50)] = 937,
  [SMALL_STATE(51)] = 944,
  [SMALL_STATE(52)] = 951,
  [SMALL_STATE(53)] = 958,
  [SMALL_STATE(54)] = 965,
  [SMALL_STATE(55)] = 972,
  [SMALL_STATE(56)] = 979,
  [SMALL_STATE(57)] = 986,
  [SMALL_STATE(58)] = 993,
  [SMALL_STATE(59)] = 1000,
  [SMALL_STATE(60)] = 1007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(50),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(52),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_string_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(51),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(10),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(14),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(55),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_variable, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_variable, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_variable, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_variable, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_variable, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_variable, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(58),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dune(void) {
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
