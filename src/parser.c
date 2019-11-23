#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 32
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_null_literal = 20,
  sym_undefined_literal = 21,
  sym_identifier = 22,
  sym_source_file = 23,
  sym__statement = 24,
  sym__expression_statement = 25,
  sym__declaration_statement = 26,
  sym__expression = 27,
  sym_empty_statement = 28,
  sym_assignment = 29,
  sym__literals = 30,
  sym_char_literal = 31,
  sym_string_literal = 32,
  sym_multiline_string_literal = 33,
  sym_boolean_literal = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_string_literal_repeat1 = 36,
  aux_sym_multiline_string_literal_repeat1 = 37,
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
  [sym_null_literal] = "null_literal",
  [sym_undefined_literal] = "undefined_literal",
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
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined_literal] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'X') ADVANCE(42);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(99);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
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
  [19] = {.lex_state = 48},
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
    [sym_null_literal] = ACTIONS(1),
    [sym_undefined_literal] = ACTIONS(1),
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
    [sym_null_literal] = ACTIONS(25),
    [sym_undefined_literal] = ACTIONS(25),
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_const] = ACTIONS(32),
    [anon_sym_var] = ACTIONS(32),
    [sym_integer_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_c] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(50),
    [anon_sym_false] = ACTIONS(50),
    [sym_null_literal] = ACTIONS(53),
    [sym_undefined_literal] = ACTIONS(53),
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
    [ts_builtin_sym_end] = ACTIONS(56),
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
    [sym_null_literal] = ACTIONS(25),
    [sym_undefined_literal] = ACTIONS(25),
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
    [sym_integer_literal] = ACTIONS(58),
    [sym_float_literal] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_c] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_null_literal] = ACTIONS(62),
    [sym_undefined_literal] = ACTIONS(62),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_const] = ACTIONS(64),
    [anon_sym_var] = ACTIONS(64),
    [sym_integer_literal] = ACTIONS(66),
    [sym_float_literal] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_c] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [sym_null_literal] = ACTIONS(64),
    [sym_undefined_literal] = ACTIONS(64),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_const] = ACTIONS(68),
    [anon_sym_var] = ACTIONS(68),
    [sym_integer_literal] = ACTIONS(70),
    [sym_float_literal] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_c] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [sym_null_literal] = ACTIONS(68),
    [sym_undefined_literal] = ACTIONS(68),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_const] = ACTIONS(72),
    [anon_sym_var] = ACTIONS(72),
    [sym_integer_literal] = ACTIONS(74),
    [sym_float_literal] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_c] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [sym_null_literal] = ACTIONS(72),
    [sym_undefined_literal] = ACTIONS(72),
  },
  [8] = {
    [aux_sym_string_literal_repeat1] = STATE(16),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(76),
    [anon_sym_DQUOTE2] = ACTIONS(78),
    [sym_escape_sequence] = ACTIONS(80),
  },
  [9] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(17),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(82),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(84),
    [sym_escape_sequence] = ACTIONS(84),
  },
  [10] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(86),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(88),
    [sym_escape_sequence] = ACTIONS(88),
  },
  [11] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(91),
    [anon_sym_DQUOTE2] = ACTIONS(94),
    [sym_escape_sequence] = ACTIONS(96),
  },
  [12] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(99),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(101),
    [sym_escape_sequence] = ACTIONS(101),
  },
  [13] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(103),
    [anon_sym_DQUOTE2] = ACTIONS(105),
    [sym_escape_sequence] = ACTIONS(107),
  },
  [14] = {
    [aux_sym_string_literal_repeat1] = STATE(13),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(109),
    [anon_sym_DQUOTE2] = ACTIONS(111),
    [sym_escape_sequence] = ACTIONS(113),
  },
  [15] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(12),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(115),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(117),
    [sym_escape_sequence] = ACTIONS(117),
  },
  [16] = {
    [aux_sym_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(103),
    [anon_sym_DQUOTE2] = ACTIONS(111),
    [sym_escape_sequence] = ACTIONS(107),
  },
  [17] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(10),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(115),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(101),
    [sym_escape_sequence] = ACTIONS(101),
  },
  [18] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [aux_sym_char_literal_token1] = ACTIONS(121),
    [sym_escape_sequence] = ACTIONS(123),
  },
  [19] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(127),
  },
  [20] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(129),
  },
  [21] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(131),
  },
  [22] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(133),
  },
  [23] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(135),
  },
  [24] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(137),
  },
  [25] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(139),
  },
  [26] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(141),
  },
  [27] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(143),
  },
  [28] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(145),
  },
  [29] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(147),
  },
  [30] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(149),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(151),
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
  [25] = {.count = 1, .reusable = true}, SHIFT(28),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [58] = {.count = 1, .reusable = false}, SHIFT(29),
  [60] = {.count = 1, .reusable = true}, SHIFT(19),
  [62] = {.count = 1, .reusable = true}, SHIFT(29),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 5, .production_id = 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 5, .production_id = 1),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [76] = {.count = 1, .reusable = false}, SHIFT(16),
  [78] = {.count = 1, .reusable = true}, SHIFT(21),
  [80] = {.count = 1, .reusable = true}, SHIFT(16),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [84] = {.count = 1, .reusable = false}, SHIFT(17),
  [86] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(10),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(11),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 3),
  [101] = {.count = 1, .reusable = false}, SHIFT(10),
  [103] = {.count = 1, .reusable = false}, SHIFT(11),
  [105] = {.count = 1, .reusable = true}, SHIFT(30),
  [107] = {.count = 1, .reusable = true}, SHIFT(11),
  [109] = {.count = 1, .reusable = false}, SHIFT(13),
  [111] = {.count = 1, .reusable = true}, SHIFT(24),
  [113] = {.count = 1, .reusable = true}, SHIFT(13),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(12),
  [119] = {.count = 1, .reusable = false}, SHIFT(26),
  [121] = {.count = 1, .reusable = false}, SHIFT(25),
  [123] = {.count = 1, .reusable = true}, SHIFT(25),
  [125] = {.count = 1, .reusable = true}, SHIFT(14),
  [127] = {.count = 1, .reusable = true}, SHIFT(15),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(27),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [139] = {.count = 1, .reusable = true}, SHIFT(23),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(4),
  [145] = {.count = 1, .reusable = true}, SHIFT(7),
  [147] = {.count = 1, .reusable = true}, SHIFT(6),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 4),
  [151] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
