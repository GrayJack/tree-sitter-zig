#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 32
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_doc_comment = 1,
  sym_line_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_const = 4,
  anon_sym_var = 5,
  anon_sym_EQ = 6,
  sym_integer_literal = 7,
  sym_float_literal = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_char_literal_token1 = 10,
  anon_sym_c = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_literal_token1 = 13,
  anon_sym_DQUOTE2 = 14,
  anon_sym_BSLASH_BSLASH = 15,
  aux_sym_multiline_string_literal_token1 = 16,
  sym_escape_sequence = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_identifier = 20,
  sym_source_file = 21,
  sym__statement = 22,
  sym__expression_statement = 23,
  sym__declaration_statement = 24,
  sym__expression = 25,
  sym_empty_statement = 26,
  sym_assignment = 27,
  sym__literals = 28,
  sym_char_literal = 29,
  sym_string_literal = 30,
  sym_multiline_string_literal = 31,
  sym_boolean_literal = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_string_literal_repeat1 = 34,
  aux_sym_multiline_string_literal_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_c] = "c",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_multiline_string_literal_token1] = "multiline_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym__expression] = "_expression",
  [sym_empty_statement] = "empty_statement",
  [sym_assignment] = "assignment",
  [sym__literals] = "_literals",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_multiline_string_literal] = "multiline_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_multiline_string_literal_repeat1] = "multiline_string_literal_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expression = 1,
  field_name = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 3},
    {field_name, 1},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'X') ADVANCE(31);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(88);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(28),
    [sym_empty_statement] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym__literals] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_multiline_string_literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_c] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(28),
    [sym_empty_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__literals] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_multiline_string_literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_const] = ACTIONS(30),
    [anon_sym_var] = ACTIONS(30),
    [sym_integer_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_c] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(28),
    [sym_empty_statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym__literals] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_multiline_string_literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_c] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(29),
    [sym__literals] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [sym_multiline_string_literal] = STATE(29),
    [sym_boolean_literal] = STATE(29),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(53),
    [sym_float_literal] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_c] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_const] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(57),
    [sym_integer_literal] = ACTIONS(59),
    [sym_float_literal] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_c] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_var] = ACTIONS(61),
    [sym_integer_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_c] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_const] = ACTIONS(65),
    [anon_sym_var] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(67),
    [sym_float_literal] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_c] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
  },
  [8] = {
    [aux_sym_string_literal_repeat1] = STATE(16),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(69),
    [anon_sym_DQUOTE2] = ACTIONS(71),
    [sym_escape_sequence] = ACTIONS(73),
  },
  [9] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(17),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(75),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(77),
    [sym_escape_sequence] = ACTIONS(77),
  },
  [10] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(79),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(81),
    [sym_escape_sequence] = ACTIONS(81),
  },
  [11] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(84),
    [anon_sym_DQUOTE2] = ACTIONS(87),
    [sym_escape_sequence] = ACTIONS(89),
  },
  [12] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(92),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(94),
    [sym_escape_sequence] = ACTIONS(94),
  },
  [13] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(96),
    [anon_sym_DQUOTE2] = ACTIONS(98),
    [sym_escape_sequence] = ACTIONS(100),
  },
  [14] = {
    [aux_sym_string_literal_repeat1] = STATE(13),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(102),
    [anon_sym_DQUOTE2] = ACTIONS(104),
    [sym_escape_sequence] = ACTIONS(106),
  },
  [15] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(12),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(108),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(110),
    [sym_escape_sequence] = ACTIONS(110),
  },
  [16] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(96),
    [anon_sym_DQUOTE2] = ACTIONS(104),
    [sym_escape_sequence] = ACTIONS(100),
  },
  [17] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(108),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(94),
    [sym_escape_sequence] = ACTIONS(94),
  },
  [18] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [aux_sym_char_literal_token1] = ACTIONS(114),
    [sym_escape_sequence] = ACTIONS(116),
  },
  [19] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(120),
  },
  [20] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(122),
  },
  [21] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(124),
  },
  [22] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(126),
  },
  [23] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(128),
  },
  [24] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(130),
  },
  [25] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(132),
  },
  [26] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(134),
  },
  [27] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(136),
  },
  [28] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(138),
  },
  [29] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [30] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(142),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(22),
  [13] = {.count = 1, .reusable = false}, SHIFT(28),
  [15] = {.count = 1, .reusable = true}, SHIFT(18),
  [17] = {.count = 1, .reusable = false}, SHIFT(19),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(20),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [33] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, SHIFT(19),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 5, .production_id = 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 5, .production_id = 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [69] = {.count = 1, .reusable = false}, SHIFT(16),
  [71] = {.count = 1, .reusable = true}, SHIFT(21),
  [73] = {.count = 1, .reusable = true}, SHIFT(16),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(17),
  [79] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(10),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 3),
  [94] = {.count = 1, .reusable = false}, SHIFT(10),
  [96] = {.count = 1, .reusable = false}, SHIFT(11),
  [98] = {.count = 1, .reusable = true}, SHIFT(30),
  [100] = {.count = 1, .reusable = true}, SHIFT(11),
  [102] = {.count = 1, .reusable = false}, SHIFT(13),
  [104] = {.count = 1, .reusable = true}, SHIFT(24),
  [106] = {.count = 1, .reusable = true}, SHIFT(13),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [110] = {.count = 1, .reusable = false}, SHIFT(12),
  [112] = {.count = 1, .reusable = false}, SHIFT(26),
  [114] = {.count = 1, .reusable = false}, SHIFT(25),
  [116] = {.count = 1, .reusable = true}, SHIFT(25),
  [118] = {.count = 1, .reusable = true}, SHIFT(14),
  [120] = {.count = 1, .reusable = true}, SHIFT(15),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [126] = {.count = 1, .reusable = true}, SHIFT(27),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [132] = {.count = 1, .reusable = true}, SHIFT(23),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [136] = {.count = 1, .reusable = true}, SHIFT(4),
  [138] = {.count = 1, .reusable = true}, SHIFT(7),
  [140] = {.count = 1, .reusable = true}, SHIFT(6),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 4),
  [144] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zig(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
