#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 209
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_doc_comment = 1,
  sym_line_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_threadlocal = 4,
  anon_sym_comptime = 5,
  anon_sym_const = 6,
  anon_sym_var = 7,
  anon_sym_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_i8 = 10,
  anon_sym_u8 = 11,
  anon_sym_i16 = 12,
  anon_sym_u16 = 13,
  anon_sym_i32 = 14,
  anon_sym_u32 = 15,
  anon_sym_i64 = 16,
  anon_sym_u64 = 17,
  anon_sym_i128 = 18,
  anon_sym_u128 = 19,
  anon_sym_isize = 20,
  anon_sym_usize = 21,
  anon_sym_c_short = 22,
  anon_sym_c_ushort = 23,
  anon_sym_c_int = 24,
  anon_sym_c_uint = 25,
  anon_sym_c_long = 26,
  anon_sym_c_ulong = 27,
  anon_sym_c_longlong = 28,
  anon_sym_c_ulonglong = 29,
  anon_sym_c_longdouble = 30,
  anon_sym_f16 = 31,
  anon_sym_f32 = 32,
  anon_sym_f64 = 33,
  anon_sym_f128 = 34,
  anon_sym_comptime_int = 35,
  anon_sym_comptime_float = 36,
  anon_sym_bool = 37,
  anon_sym_void = 38,
  anon_sym_noreturn = 39,
  anon_sym_type = 40,
  anon_sym_anyerror = 41,
  anon_sym_QMARK = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  anon_sym_LBRACE = 45,
  anon_sym_RBRACE = 46,
  anon_sym_DOT_LBRACE = 47,
  anon_sym_COMMA = 48,
  anon_sym_and = 49,
  anon_sym_or = 50,
  anon_sym_AMP = 51,
  anon_sym_PIPE = 52,
  anon_sym_CARET = 53,
  anon_sym_EQ_EQ = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_GT = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_LT_LT = 60,
  anon_sym_GT_GT = 61,
  anon_sym_PLUS = 62,
  anon_sym_DASH = 63,
  anon_sym_PLUS_PLUS = 64,
  anon_sym_PLUS_PERCENT = 65,
  anon_sym_DASH_PERCENT = 66,
  anon_sym_STAR = 67,
  anon_sym_SLASH = 68,
  anon_sym_PERCENT = 69,
  anon_sym_STAR_STAR = 70,
  anon_sym_STAR_PERCENT = 71,
  anon_sym_PIPE_PIPE = 72,
  anon_sym_orelse = 73,
  anon_sym_catch = 74,
  sym_integer_literal = 75,
  sym_float_literal = 76,
  anon_sym_SQUOTE = 77,
  aux_sym_char_literal_token1 = 78,
  anon_sym_DQUOTE = 79,
  anon_sym_c_DQUOTE = 80,
  aux_sym_string_literal_token1 = 81,
  anon_sym_DQUOTE2 = 82,
  anon_sym_BSLASH_BSLASH = 83,
  anon_sym_c_BSLASH_BSLASH = 84,
  aux_sym_multiline_string_literal_token1 = 85,
  sym_escape_sequence = 86,
  anon_sym_true = 87,
  anon_sym_false = 88,
  sym_null_literal = 89,
  sym_undefined_literal = 90,
  anon_sym_PLUS_EQ = 91,
  anon_sym_DASH_EQ = 92,
  anon_sym_STAR_EQ = 93,
  anon_sym_PLUS_PERCENT_EQ = 94,
  anon_sym_DASH_PERCENT_EQ = 95,
  anon_sym_STAR_PERCENT_EQ = 96,
  anon_sym_SLASH_EQ = 97,
  anon_sym_PERCENT_EQ = 98,
  anon_sym_AMP_EQ = 99,
  anon_sym_PIPE_EQ = 100,
  anon_sym_CARET_EQ = 101,
  anon_sym_LT_LT_EQ = 102,
  anon_sym_GT_GT_EQ = 103,
  anon_sym_TILDE = 104,
  anon_sym_BANG = 105,
  sym_identifier = 106,
  sym_source_file = 107,
  sym__statement = 108,
  sym__expression_statement = 109,
  sym__declaration_statement = 110,
  sym__expression = 111,
  sym_empty_statement = 112,
  sym_assignment_statement = 113,
  sym__type = 114,
  sym_primitive_type = 115,
  sym_optional_type = 116,
  sym_array_type = 117,
  sym_comptime_block = 118,
  sym_block = 119,
  sym_array_expression = 120,
  sym_anonymous_array_expr = 121,
  sym_array_values = 122,
  sym_assignment_expression = 123,
  sym_compound_assignment_expr = 124,
  sym_unary_expression = 125,
  sym_binary_expression = 126,
  sym__literals = 127,
  sym_char_literal = 128,
  sym_string_literal = 129,
  sym_multiline_string_literal = 130,
  sym_boolean_literal = 131,
  sym_assignment_operator = 132,
  sym_unary_operator = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym_array_type_repeat1 = 135,
  aux_sym_anonymous_array_expr_repeat1 = 136,
  aux_sym_string_literal_repeat1 = 137,
  aux_sym_multiline_string_literal_repeat1 = 138,
  alias_sym_binary_operator = 139,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_threadlocal] = "threadlocal",
  [anon_sym_comptime] = "comptime",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_i64] = "i64",
  [anon_sym_u64] = "u64",
  [anon_sym_i128] = "i128",
  [anon_sym_u128] = "u128",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_c_short] = "c_short",
  [anon_sym_c_ushort] = "c_ushort",
  [anon_sym_c_int] = "c_int",
  [anon_sym_c_uint] = "c_uint",
  [anon_sym_c_long] = "c_long",
  [anon_sym_c_ulong] = "c_ulong",
  [anon_sym_c_longlong] = "c_longlong",
  [anon_sym_c_ulonglong] = "c_ulonglong",
  [anon_sym_c_longdouble] = "c_longdouble",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_f128] = "f128",
  [anon_sym_comptime_int] = "comptime_int",
  [anon_sym_comptime_float] = "comptime_float",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_noreturn] = "noreturn",
  [anon_sym_type] = "type",
  [anon_sym_anyerror] = "anyerror",
  [anon_sym_QMARK] = "?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_LBRACE] = ".{",
  [anon_sym_COMMA] = ",",
  [anon_sym_and] = "binary_operator",
  [anon_sym_or] = "binary_operator",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "binary_operator",
  [anon_sym_CARET] = "binary_operator",
  [anon_sym_EQ_EQ] = "binary_operator",
  [anon_sym_BANG_EQ] = "binary_operator",
  [anon_sym_LT] = "binary_operator",
  [anon_sym_LT_EQ] = "binary_operator",
  [anon_sym_GT] = "binary_operator",
  [anon_sym_GT_EQ] = "binary_operator",
  [anon_sym_LT_LT] = "binary_operator",
  [anon_sym_GT_GT] = "binary_operator",
  [anon_sym_PLUS] = "binary_operator",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS_PLUS] = "binary_operator",
  [anon_sym_PLUS_PERCENT] = "binary_operator",
  [anon_sym_DASH_PERCENT] = "-%",
  [anon_sym_STAR] = "binary_operator",
  [anon_sym_SLASH] = "binary_operator",
  [anon_sym_PERCENT] = "binary_operator",
  [anon_sym_STAR_STAR] = "binary_operator",
  [anon_sym_STAR_PERCENT] = "binary_operator",
  [anon_sym_PIPE_PIPE] = "binary_operator",
  [anon_sym_orelse] = "binary_operator",
  [anon_sym_catch] = "binary_operator",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_c_DQUOTE] = "c\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_c_BSLASH_BSLASH] = "c\\\\",
  [aux_sym_multiline_string_literal_token1] = "multiline_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_literal] = "null_literal",
  [sym_undefined_literal] = "undefined_literal",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_PLUS_PERCENT_EQ] = "+%=",
  [anon_sym_DASH_PERCENT_EQ] = "-%=",
  [anon_sym_STAR_PERCENT_EQ] = "*%=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym__expression] = "_expression",
  [sym_empty_statement] = "empty_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_optional_type] = "optional_type",
  [sym_array_type] = "array_type",
  [sym_comptime_block] = "comptime_block",
  [sym_block] = "block",
  [sym_array_expression] = "array_expression",
  [sym_anonymous_array_expr] = "anonymous_array_expr",
  [sym_array_values] = "array_values",
  [sym_assignment_expression] = "assignment_expression",
  [sym_compound_assignment_expr] = "compound_assignment_expr",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__literals] = "_literals",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_multiline_string_literal] = "multiline_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_assignment_operator] = "assignment_operator",
  [sym_unary_operator] = "unary_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_anonymous_array_expr_repeat1] = "anonymous_array_expr_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_multiline_string_literal_repeat1] = "multiline_string_literal_repeat1",
  [alias_sym_binary_operator] = "binary_operator",
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
  [anon_sym_threadlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_ulonglong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_longdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DOT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_orelse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_DQUOTE] = {
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
  [anon_sym_c_BSLASH_BSLASH] = {
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comptime_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_array_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_array_values] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_assignment_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_anonymous_array_expr_repeat1] = {
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
  [alias_sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_expression = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_size = 6,
  field_type = 7,
  field_values = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_size] = "size",
  [field_type] = "type",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
    {field_values, 1},
  [2] =
    {field_expression, 1},
    {field_operator, 0},
  [4] =
    {field_size, 0, .inherited = true},
  [5] =
    {field_size, 0, .inherited = true},
    {field_size, 1, .inherited = true},
  [7] =
    {field_size, 1},
  [8] =
    {field_values, 1},
  [9] =
    {field_left, 0},
    {field_right, 2},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_size, 0, .inherited = true},
    {field_type, 1},
    {field_values, 2},
  [17] =
    {field_values, 1},
    {field_values, 2},
  [19] =
    {field_expression, 3},
    {field_name, 1},
  [21] =
    {field_values, 1},
    {field_values, 2},
    {field_values, 3},
  [24] =
    {field_expression, 4},
    {field_name, 2},
  [26] =
    {field_expression, 5},
    {field_name, 1},
    {field_type, 3},
  [29] =
    {field_expression, 6},
    {field_name, 2},
    {field_type, 4},
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = sym_array_values,
  },
  [9] = {
    [1] = alias_sym_binary_operator,
  },
  [11] = {
    [1] = sym_array_values,
    [2] = sym_array_values,
  },
  [13] = {
    [1] = sym_array_values,
    [2] = sym_array_values,
    [3] = sym_array_values,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(269);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead == 'f') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == 'v') ADVANCE(492);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(259);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(269);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(489);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == 'v') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '6') ADVANCE(223);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(189);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(191);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(29);
      if (lookahead == '6') ADVANCE(185);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '6') ADVANCE(187);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(195);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(229);
      END_STATE();
    case 29:
      if (lookahead == '8') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == '8') ADVANCE(199);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(341);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(342);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'z') ADVANCE(54);
      END_STATE();
    case 144:
      if (lookahead == 'z') ADVANCE(55);
      END_STATE();
    case 145:
      if (lookahead == '{') ADVANCE(251);
      END_STATE();
    case 146:
      if (lookahead == '{') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 147:
      if (lookahead == '}') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 149:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 159:
      if (eof) ADVANCE(161);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(269);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == 'v') ADVANCE(425);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(167);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(167);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_c_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_c_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_c_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_anyerror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(393);
      if (lookahead == '|') ADVANCE(303);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(394);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(277);
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(278);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(399);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '+') ADVANCE(286);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '+') ADVANCE(287);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(292);
      if (lookahead == '=') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(301);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '=') ADVANCE(379);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(302);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(387);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(389);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(385);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_orelse);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == 'X') ADVANCE(153);
      if (lookahead == '_') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '_') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '_') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(166);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_c_DQUOTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_c_BSLASH_BSLASH);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(347);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '+') ADVANCE(282);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '<') ADVANCE(270);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '|') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_undefined_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '_') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '_') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(411);
      if (lookahead == '3') ADVANCE(412);
      if (lookahead == '6') ADVANCE(417);
      if (lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(411);
      if (lookahead == '3') ADVANCE(412);
      if (lookahead == '6') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(415);
      if (lookahead == '3') ADVANCE(413);
      if (lookahead == '6') ADVANCE(418);
      if (lookahead == '8') ADVANCE(182);
      if (lookahead == 's') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '3') ADVANCE(414);
      if (lookahead == '6') ADVANCE(419);
      if (lookahead == '8') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 's') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(416);
      if (lookahead == '3') ADVANCE(414);
      if (lookahead == '6') ADVANCE(419);
      if (lookahead == '8') ADVANCE(184);
      if (lookahead == 's') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(420);
      if (lookahead == '6') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(421);
      if (lookahead == '6') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(422);
      if (lookahead == '6') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 'y') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == 's') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 'y') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(535);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 160},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 160},
  [75] = {.lex_state = 160},
  [76] = {.lex_state = 160},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 15},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_threadlocal] = ACTIONS(1),
    [anon_sym_comptime] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_c_short] = ACTIONS(1),
    [anon_sym_c_ushort] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_c_uint] = ACTIONS(1),
    [anon_sym_c_long] = ACTIONS(1),
    [anon_sym_c_ulong] = ACTIONS(1),
    [anon_sym_c_longlong] = ACTIONS(1),
    [anon_sym_c_ulonglong] = ACTIONS(1),
    [anon_sym_c_longdouble] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_f128] = ACTIONS(1),
    [anon_sym_comptime_int] = ACTIONS(1),
    [anon_sym_comptime_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_noreturn] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_anyerror] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_orelse] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_c_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_undefined_literal] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(206),
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(163),
    [sym_empty_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_array_type_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(163),
    [sym_empty_statement] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_array_type_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(163),
    [sym_empty_statement] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_array_type_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_threadlocal] = ACTIONS(50),
    [anon_sym_comptime] = ACTIONS(53),
    [anon_sym_const] = ACTIONS(56),
    [anon_sym_var] = ACTIONS(56),
    [anon_sym_i8] = ACTIONS(59),
    [anon_sym_u8] = ACTIONS(59),
    [anon_sym_i16] = ACTIONS(59),
    [anon_sym_u16] = ACTIONS(59),
    [anon_sym_i32] = ACTIONS(59),
    [anon_sym_u32] = ACTIONS(59),
    [anon_sym_i64] = ACTIONS(59),
    [anon_sym_u64] = ACTIONS(59),
    [anon_sym_i128] = ACTIONS(59),
    [anon_sym_u128] = ACTIONS(59),
    [anon_sym_isize] = ACTIONS(59),
    [anon_sym_usize] = ACTIONS(59),
    [anon_sym_c_short] = ACTIONS(59),
    [anon_sym_c_ushort] = ACTIONS(59),
    [anon_sym_c_int] = ACTIONS(59),
    [anon_sym_c_uint] = ACTIONS(59),
    [anon_sym_c_long] = ACTIONS(59),
    [anon_sym_c_ulong] = ACTIONS(59),
    [anon_sym_c_longlong] = ACTIONS(59),
    [anon_sym_c_ulonglong] = ACTIONS(59),
    [anon_sym_c_longdouble] = ACTIONS(59),
    [anon_sym_f16] = ACTIONS(59),
    [anon_sym_f32] = ACTIONS(59),
    [anon_sym_f64] = ACTIONS(59),
    [anon_sym_f128] = ACTIONS(59),
    [anon_sym_comptime_int] = ACTIONS(59),
    [anon_sym_comptime_float] = ACTIONS(59),
    [anon_sym_bool] = ACTIONS(59),
    [anon_sym_void] = ACTIONS(59),
    [anon_sym_noreturn] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_anyerror] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_DOT_LBRACE] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DASH_PERCENT] = ACTIONS(74),
    [sym_integer_literal] = ACTIONS(80),
    [sym_float_literal] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_c_DQUOTE] = ACTIONS(86),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(89),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_null_literal] = ACTIONS(80),
    [sym_undefined_literal] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [sym_identifier] = ACTIONS(95),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__declaration_statement] = STATE(6),
    [sym__expression] = STATE(120),
    [sym_empty_statement] = STATE(6),
    [sym_assignment_statement] = STATE(6),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_threadlocal] = ACTIONS(100),
    [anon_sym_comptime] = ACTIONS(102),
    [anon_sym_const] = ACTIONS(104),
    [anon_sym_var] = ACTIONS(104),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym__expression_statement] = STATE(4),
    [sym__declaration_statement] = STATE(4),
    [sym__expression] = STATE(133),
    [sym_empty_statement] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_threadlocal] = ACTIONS(100),
    [anon_sym_comptime] = ACTIONS(102),
    [anon_sym_const] = ACTIONS(104),
    [anon_sym_var] = ACTIONS(104),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__declaration_statement] = STATE(6),
    [sym__expression] = STATE(155),
    [sym_empty_statement] = STATE(6),
    [sym_assignment_statement] = STATE(6),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_threadlocal] = ACTIONS(115),
    [anon_sym_comptime] = ACTIONS(118),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_i8] = ACTIONS(59),
    [anon_sym_u8] = ACTIONS(59),
    [anon_sym_i16] = ACTIONS(59),
    [anon_sym_u16] = ACTIONS(59),
    [anon_sym_i32] = ACTIONS(59),
    [anon_sym_u32] = ACTIONS(59),
    [anon_sym_i64] = ACTIONS(59),
    [anon_sym_u64] = ACTIONS(59),
    [anon_sym_i128] = ACTIONS(59),
    [anon_sym_u128] = ACTIONS(59),
    [anon_sym_isize] = ACTIONS(59),
    [anon_sym_usize] = ACTIONS(59),
    [anon_sym_c_short] = ACTIONS(59),
    [anon_sym_c_ushort] = ACTIONS(59),
    [anon_sym_c_int] = ACTIONS(59),
    [anon_sym_c_uint] = ACTIONS(59),
    [anon_sym_c_long] = ACTIONS(59),
    [anon_sym_c_ulong] = ACTIONS(59),
    [anon_sym_c_longlong] = ACTIONS(59),
    [anon_sym_c_ulonglong] = ACTIONS(59),
    [anon_sym_c_longdouble] = ACTIONS(59),
    [anon_sym_f16] = ACTIONS(59),
    [anon_sym_f32] = ACTIONS(59),
    [anon_sym_f64] = ACTIONS(59),
    [anon_sym_f128] = ACTIONS(59),
    [anon_sym_comptime_int] = ACTIONS(59),
    [anon_sym_comptime_float] = ACTIONS(59),
    [anon_sym_bool] = ACTIONS(59),
    [anon_sym_void] = ACTIONS(59),
    [anon_sym_noreturn] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_anyerror] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_DOT_LBRACE] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DASH_PERCENT] = ACTIONS(74),
    [sym_integer_literal] = ACTIONS(80),
    [sym_float_literal] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_c_DQUOTE] = ACTIONS(86),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(89),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [sym_null_literal] = ACTIONS(80),
    [sym_undefined_literal] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [sym_identifier] = ACTIONS(95),
  },
  [7] = {
    [sym__expression] = STATE(91),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__expression] = STATE(91),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [9] = {
    [sym__expression] = STATE(91),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [10] = {
    [sym__expression] = STATE(88),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [11] = {
    [sym__expression] = STATE(91),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [12] = {
    [sym__expression] = STATE(87),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [13] = {
    [sym__expression] = STATE(132),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [14] = {
    [sym__expression] = STATE(140),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [15] = {
    [sym__expression] = STATE(102),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [16] = {
    [sym__expression] = STATE(103),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [17] = {
    [sym__expression] = STATE(106),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [18] = {
    [sym__expression] = STATE(92),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__expression] = STATE(107),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [20] = {
    [sym__expression] = STATE(109),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [21] = {
    [sym__expression] = STATE(110),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [22] = {
    [sym__expression] = STATE(111),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [23] = {
    [sym__expression] = STATE(112),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [24] = {
    [sym__expression] = STATE(142),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [25] = {
    [sym__expression] = STATE(94),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [26] = {
    [sym__expression] = STATE(125),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [27] = {
    [sym__expression] = STATE(126),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [28] = {
    [sym__expression] = STATE(95),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [29] = {
    [sym__expression] = STATE(128),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [30] = {
    [sym__expression] = STATE(130),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [31] = {
    [sym__expression] = STATE(164),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [32] = {
    [sym__expression] = STATE(135),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [33] = {
    [sym__expression] = STATE(145),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [34] = {
    [sym__expression] = STATE(136),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [35] = {
    [sym__expression] = STATE(137),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [36] = {
    [sym__expression] = STATE(138),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [37] = {
    [sym__expression] = STATE(139),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [38] = {
    [sym__expression] = STATE(101),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [39] = {
    [sym__expression] = STATE(141),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [40] = {
    [sym__expression] = STATE(96),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [41] = {
    [sym__expression] = STATE(161),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [42] = {
    [sym__expression] = STATE(93),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [43] = {
    [sym__expression] = STATE(149),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [44] = {
    [sym__expression] = STATE(152),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [45] = {
    [sym__expression] = STATE(153),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [46] = {
    [sym__expression] = STATE(154),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [47] = {
    [sym__expression] = STATE(156),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [48] = {
    [sym__expression] = STATE(157),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [49] = {
    [sym__expression] = STATE(162),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [50] = {
    [sym__expression] = STATE(143),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [51] = {
    [sym__expression] = STATE(144),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [52] = {
    [sym__expression] = STATE(150),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [53] = {
    [sym__expression] = STATE(151),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [54] = {
    [sym__expression] = STATE(158),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [55] = {
    [sym__expression] = STATE(91),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [56] = {
    [sym__expression] = STATE(159),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [57] = {
    [sym__expression] = STATE(98),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [58] = {
    [sym__expression] = STATE(165),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [59] = {
    [sym__expression] = STATE(97),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(25),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [60] = {
    [sym__expression] = STATE(148),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [61] = {
    [sym__expression] = STATE(147),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [62] = {
    [sym__expression] = STATE(160),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [63] = {
    [sym__expression] = STATE(146),
    [sym__type] = STATE(194),
    [sym_primitive_type] = STATE(194),
    [sym_optional_type] = STATE(194),
    [sym_array_type] = STATE(194),
    [sym_comptime_block] = STATE(119),
    [sym_block] = STATE(119),
    [sym_array_expression] = STATE(119),
    [sym_anonymous_array_expr] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_compound_assignment_expr] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym__literals] = STATE(119),
    [sym_char_literal] = STATE(119),
    [sym_string_literal] = STATE(119),
    [sym_multiline_string_literal] = STATE(119),
    [sym_boolean_literal] = STATE(119),
    [sym_unary_operator] = STATE(24),
    [aux_sym_array_type_repeat1] = STATE(171),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [64] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_threadlocal] = ACTIONS(142),
    [anon_sym_comptime] = ACTIONS(142),
    [anon_sym_const] = ACTIONS(142),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_i8] = ACTIONS(142),
    [anon_sym_u8] = ACTIONS(142),
    [anon_sym_i16] = ACTIONS(142),
    [anon_sym_u16] = ACTIONS(142),
    [anon_sym_i32] = ACTIONS(142),
    [anon_sym_u32] = ACTIONS(142),
    [anon_sym_i64] = ACTIONS(142),
    [anon_sym_u64] = ACTIONS(142),
    [anon_sym_i128] = ACTIONS(142),
    [anon_sym_u128] = ACTIONS(142),
    [anon_sym_isize] = ACTIONS(142),
    [anon_sym_usize] = ACTIONS(142),
    [anon_sym_c_short] = ACTIONS(142),
    [anon_sym_c_ushort] = ACTIONS(142),
    [anon_sym_c_int] = ACTIONS(142),
    [anon_sym_c_uint] = ACTIONS(142),
    [anon_sym_c_long] = ACTIONS(142),
    [anon_sym_c_ulong] = ACTIONS(142),
    [anon_sym_c_longlong] = ACTIONS(142),
    [anon_sym_c_ulonglong] = ACTIONS(142),
    [anon_sym_c_longdouble] = ACTIONS(142),
    [anon_sym_f16] = ACTIONS(142),
    [anon_sym_f32] = ACTIONS(142),
    [anon_sym_f64] = ACTIONS(142),
    [anon_sym_f128] = ACTIONS(142),
    [anon_sym_comptime_int] = ACTIONS(142),
    [anon_sym_comptime_float] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_void] = ACTIONS(142),
    [anon_sym_noreturn] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_anyerror] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_DOT_LBRACE] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_DASH_PERCENT] = ACTIONS(140),
    [sym_integer_literal] = ACTIONS(142),
    [sym_float_literal] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_c_DQUOTE] = ACTIONS(140),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(140),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [sym_null_literal] = ACTIONS(142),
    [sym_undefined_literal] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
  },
  [65] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_threadlocal] = ACTIONS(146),
    [anon_sym_comptime] = ACTIONS(146),
    [anon_sym_const] = ACTIONS(146),
    [anon_sym_var] = ACTIONS(146),
    [anon_sym_i8] = ACTIONS(146),
    [anon_sym_u8] = ACTIONS(146),
    [anon_sym_i16] = ACTIONS(146),
    [anon_sym_u16] = ACTIONS(146),
    [anon_sym_i32] = ACTIONS(146),
    [anon_sym_u32] = ACTIONS(146),
    [anon_sym_i64] = ACTIONS(146),
    [anon_sym_u64] = ACTIONS(146),
    [anon_sym_i128] = ACTIONS(146),
    [anon_sym_u128] = ACTIONS(146),
    [anon_sym_isize] = ACTIONS(146),
    [anon_sym_usize] = ACTIONS(146),
    [anon_sym_c_short] = ACTIONS(146),
    [anon_sym_c_ushort] = ACTIONS(146),
    [anon_sym_c_int] = ACTIONS(146),
    [anon_sym_c_uint] = ACTIONS(146),
    [anon_sym_c_long] = ACTIONS(146),
    [anon_sym_c_ulong] = ACTIONS(146),
    [anon_sym_c_longlong] = ACTIONS(146),
    [anon_sym_c_ulonglong] = ACTIONS(146),
    [anon_sym_c_longdouble] = ACTIONS(146),
    [anon_sym_f16] = ACTIONS(146),
    [anon_sym_f32] = ACTIONS(146),
    [anon_sym_f64] = ACTIONS(146),
    [anon_sym_f128] = ACTIONS(146),
    [anon_sym_comptime_int] = ACTIONS(146),
    [anon_sym_comptime_float] = ACTIONS(146),
    [anon_sym_bool] = ACTIONS(146),
    [anon_sym_void] = ACTIONS(146),
    [anon_sym_noreturn] = ACTIONS(146),
    [anon_sym_type] = ACTIONS(146),
    [anon_sym_anyerror] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_DOT_LBRACE] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_DASH_PERCENT] = ACTIONS(144),
    [sym_integer_literal] = ACTIONS(146),
    [sym_float_literal] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_c_DQUOTE] = ACTIONS(144),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(144),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [sym_null_literal] = ACTIONS(146),
    [sym_undefined_literal] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
  },
  [66] = {
    [sym__type] = STATE(193),
    [sym_primitive_type] = STATE(193),
    [sym_optional_type] = STATE(193),
    [sym_array_type] = STATE(193),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(148),
    [anon_sym_i8] = ACTIONS(148),
    [anon_sym_u8] = ACTIONS(148),
    [anon_sym_i16] = ACTIONS(148),
    [anon_sym_u16] = ACTIONS(148),
    [anon_sym_i32] = ACTIONS(148),
    [anon_sym_u32] = ACTIONS(148),
    [anon_sym_i64] = ACTIONS(148),
    [anon_sym_u64] = ACTIONS(148),
    [anon_sym_i128] = ACTIONS(148),
    [anon_sym_u128] = ACTIONS(148),
    [anon_sym_isize] = ACTIONS(148),
    [anon_sym_usize] = ACTIONS(148),
    [anon_sym_c_short] = ACTIONS(148),
    [anon_sym_c_ushort] = ACTIONS(148),
    [anon_sym_c_int] = ACTIONS(148),
    [anon_sym_c_uint] = ACTIONS(148),
    [anon_sym_c_long] = ACTIONS(148),
    [anon_sym_c_ulong] = ACTIONS(148),
    [anon_sym_c_longlong] = ACTIONS(148),
    [anon_sym_c_ulonglong] = ACTIONS(148),
    [anon_sym_c_longdouble] = ACTIONS(148),
    [anon_sym_f16] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(148),
    [anon_sym_f64] = ACTIONS(148),
    [anon_sym_f128] = ACTIONS(148),
    [anon_sym_comptime_int] = ACTIONS(148),
    [anon_sym_comptime_float] = ACTIONS(148),
    [anon_sym_bool] = ACTIONS(148),
    [anon_sym_void] = ACTIONS(148),
    [anon_sym_noreturn] = ACTIONS(148),
    [anon_sym_type] = ACTIONS(148),
    [anon_sym_anyerror] = ACTIONS(148),
    [anon_sym_QMARK] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_DOT_LBRACE] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_DASH_PERCENT] = ACTIONS(150),
    [sym_integer_literal] = ACTIONS(148),
    [sym_float_literal] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_c_DQUOTE] = ACTIONS(150),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [sym_null_literal] = ACTIONS(148),
    [sym_undefined_literal] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_BANG] = ACTIONS(150),
    [sym_identifier] = ACTIONS(148),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(152),
    [anon_sym_threadlocal] = ACTIONS(154),
    [anon_sym_comptime] = ACTIONS(154),
    [anon_sym_const] = ACTIONS(154),
    [anon_sym_var] = ACTIONS(154),
    [anon_sym_i8] = ACTIONS(154),
    [anon_sym_u8] = ACTIONS(154),
    [anon_sym_i16] = ACTIONS(154),
    [anon_sym_u16] = ACTIONS(154),
    [anon_sym_i32] = ACTIONS(154),
    [anon_sym_u32] = ACTIONS(154),
    [anon_sym_i64] = ACTIONS(154),
    [anon_sym_u64] = ACTIONS(154),
    [anon_sym_i128] = ACTIONS(154),
    [anon_sym_u128] = ACTIONS(154),
    [anon_sym_isize] = ACTIONS(154),
    [anon_sym_usize] = ACTIONS(154),
    [anon_sym_c_short] = ACTIONS(154),
    [anon_sym_c_ushort] = ACTIONS(154),
    [anon_sym_c_int] = ACTIONS(154),
    [anon_sym_c_uint] = ACTIONS(154),
    [anon_sym_c_long] = ACTIONS(154),
    [anon_sym_c_ulong] = ACTIONS(154),
    [anon_sym_c_longlong] = ACTIONS(154),
    [anon_sym_c_ulonglong] = ACTIONS(154),
    [anon_sym_c_longdouble] = ACTIONS(154),
    [anon_sym_f16] = ACTIONS(154),
    [anon_sym_f32] = ACTIONS(154),
    [anon_sym_f64] = ACTIONS(154),
    [anon_sym_f128] = ACTIONS(154),
    [anon_sym_comptime_int] = ACTIONS(154),
    [anon_sym_comptime_float] = ACTIONS(154),
    [anon_sym_bool] = ACTIONS(154),
    [anon_sym_void] = ACTIONS(154),
    [anon_sym_noreturn] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_anyerror] = ACTIONS(154),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_DOT_LBRACE] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_DASH_PERCENT] = ACTIONS(152),
    [sym_integer_literal] = ACTIONS(154),
    [sym_float_literal] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_c_DQUOTE] = ACTIONS(152),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(152),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(154),
    [sym_null_literal] = ACTIONS(154),
    [sym_undefined_literal] = ACTIONS(154),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_threadlocal] = ACTIONS(146),
    [anon_sym_comptime] = ACTIONS(146),
    [anon_sym_const] = ACTIONS(146),
    [anon_sym_var] = ACTIONS(146),
    [anon_sym_i8] = ACTIONS(146),
    [anon_sym_u8] = ACTIONS(146),
    [anon_sym_i16] = ACTIONS(146),
    [anon_sym_u16] = ACTIONS(146),
    [anon_sym_i32] = ACTIONS(146),
    [anon_sym_u32] = ACTIONS(146),
    [anon_sym_i64] = ACTIONS(146),
    [anon_sym_u64] = ACTIONS(146),
    [anon_sym_i128] = ACTIONS(146),
    [anon_sym_u128] = ACTIONS(146),
    [anon_sym_isize] = ACTIONS(146),
    [anon_sym_usize] = ACTIONS(146),
    [anon_sym_c_short] = ACTIONS(146),
    [anon_sym_c_ushort] = ACTIONS(146),
    [anon_sym_c_int] = ACTIONS(146),
    [anon_sym_c_uint] = ACTIONS(146),
    [anon_sym_c_long] = ACTIONS(146),
    [anon_sym_c_ulong] = ACTIONS(146),
    [anon_sym_c_longlong] = ACTIONS(146),
    [anon_sym_c_ulonglong] = ACTIONS(146),
    [anon_sym_c_longdouble] = ACTIONS(146),
    [anon_sym_f16] = ACTIONS(146),
    [anon_sym_f32] = ACTIONS(146),
    [anon_sym_f64] = ACTIONS(146),
    [anon_sym_f128] = ACTIONS(146),
    [anon_sym_comptime_int] = ACTIONS(146),
    [anon_sym_comptime_float] = ACTIONS(146),
    [anon_sym_bool] = ACTIONS(146),
    [anon_sym_void] = ACTIONS(146),
    [anon_sym_noreturn] = ACTIONS(146),
    [anon_sym_type] = ACTIONS(146),
    [anon_sym_anyerror] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_DOT_LBRACE] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_DASH_PERCENT] = ACTIONS(144),
    [sym_integer_literal] = ACTIONS(146),
    [sym_float_literal] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_c_DQUOTE] = ACTIONS(144),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(144),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [sym_null_literal] = ACTIONS(146),
    [sym_undefined_literal] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_threadlocal] = ACTIONS(158),
    [anon_sym_comptime] = ACTIONS(158),
    [anon_sym_const] = ACTIONS(158),
    [anon_sym_var] = ACTIONS(158),
    [anon_sym_i8] = ACTIONS(158),
    [anon_sym_u8] = ACTIONS(158),
    [anon_sym_i16] = ACTIONS(158),
    [anon_sym_u16] = ACTIONS(158),
    [anon_sym_i32] = ACTIONS(158),
    [anon_sym_u32] = ACTIONS(158),
    [anon_sym_i64] = ACTIONS(158),
    [anon_sym_u64] = ACTIONS(158),
    [anon_sym_i128] = ACTIONS(158),
    [anon_sym_u128] = ACTIONS(158),
    [anon_sym_isize] = ACTIONS(158),
    [anon_sym_usize] = ACTIONS(158),
    [anon_sym_c_short] = ACTIONS(158),
    [anon_sym_c_ushort] = ACTIONS(158),
    [anon_sym_c_int] = ACTIONS(158),
    [anon_sym_c_uint] = ACTIONS(158),
    [anon_sym_c_long] = ACTIONS(158),
    [anon_sym_c_ulong] = ACTIONS(158),
    [anon_sym_c_longlong] = ACTIONS(158),
    [anon_sym_c_ulonglong] = ACTIONS(158),
    [anon_sym_c_longdouble] = ACTIONS(158),
    [anon_sym_f16] = ACTIONS(158),
    [anon_sym_f32] = ACTIONS(158),
    [anon_sym_f64] = ACTIONS(158),
    [anon_sym_f128] = ACTIONS(158),
    [anon_sym_comptime_int] = ACTIONS(158),
    [anon_sym_comptime_float] = ACTIONS(158),
    [anon_sym_bool] = ACTIONS(158),
    [anon_sym_void] = ACTIONS(158),
    [anon_sym_noreturn] = ACTIONS(158),
    [anon_sym_type] = ACTIONS(158),
    [anon_sym_anyerror] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_DOT_LBRACE] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_DASH_PERCENT] = ACTIONS(156),
    [sym_integer_literal] = ACTIONS(158),
    [sym_float_literal] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_c_DQUOTE] = ACTIONS(156),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(156),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(158),
    [sym_null_literal] = ACTIONS(158),
    [sym_undefined_literal] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_BANG] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_threadlocal] = ACTIONS(162),
    [anon_sym_comptime] = ACTIONS(162),
    [anon_sym_const] = ACTIONS(162),
    [anon_sym_var] = ACTIONS(162),
    [anon_sym_i8] = ACTIONS(162),
    [anon_sym_u8] = ACTIONS(162),
    [anon_sym_i16] = ACTIONS(162),
    [anon_sym_u16] = ACTIONS(162),
    [anon_sym_i32] = ACTIONS(162),
    [anon_sym_u32] = ACTIONS(162),
    [anon_sym_i64] = ACTIONS(162),
    [anon_sym_u64] = ACTIONS(162),
    [anon_sym_i128] = ACTIONS(162),
    [anon_sym_u128] = ACTIONS(162),
    [anon_sym_isize] = ACTIONS(162),
    [anon_sym_usize] = ACTIONS(162),
    [anon_sym_c_short] = ACTIONS(162),
    [anon_sym_c_ushort] = ACTIONS(162),
    [anon_sym_c_int] = ACTIONS(162),
    [anon_sym_c_uint] = ACTIONS(162),
    [anon_sym_c_long] = ACTIONS(162),
    [anon_sym_c_ulong] = ACTIONS(162),
    [anon_sym_c_longlong] = ACTIONS(162),
    [anon_sym_c_ulonglong] = ACTIONS(162),
    [anon_sym_c_longdouble] = ACTIONS(162),
    [anon_sym_f16] = ACTIONS(162),
    [anon_sym_f32] = ACTIONS(162),
    [anon_sym_f64] = ACTIONS(162),
    [anon_sym_f128] = ACTIONS(162),
    [anon_sym_comptime_int] = ACTIONS(162),
    [anon_sym_comptime_float] = ACTIONS(162),
    [anon_sym_bool] = ACTIONS(162),
    [anon_sym_void] = ACTIONS(162),
    [anon_sym_noreturn] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(162),
    [anon_sym_anyerror] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_DOT_LBRACE] = ACTIONS(160),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_DASH_PERCENT] = ACTIONS(160),
    [sym_integer_literal] = ACTIONS(162),
    [sym_float_literal] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_c_DQUOTE] = ACTIONS(160),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(160),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [sym_null_literal] = ACTIONS(162),
    [sym_undefined_literal] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
  },
  [71] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(152),
    [anon_sym_threadlocal] = ACTIONS(154),
    [anon_sym_comptime] = ACTIONS(154),
    [anon_sym_const] = ACTIONS(154),
    [anon_sym_var] = ACTIONS(154),
    [anon_sym_i8] = ACTIONS(154),
    [anon_sym_u8] = ACTIONS(154),
    [anon_sym_i16] = ACTIONS(154),
    [anon_sym_u16] = ACTIONS(154),
    [anon_sym_i32] = ACTIONS(154),
    [anon_sym_u32] = ACTIONS(154),
    [anon_sym_i64] = ACTIONS(154),
    [anon_sym_u64] = ACTIONS(154),
    [anon_sym_i128] = ACTIONS(154),
    [anon_sym_u128] = ACTIONS(154),
    [anon_sym_isize] = ACTIONS(154),
    [anon_sym_usize] = ACTIONS(154),
    [anon_sym_c_short] = ACTIONS(154),
    [anon_sym_c_ushort] = ACTIONS(154),
    [anon_sym_c_int] = ACTIONS(154),
    [anon_sym_c_uint] = ACTIONS(154),
    [anon_sym_c_long] = ACTIONS(154),
    [anon_sym_c_ulong] = ACTIONS(154),
    [anon_sym_c_longlong] = ACTIONS(154),
    [anon_sym_c_ulonglong] = ACTIONS(154),
    [anon_sym_c_longdouble] = ACTIONS(154),
    [anon_sym_f16] = ACTIONS(154),
    [anon_sym_f32] = ACTIONS(154),
    [anon_sym_f64] = ACTIONS(154),
    [anon_sym_f128] = ACTIONS(154),
    [anon_sym_comptime_int] = ACTIONS(154),
    [anon_sym_comptime_float] = ACTIONS(154),
    [anon_sym_bool] = ACTIONS(154),
    [anon_sym_void] = ACTIONS(154),
    [anon_sym_noreturn] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [anon_sym_anyerror] = ACTIONS(154),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_DOT_LBRACE] = ACTIONS(152),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_DASH_PERCENT] = ACTIONS(152),
    [sym_integer_literal] = ACTIONS(154),
    [sym_float_literal] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_c_DQUOTE] = ACTIONS(152),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(152),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(154),
    [sym_null_literal] = ACTIONS(154),
    [sym_undefined_literal] = ACTIONS(154),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_BANG] = ACTIONS(152),
    [sym_identifier] = ACTIONS(154),
  },
  [72] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_threadlocal] = ACTIONS(162),
    [anon_sym_comptime] = ACTIONS(162),
    [anon_sym_const] = ACTIONS(162),
    [anon_sym_var] = ACTIONS(162),
    [anon_sym_i8] = ACTIONS(162),
    [anon_sym_u8] = ACTIONS(162),
    [anon_sym_i16] = ACTIONS(162),
    [anon_sym_u16] = ACTIONS(162),
    [anon_sym_i32] = ACTIONS(162),
    [anon_sym_u32] = ACTIONS(162),
    [anon_sym_i64] = ACTIONS(162),
    [anon_sym_u64] = ACTIONS(162),
    [anon_sym_i128] = ACTIONS(162),
    [anon_sym_u128] = ACTIONS(162),
    [anon_sym_isize] = ACTIONS(162),
    [anon_sym_usize] = ACTIONS(162),
    [anon_sym_c_short] = ACTIONS(162),
    [anon_sym_c_ushort] = ACTIONS(162),
    [anon_sym_c_int] = ACTIONS(162),
    [anon_sym_c_uint] = ACTIONS(162),
    [anon_sym_c_long] = ACTIONS(162),
    [anon_sym_c_ulong] = ACTIONS(162),
    [anon_sym_c_longlong] = ACTIONS(162),
    [anon_sym_c_ulonglong] = ACTIONS(162),
    [anon_sym_c_longdouble] = ACTIONS(162),
    [anon_sym_f16] = ACTIONS(162),
    [anon_sym_f32] = ACTIONS(162),
    [anon_sym_f64] = ACTIONS(162),
    [anon_sym_f128] = ACTIONS(162),
    [anon_sym_comptime_int] = ACTIONS(162),
    [anon_sym_comptime_float] = ACTIONS(162),
    [anon_sym_bool] = ACTIONS(162),
    [anon_sym_void] = ACTIONS(162),
    [anon_sym_noreturn] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(162),
    [anon_sym_anyerror] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_DOT_LBRACE] = ACTIONS(160),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_DASH_PERCENT] = ACTIONS(160),
    [sym_integer_literal] = ACTIONS(162),
    [sym_float_literal] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_c_DQUOTE] = ACTIONS(160),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(160),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [sym_null_literal] = ACTIONS(162),
    [sym_undefined_literal] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
  },
  [73] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_threadlocal] = ACTIONS(158),
    [anon_sym_comptime] = ACTIONS(158),
    [anon_sym_const] = ACTIONS(158),
    [anon_sym_var] = ACTIONS(158),
    [anon_sym_i8] = ACTIONS(158),
    [anon_sym_u8] = ACTIONS(158),
    [anon_sym_i16] = ACTIONS(158),
    [anon_sym_u16] = ACTIONS(158),
    [anon_sym_i32] = ACTIONS(158),
    [anon_sym_u32] = ACTIONS(158),
    [anon_sym_i64] = ACTIONS(158),
    [anon_sym_u64] = ACTIONS(158),
    [anon_sym_i128] = ACTIONS(158),
    [anon_sym_u128] = ACTIONS(158),
    [anon_sym_isize] = ACTIONS(158),
    [anon_sym_usize] = ACTIONS(158),
    [anon_sym_c_short] = ACTIONS(158),
    [anon_sym_c_ushort] = ACTIONS(158),
    [anon_sym_c_int] = ACTIONS(158),
    [anon_sym_c_uint] = ACTIONS(158),
    [anon_sym_c_long] = ACTIONS(158),
    [anon_sym_c_ulong] = ACTIONS(158),
    [anon_sym_c_longlong] = ACTIONS(158),
    [anon_sym_c_ulonglong] = ACTIONS(158),
    [anon_sym_c_longdouble] = ACTIONS(158),
    [anon_sym_f16] = ACTIONS(158),
    [anon_sym_f32] = ACTIONS(158),
    [anon_sym_f64] = ACTIONS(158),
    [anon_sym_f128] = ACTIONS(158),
    [anon_sym_comptime_int] = ACTIONS(158),
    [anon_sym_comptime_float] = ACTIONS(158),
    [anon_sym_bool] = ACTIONS(158),
    [anon_sym_void] = ACTIONS(158),
    [anon_sym_noreturn] = ACTIONS(158),
    [anon_sym_type] = ACTIONS(158),
    [anon_sym_anyerror] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_DOT_LBRACE] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_DASH_PERCENT] = ACTIONS(156),
    [sym_integer_literal] = ACTIONS(158),
    [sym_float_literal] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_c_DQUOTE] = ACTIONS(156),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(156),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(158),
    [sym_null_literal] = ACTIONS(158),
    [sym_undefined_literal] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_BANG] = ACTIONS(156),
    [sym_identifier] = ACTIONS(158),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_threadlocal] = ACTIONS(166),
    [anon_sym_comptime] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_var] = ACTIONS(166),
    [anon_sym_i8] = ACTIONS(166),
    [anon_sym_u8] = ACTIONS(166),
    [anon_sym_i16] = ACTIONS(166),
    [anon_sym_u16] = ACTIONS(166),
    [anon_sym_i32] = ACTIONS(166),
    [anon_sym_u32] = ACTIONS(166),
    [anon_sym_i64] = ACTIONS(166),
    [anon_sym_u64] = ACTIONS(166),
    [anon_sym_i128] = ACTIONS(166),
    [anon_sym_u128] = ACTIONS(166),
    [anon_sym_isize] = ACTIONS(166),
    [anon_sym_usize] = ACTIONS(166),
    [anon_sym_c_short] = ACTIONS(166),
    [anon_sym_c_ushort] = ACTIONS(166),
    [anon_sym_c_int] = ACTIONS(166),
    [anon_sym_c_uint] = ACTIONS(166),
    [anon_sym_c_long] = ACTIONS(166),
    [anon_sym_c_ulong] = ACTIONS(166),
    [anon_sym_c_longlong] = ACTIONS(166),
    [anon_sym_c_ulonglong] = ACTIONS(166),
    [anon_sym_c_longdouble] = ACTIONS(166),
    [anon_sym_f16] = ACTIONS(166),
    [anon_sym_f32] = ACTIONS(166),
    [anon_sym_f64] = ACTIONS(166),
    [anon_sym_f128] = ACTIONS(166),
    [anon_sym_comptime_int] = ACTIONS(166),
    [anon_sym_comptime_float] = ACTIONS(166),
    [anon_sym_bool] = ACTIONS(166),
    [anon_sym_void] = ACTIONS(166),
    [anon_sym_noreturn] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [anon_sym_anyerror] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_DOT_LBRACE] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_PERCENT] = ACTIONS(164),
    [sym_integer_literal] = ACTIONS(166),
    [sym_float_literal] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_c_DQUOTE] = ACTIONS(164),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(164),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [sym_null_literal] = ACTIONS(166),
    [sym_undefined_literal] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_threadlocal] = ACTIONS(142),
    [anon_sym_comptime] = ACTIONS(142),
    [anon_sym_const] = ACTIONS(142),
    [anon_sym_var] = ACTIONS(142),
    [anon_sym_i8] = ACTIONS(142),
    [anon_sym_u8] = ACTIONS(142),
    [anon_sym_i16] = ACTIONS(142),
    [anon_sym_u16] = ACTIONS(142),
    [anon_sym_i32] = ACTIONS(142),
    [anon_sym_u32] = ACTIONS(142),
    [anon_sym_i64] = ACTIONS(142),
    [anon_sym_u64] = ACTIONS(142),
    [anon_sym_i128] = ACTIONS(142),
    [anon_sym_u128] = ACTIONS(142),
    [anon_sym_isize] = ACTIONS(142),
    [anon_sym_usize] = ACTIONS(142),
    [anon_sym_c_short] = ACTIONS(142),
    [anon_sym_c_ushort] = ACTIONS(142),
    [anon_sym_c_int] = ACTIONS(142),
    [anon_sym_c_uint] = ACTIONS(142),
    [anon_sym_c_long] = ACTIONS(142),
    [anon_sym_c_ulong] = ACTIONS(142),
    [anon_sym_c_longlong] = ACTIONS(142),
    [anon_sym_c_ulonglong] = ACTIONS(142),
    [anon_sym_c_longdouble] = ACTIONS(142),
    [anon_sym_f16] = ACTIONS(142),
    [anon_sym_f32] = ACTIONS(142),
    [anon_sym_f64] = ACTIONS(142),
    [anon_sym_f128] = ACTIONS(142),
    [anon_sym_comptime_int] = ACTIONS(142),
    [anon_sym_comptime_float] = ACTIONS(142),
    [anon_sym_bool] = ACTIONS(142),
    [anon_sym_void] = ACTIONS(142),
    [anon_sym_noreturn] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_anyerror] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_DOT_LBRACE] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_DASH_PERCENT] = ACTIONS(140),
    [sym_integer_literal] = ACTIONS(142),
    [sym_float_literal] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_c_DQUOTE] = ACTIONS(140),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(140),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(140),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [sym_null_literal] = ACTIONS(142),
    [sym_undefined_literal] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
  },
  [76] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_threadlocal] = ACTIONS(166),
    [anon_sym_comptime] = ACTIONS(166),
    [anon_sym_const] = ACTIONS(166),
    [anon_sym_var] = ACTIONS(166),
    [anon_sym_i8] = ACTIONS(166),
    [anon_sym_u8] = ACTIONS(166),
    [anon_sym_i16] = ACTIONS(166),
    [anon_sym_u16] = ACTIONS(166),
    [anon_sym_i32] = ACTIONS(166),
    [anon_sym_u32] = ACTIONS(166),
    [anon_sym_i64] = ACTIONS(166),
    [anon_sym_u64] = ACTIONS(166),
    [anon_sym_i128] = ACTIONS(166),
    [anon_sym_u128] = ACTIONS(166),
    [anon_sym_isize] = ACTIONS(166),
    [anon_sym_usize] = ACTIONS(166),
    [anon_sym_c_short] = ACTIONS(166),
    [anon_sym_c_ushort] = ACTIONS(166),
    [anon_sym_c_int] = ACTIONS(166),
    [anon_sym_c_uint] = ACTIONS(166),
    [anon_sym_c_long] = ACTIONS(166),
    [anon_sym_c_ulong] = ACTIONS(166),
    [anon_sym_c_longlong] = ACTIONS(166),
    [anon_sym_c_ulonglong] = ACTIONS(166),
    [anon_sym_c_longdouble] = ACTIONS(166),
    [anon_sym_f16] = ACTIONS(166),
    [anon_sym_f32] = ACTIONS(166),
    [anon_sym_f64] = ACTIONS(166),
    [anon_sym_f128] = ACTIONS(166),
    [anon_sym_comptime_int] = ACTIONS(166),
    [anon_sym_comptime_float] = ACTIONS(166),
    [anon_sym_bool] = ACTIONS(166),
    [anon_sym_void] = ACTIONS(166),
    [anon_sym_noreturn] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [anon_sym_anyerror] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_DOT_LBRACE] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_DASH_PERCENT] = ACTIONS(164),
    [sym_integer_literal] = ACTIONS(166),
    [sym_float_literal] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_c_DQUOTE] = ACTIONS(164),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(164),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [sym_null_literal] = ACTIONS(166),
    [sym_undefined_literal] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [sym_identifier] = ACTIONS(166),
  },
  [77] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(168),
    [anon_sym_i8] = ACTIONS(168),
    [anon_sym_u8] = ACTIONS(168),
    [anon_sym_i16] = ACTIONS(168),
    [anon_sym_u16] = ACTIONS(168),
    [anon_sym_i32] = ACTIONS(168),
    [anon_sym_u32] = ACTIONS(168),
    [anon_sym_i64] = ACTIONS(168),
    [anon_sym_u64] = ACTIONS(168),
    [anon_sym_i128] = ACTIONS(168),
    [anon_sym_u128] = ACTIONS(168),
    [anon_sym_isize] = ACTIONS(168),
    [anon_sym_usize] = ACTIONS(168),
    [anon_sym_c_short] = ACTIONS(168),
    [anon_sym_c_ushort] = ACTIONS(168),
    [anon_sym_c_int] = ACTIONS(168),
    [anon_sym_c_uint] = ACTIONS(168),
    [anon_sym_c_long] = ACTIONS(168),
    [anon_sym_c_ulong] = ACTIONS(168),
    [anon_sym_c_longlong] = ACTIONS(168),
    [anon_sym_c_ulonglong] = ACTIONS(168),
    [anon_sym_c_longdouble] = ACTIONS(168),
    [anon_sym_f16] = ACTIONS(168),
    [anon_sym_f32] = ACTIONS(168),
    [anon_sym_f64] = ACTIONS(168),
    [anon_sym_f128] = ACTIONS(168),
    [anon_sym_comptime_int] = ACTIONS(168),
    [anon_sym_comptime_float] = ACTIONS(168),
    [anon_sym_bool] = ACTIONS(168),
    [anon_sym_void] = ACTIONS(168),
    [anon_sym_noreturn] = ACTIONS(168),
    [anon_sym_type] = ACTIONS(168),
    [anon_sym_anyerror] = ACTIONS(168),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_DOT_LBRACE] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_DASH_PERCENT] = ACTIONS(170),
    [sym_integer_literal] = ACTIONS(168),
    [sym_float_literal] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [anon_sym_c_DQUOTE] = ACTIONS(170),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(170),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(168),
    [anon_sym_false] = ACTIONS(168),
    [sym_null_literal] = ACTIONS(168),
    [sym_undefined_literal] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
  },
  [78] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(148),
    [anon_sym_i8] = ACTIONS(148),
    [anon_sym_u8] = ACTIONS(148),
    [anon_sym_i16] = ACTIONS(148),
    [anon_sym_u16] = ACTIONS(148),
    [anon_sym_i32] = ACTIONS(148),
    [anon_sym_u32] = ACTIONS(148),
    [anon_sym_i64] = ACTIONS(148),
    [anon_sym_u64] = ACTIONS(148),
    [anon_sym_i128] = ACTIONS(148),
    [anon_sym_u128] = ACTIONS(148),
    [anon_sym_isize] = ACTIONS(148),
    [anon_sym_usize] = ACTIONS(148),
    [anon_sym_c_short] = ACTIONS(148),
    [anon_sym_c_ushort] = ACTIONS(148),
    [anon_sym_c_int] = ACTIONS(148),
    [anon_sym_c_uint] = ACTIONS(148),
    [anon_sym_c_long] = ACTIONS(148),
    [anon_sym_c_ulong] = ACTIONS(148),
    [anon_sym_c_longlong] = ACTIONS(148),
    [anon_sym_c_ulonglong] = ACTIONS(148),
    [anon_sym_c_longdouble] = ACTIONS(148),
    [anon_sym_f16] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(148),
    [anon_sym_f64] = ACTIONS(148),
    [anon_sym_f128] = ACTIONS(148),
    [anon_sym_comptime_int] = ACTIONS(148),
    [anon_sym_comptime_float] = ACTIONS(148),
    [anon_sym_bool] = ACTIONS(148),
    [anon_sym_void] = ACTIONS(148),
    [anon_sym_noreturn] = ACTIONS(148),
    [anon_sym_type] = ACTIONS(148),
    [anon_sym_anyerror] = ACTIONS(148),
    [anon_sym_QMARK] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_DOT_LBRACE] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_DASH_PERCENT] = ACTIONS(150),
    [sym_integer_literal] = ACTIONS(148),
    [sym_float_literal] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_c_DQUOTE] = ACTIONS(150),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [sym_null_literal] = ACTIONS(148),
    [sym_undefined_literal] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_BANG] = ACTIONS(150),
    [sym_identifier] = ACTIONS(148),
  },
  [79] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(82),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_PLUS_PLUS] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT] = ACTIONS(172),
    [anon_sym_DASH_PERCENT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [anon_sym_STAR_PERCENT] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_orelse] = ACTIONS(172),
    [anon_sym_catch] = ACTIONS(172),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(174),
    [sym_escape_sequence] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(172),
    [anon_sym_DASH_EQ] = ACTIONS(172),
    [anon_sym_STAR_EQ] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [anon_sym_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_AMP_EQ] = ACTIONS(172),
    [anon_sym_PIPE_EQ] = ACTIONS(172),
    [anon_sym_CARET_EQ] = ACTIONS(172),
    [anon_sym_LT_LT_EQ] = ACTIONS(172),
    [anon_sym_GT_GT_EQ] = ACTIONS(172),
  },
  [80] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(83),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_PLUS_PLUS] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT] = ACTIONS(172),
    [anon_sym_DASH_PERCENT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [anon_sym_STAR_PERCENT] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_orelse] = ACTIONS(172),
    [anon_sym_catch] = ACTIONS(172),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(176),
    [sym_escape_sequence] = ACTIONS(176),
    [anon_sym_PLUS_EQ] = ACTIONS(172),
    [anon_sym_DASH_EQ] = ACTIONS(172),
    [anon_sym_STAR_EQ] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [anon_sym_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_AMP_EQ] = ACTIONS(172),
    [anon_sym_PIPE_EQ] = ACTIONS(172),
    [anon_sym_CARET_EQ] = ACTIONS(172),
    [anon_sym_LT_LT_EQ] = ACTIONS(172),
    [anon_sym_GT_GT_EQ] = ACTIONS(172),
  },
  [81] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(80),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT] = ACTIONS(178),
    [anon_sym_DASH_PERCENT] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_STAR_STAR] = ACTIONS(178),
    [anon_sym_STAR_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(180),
    [sym_escape_sequence] = ACTIONS(180),
    [anon_sym_PLUS_EQ] = ACTIONS(178),
    [anon_sym_DASH_EQ] = ACTIONS(178),
    [anon_sym_STAR_EQ] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(178),
    [anon_sym_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_AMP_EQ] = ACTIONS(178),
    [anon_sym_PIPE_EQ] = ACTIONS(178),
    [anon_sym_CARET_EQ] = ACTIONS(178),
    [anon_sym_LT_LT_EQ] = ACTIONS(178),
    [anon_sym_GT_GT_EQ] = ACTIONS(178),
  },
  [82] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(82),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [anon_sym_BANG_EQ] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_PLUS_PLUS] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT] = ACTIONS(182),
    [anon_sym_DASH_PERCENT] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_STAR_PERCENT] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_orelse] = ACTIONS(182),
    [anon_sym_catch] = ACTIONS(182),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(184),
    [sym_escape_sequence] = ACTIONS(184),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
  },
  [83] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(83),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [anon_sym_BANG_EQ] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_PLUS_PLUS] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT] = ACTIONS(182),
    [anon_sym_DASH_PERCENT] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_STAR_PERCENT] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_orelse] = ACTIONS(182),
    [anon_sym_catch] = ACTIONS(182),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(187),
    [sym_escape_sequence] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
  },
  [84] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(79),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT] = ACTIONS(178),
    [anon_sym_DASH_PERCENT] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_STAR_STAR] = ACTIONS(178),
    [anon_sym_STAR_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(190),
    [sym_escape_sequence] = ACTIONS(190),
    [anon_sym_PLUS_EQ] = ACTIONS(178),
    [anon_sym_DASH_EQ] = ACTIONS(178),
    [anon_sym_STAR_EQ] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(178),
    [anon_sym_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_AMP_EQ] = ACTIONS(178),
    [anon_sym_PIPE_EQ] = ACTIONS(178),
    [anon_sym_CARET_EQ] = ACTIONS(178),
    [anon_sym_LT_LT_EQ] = ACTIONS(178),
    [anon_sym_GT_GT_EQ] = ACTIONS(178),
  },
  [85] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(86),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_LT_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_PLUS_PLUS] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT] = ACTIONS(172),
    [anon_sym_DASH_PERCENT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [anon_sym_STAR_PERCENT] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_orelse] = ACTIONS(172),
    [anon_sym_catch] = ACTIONS(172),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(192),
    [sym_escape_sequence] = ACTIONS(192),
    [anon_sym_PLUS_EQ] = ACTIONS(172),
    [anon_sym_DASH_EQ] = ACTIONS(172),
    [anon_sym_STAR_EQ] = ACTIONS(172),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [anon_sym_PERCENT_EQ] = ACTIONS(172),
    [anon_sym_AMP_EQ] = ACTIONS(172),
    [anon_sym_PIPE_EQ] = ACTIONS(172),
    [anon_sym_CARET_EQ] = ACTIONS(172),
    [anon_sym_LT_LT_EQ] = ACTIONS(172),
    [anon_sym_GT_GT_EQ] = ACTIONS(172),
  },
  [86] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(86),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [anon_sym_BANG_EQ] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_PLUS_PLUS] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT] = ACTIONS(182),
    [anon_sym_DASH_PERCENT] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(182),
    [anon_sym_STAR_PERCENT] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_orelse] = ACTIONS(182),
    [anon_sym_catch] = ACTIONS(182),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(194),
    [sym_escape_sequence] = ACTIONS(194),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_PERCENT_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
  },
  [87] = {
    [sym_assignment_operator] = STATE(59),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(181),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [88] = {
    [sym_assignment_operator] = STATE(59),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(184),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [89] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT] = ACTIONS(239),
    [anon_sym_DASH_PERCENT] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_STAR_STAR] = ACTIONS(237),
    [anon_sym_STAR_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_orelse] = ACTIONS(237),
    [anon_sym_catch] = ACTIONS(237),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_AMP_EQ] = ACTIONS(237),
    [anon_sym_PIPE_EQ] = ACTIONS(237),
    [anon_sym_CARET_EQ] = ACTIONS(237),
    [anon_sym_LT_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_GT_EQ] = ACTIONS(237),
  },
  [90] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(85),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT] = ACTIONS(178),
    [anon_sym_DASH_PERCENT] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_STAR_STAR] = ACTIONS(178),
    [anon_sym_STAR_PERCENT] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(243),
    [sym_escape_sequence] = ACTIONS(243),
    [anon_sym_PLUS_EQ] = ACTIONS(178),
    [anon_sym_DASH_EQ] = ACTIONS(178),
    [anon_sym_STAR_EQ] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(178),
    [anon_sym_PERCENT_EQ] = ACTIONS(178),
    [anon_sym_AMP_EQ] = ACTIONS(178),
    [anon_sym_PIPE_EQ] = ACTIONS(178),
    [anon_sym_CARET_EQ] = ACTIONS(178),
    [anon_sym_LT_LT_EQ] = ACTIONS(178),
    [anon_sym_GT_GT_EQ] = ACTIONS(178),
  },
  [91] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [92] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [93] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_STAR_PERCENT] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [94] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_PLUS_PLUS] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT] = ACTIONS(251),
    [anon_sym_DASH_PERCENT] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [anon_sym_STAR_PERCENT] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_orelse] = ACTIONS(253),
    [anon_sym_catch] = ACTIONS(253),
    [anon_sym_PLUS_EQ] = ACTIONS(253),
    [anon_sym_DASH_EQ] = ACTIONS(253),
    [anon_sym_STAR_EQ] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [anon_sym_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_AMP_EQ] = ACTIONS(253),
    [anon_sym_PIPE_EQ] = ACTIONS(253),
    [anon_sym_CARET_EQ] = ACTIONS(253),
    [anon_sym_LT_LT_EQ] = ACTIONS(253),
    [anon_sym_GT_GT_EQ] = ACTIONS(253),
  },
  [95] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_STAR_PERCENT] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [96] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_PLUS_PLUS] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT] = ACTIONS(251),
    [anon_sym_DASH_PERCENT] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [anon_sym_STAR_PERCENT] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_orelse] = ACTIONS(253),
    [anon_sym_catch] = ACTIONS(253),
    [anon_sym_PLUS_EQ] = ACTIONS(253),
    [anon_sym_DASH_EQ] = ACTIONS(253),
    [anon_sym_STAR_EQ] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [anon_sym_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_AMP_EQ] = ACTIONS(253),
    [anon_sym_PIPE_EQ] = ACTIONS(253),
    [anon_sym_CARET_EQ] = ACTIONS(253),
    [anon_sym_LT_LT_EQ] = ACTIONS(253),
    [anon_sym_GT_GT_EQ] = ACTIONS(253),
  },
  [97] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_PLUS_EQ] = ACTIONS(257),
    [anon_sym_DASH_EQ] = ACTIONS(257),
    [anon_sym_STAR_EQ] = ACTIONS(257),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_SLASH_EQ] = ACTIONS(257),
    [anon_sym_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_AMP_EQ] = ACTIONS(257),
    [anon_sym_PIPE_EQ] = ACTIONS(257),
    [anon_sym_CARET_EQ] = ACTIONS(257),
    [anon_sym_LT_LT_EQ] = ACTIONS(257),
    [anon_sym_GT_GT_EQ] = ACTIONS(257),
  },
  [98] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [99] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT] = ACTIONS(261),
    [anon_sym_DASH_PERCENT] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_STAR_PERCENT] = ACTIONS(261),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_orelse] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [anon_sym_PLUS_EQ] = ACTIONS(259),
    [anon_sym_DASH_EQ] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(259),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(259),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(259),
    [anon_sym_SLASH_EQ] = ACTIONS(259),
    [anon_sym_PERCENT_EQ] = ACTIONS(259),
    [anon_sym_AMP_EQ] = ACTIONS(259),
    [anon_sym_PIPE_EQ] = ACTIONS(259),
    [anon_sym_CARET_EQ] = ACTIONS(259),
    [anon_sym_LT_LT_EQ] = ACTIONS(259),
    [anon_sym_GT_GT_EQ] = ACTIONS(259),
  },
  [100] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_or] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_BANG_EQ] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_EQ] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_PLUS_PLUS] = ACTIONS(263),
    [anon_sym_PLUS_PERCENT] = ACTIONS(265),
    [anon_sym_DASH_PERCENT] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_STAR_STAR] = ACTIONS(263),
    [anon_sym_STAR_PERCENT] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_orelse] = ACTIONS(263),
    [anon_sym_catch] = ACTIONS(263),
    [anon_sym_PLUS_EQ] = ACTIONS(263),
    [anon_sym_DASH_EQ] = ACTIONS(263),
    [anon_sym_STAR_EQ] = ACTIONS(263),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(263),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(263),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(263),
    [anon_sym_SLASH_EQ] = ACTIONS(263),
    [anon_sym_PERCENT_EQ] = ACTIONS(263),
    [anon_sym_AMP_EQ] = ACTIONS(263),
    [anon_sym_PIPE_EQ] = ACTIONS(263),
    [anon_sym_CARET_EQ] = ACTIONS(263),
    [anon_sym_LT_LT_EQ] = ACTIONS(263),
    [anon_sym_GT_GT_EQ] = ACTIONS(263),
  },
  [101] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_PLUS_PLUS] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT] = ACTIONS(267),
    [anon_sym_DASH_PERCENT] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [102] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [103] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [104] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_and] = ACTIONS(271),
    [anon_sym_or] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_PLUS_PLUS] = ACTIONS(271),
    [anon_sym_PLUS_PERCENT] = ACTIONS(273),
    [anon_sym_DASH_PERCENT] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(273),
    [anon_sym_STAR_STAR] = ACTIONS(271),
    [anon_sym_STAR_PERCENT] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_orelse] = ACTIONS(271),
    [anon_sym_catch] = ACTIONS(271),
    [anon_sym_PLUS_EQ] = ACTIONS(271),
    [anon_sym_DASH_EQ] = ACTIONS(271),
    [anon_sym_STAR_EQ] = ACTIONS(271),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(271),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(271),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(271),
    [anon_sym_SLASH_EQ] = ACTIONS(271),
    [anon_sym_PERCENT_EQ] = ACTIONS(271),
    [anon_sym_AMP_EQ] = ACTIONS(271),
    [anon_sym_PIPE_EQ] = ACTIONS(271),
    [anon_sym_CARET_EQ] = ACTIONS(271),
    [anon_sym_LT_LT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT_EQ] = ACTIONS(271),
  },
  [105] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(275),
    [anon_sym_PLUS_PERCENT] = ACTIONS(277),
    [anon_sym_DASH_PERCENT] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(275),
    [anon_sym_STAR_PERCENT] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_orelse] = ACTIONS(275),
    [anon_sym_catch] = ACTIONS(275),
    [anon_sym_PLUS_EQ] = ACTIONS(275),
    [anon_sym_DASH_EQ] = ACTIONS(275),
    [anon_sym_STAR_EQ] = ACTIONS(275),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(275),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(275),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(275),
    [anon_sym_SLASH_EQ] = ACTIONS(275),
    [anon_sym_PERCENT_EQ] = ACTIONS(275),
    [anon_sym_AMP_EQ] = ACTIONS(275),
    [anon_sym_PIPE_EQ] = ACTIONS(275),
    [anon_sym_CARET_EQ] = ACTIONS(275),
    [anon_sym_LT_LT_EQ] = ACTIONS(275),
    [anon_sym_GT_GT_EQ] = ACTIONS(275),
  },
  [106] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [107] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [108] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_or] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_PLUS_PLUS] = ACTIONS(279),
    [anon_sym_PLUS_PERCENT] = ACTIONS(281),
    [anon_sym_DASH_PERCENT] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(279),
    [anon_sym_STAR_PERCENT] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_orelse] = ACTIONS(279),
    [anon_sym_catch] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(279),
    [anon_sym_DASH_EQ] = ACTIONS(279),
    [anon_sym_STAR_EQ] = ACTIONS(279),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(279),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(279),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(279),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [anon_sym_PERCENT_EQ] = ACTIONS(279),
    [anon_sym_AMP_EQ] = ACTIONS(279),
    [anon_sym_PIPE_EQ] = ACTIONS(279),
    [anon_sym_CARET_EQ] = ACTIONS(279),
    [anon_sym_LT_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT_EQ] = ACTIONS(279),
  },
  [109] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [110] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [111] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [112] = {
    [sym_assignment_operator] = STATE(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_PLUS_PERCENT] = ACTIONS(219),
    [anon_sym_DASH_PERCENT] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_STAR_STAR] = ACTIONS(227),
    [anon_sym_STAR_PERCENT] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [anon_sym_orelse] = ACTIONS(229),
    [anon_sym_catch] = ACTIONS(229),
    [anon_sym_PLUS_EQ] = ACTIONS(285),
    [anon_sym_DASH_EQ] = ACTIONS(285),
    [anon_sym_STAR_EQ] = ACTIONS(285),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_SLASH_EQ] = ACTIONS(285),
    [anon_sym_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_AMP_EQ] = ACTIONS(285),
    [anon_sym_PIPE_EQ] = ACTIONS(285),
    [anon_sym_CARET_EQ] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(285),
    [anon_sym_GT_GT_EQ] = ACTIONS(285),
  },
  [113] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_and] = ACTIONS(287),
    [anon_sym_or] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_PLUS_PLUS] = ACTIONS(287),
    [anon_sym_PLUS_PERCENT] = ACTIONS(289),
    [anon_sym_DASH_PERCENT] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_STAR_PERCENT] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_orelse] = ACTIONS(287),
    [anon_sym_catch] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(287),
    [anon_sym_DASH_EQ] = ACTIONS(287),
    [anon_sym_STAR_EQ] = ACTIONS(287),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_SLASH_EQ] = ACTIONS(287),
    [anon_sym_PERCENT_EQ] = ACTIONS(287),
    [anon_sym_AMP_EQ] = ACTIONS(287),
    [anon_sym_PIPE_EQ] = ACTIONS(287),
    [anon_sym_CARET_EQ] = ACTIONS(287),
    [anon_sym_LT_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT_EQ] = ACTIONS(287),
  },
  [114] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_or] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_PLUS_PLUS] = ACTIONS(291),
    [anon_sym_PLUS_PERCENT] = ACTIONS(293),
    [anon_sym_DASH_PERCENT] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(291),
    [anon_sym_STAR_PERCENT] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_orelse] = ACTIONS(291),
    [anon_sym_catch] = ACTIONS(291),
    [anon_sym_PLUS_EQ] = ACTIONS(291),
    [anon_sym_DASH_EQ] = ACTIONS(291),
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(291),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(291),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(291),
    [anon_sym_SLASH_EQ] = ACTIONS(291),
    [anon_sym_PERCENT_EQ] = ACTIONS(291),
    [anon_sym_AMP_EQ] = ACTIONS(291),
    [anon_sym_PIPE_EQ] = ACTIONS(291),
    [anon_sym_CARET_EQ] = ACTIONS(291),
    [anon_sym_LT_LT_EQ] = ACTIONS(291),
    [anon_sym_GT_GT_EQ] = ACTIONS(291),
  },
  [115] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_and] = ACTIONS(295),
    [anon_sym_or] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_PLUS_PLUS] = ACTIONS(295),
    [anon_sym_PLUS_PERCENT] = ACTIONS(297),
    [anon_sym_DASH_PERCENT] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(295),
    [anon_sym_STAR_PERCENT] = ACTIONS(297),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_orelse] = ACTIONS(295),
    [anon_sym_catch] = ACTIONS(295),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
  },
  [116] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_and] = ACTIONS(299),
    [anon_sym_or] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_BANG_EQ] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_EQ] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_PLUS_PLUS] = ACTIONS(299),
    [anon_sym_PLUS_PERCENT] = ACTIONS(301),
    [anon_sym_DASH_PERCENT] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(299),
    [anon_sym_STAR_PERCENT] = ACTIONS(301),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_orelse] = ACTIONS(299),
    [anon_sym_catch] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(299),
    [anon_sym_DASH_EQ] = ACTIONS(299),
    [anon_sym_STAR_EQ] = ACTIONS(299),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(299),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(299),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(299),
    [anon_sym_SLASH_EQ] = ACTIONS(299),
    [anon_sym_PERCENT_EQ] = ACTIONS(299),
    [anon_sym_AMP_EQ] = ACTIONS(299),
    [anon_sym_PIPE_EQ] = ACTIONS(299),
    [anon_sym_CARET_EQ] = ACTIONS(299),
    [anon_sym_LT_LT_EQ] = ACTIONS(299),
    [anon_sym_GT_GT_EQ] = ACTIONS(299),
  },
  [117] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_and] = ACTIONS(303),
    [anon_sym_or] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_PLUS_PLUS] = ACTIONS(303),
    [anon_sym_PLUS_PERCENT] = ACTIONS(305),
    [anon_sym_DASH_PERCENT] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(303),
    [anon_sym_STAR_PERCENT] = ACTIONS(305),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_orelse] = ACTIONS(303),
    [anon_sym_catch] = ACTIONS(303),
    [anon_sym_PLUS_EQ] = ACTIONS(303),
    [anon_sym_DASH_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(303),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(303),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [anon_sym_PERCENT_EQ] = ACTIONS(303),
    [anon_sym_AMP_EQ] = ACTIONS(303),
    [anon_sym_PIPE_EQ] = ACTIONS(303),
    [anon_sym_CARET_EQ] = ACTIONS(303),
    [anon_sym_LT_LT_EQ] = ACTIONS(303),
    [anon_sym_GT_GT_EQ] = ACTIONS(303),
  },
  [118] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_and] = ACTIONS(307),
    [anon_sym_or] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_BANG_EQ] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_PLUS_PLUS] = ACTIONS(307),
    [anon_sym_PLUS_PERCENT] = ACTIONS(309),
    [anon_sym_DASH_PERCENT] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_STAR_STAR] = ACTIONS(307),
    [anon_sym_STAR_PERCENT] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_orelse] = ACTIONS(307),
    [anon_sym_catch] = ACTIONS(307),
    [anon_sym_PLUS_EQ] = ACTIONS(307),
    [anon_sym_DASH_EQ] = ACTIONS(307),
    [anon_sym_STAR_EQ] = ACTIONS(307),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(307),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(307),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(307),
    [anon_sym_SLASH_EQ] = ACTIONS(307),
    [anon_sym_PERCENT_EQ] = ACTIONS(307),
    [anon_sym_AMP_EQ] = ACTIONS(307),
    [anon_sym_PIPE_EQ] = ACTIONS(307),
    [anon_sym_CARET_EQ] = ACTIONS(307),
    [anon_sym_LT_LT_EQ] = ACTIONS(307),
    [anon_sym_GT_GT_EQ] = ACTIONS(307),
  },
  [119] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT] = ACTIONS(239),
    [anon_sym_DASH_PERCENT] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_STAR_STAR] = ACTIONS(237),
    [anon_sym_STAR_PERCENT] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_orelse] = ACTIONS(237),
    [anon_sym_catch] = ACTIONS(237),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PERCENT_EQ] = ACTIONS(237),
    [anon_sym_AMP_EQ] = ACTIONS(237),
    [anon_sym_PIPE_EQ] = ACTIONS(237),
    [anon_sym_CARET_EQ] = ACTIONS(237),
    [anon_sym_LT_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_GT_EQ] = ACTIONS(237),
  },
  [120] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(343),
    [anon_sym_catch] = ACTIONS(343),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [121] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(345),
    [anon_sym_or] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_CARET] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [anon_sym_BANG_EQ] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_PLUS_PLUS] = ACTIONS(345),
    [anon_sym_PLUS_PERCENT] = ACTIONS(347),
    [anon_sym_DASH_PERCENT] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(345),
    [anon_sym_STAR_PERCENT] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_orelse] = ACTIONS(345),
    [anon_sym_catch] = ACTIONS(345),
    [anon_sym_PLUS_EQ] = ACTIONS(345),
    [anon_sym_DASH_EQ] = ACTIONS(345),
    [anon_sym_STAR_EQ] = ACTIONS(345),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(345),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(345),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(345),
    [anon_sym_SLASH_EQ] = ACTIONS(345),
    [anon_sym_PERCENT_EQ] = ACTIONS(345),
    [anon_sym_AMP_EQ] = ACTIONS(345),
    [anon_sym_PIPE_EQ] = ACTIONS(345),
    [anon_sym_CARET_EQ] = ACTIONS(345),
    [anon_sym_LT_LT_EQ] = ACTIONS(345),
    [anon_sym_GT_GT_EQ] = ACTIONS(345),
  },
  [122] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_and] = ACTIONS(349),
    [anon_sym_or] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_PLUS_PLUS] = ACTIONS(349),
    [anon_sym_PLUS_PERCENT] = ACTIONS(351),
    [anon_sym_DASH_PERCENT] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_PERCENT] = ACTIONS(351),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [anon_sym_STAR_PERCENT] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_orelse] = ACTIONS(349),
    [anon_sym_catch] = ACTIONS(349),
    [anon_sym_PLUS_EQ] = ACTIONS(349),
    [anon_sym_DASH_EQ] = ACTIONS(349),
    [anon_sym_STAR_EQ] = ACTIONS(349),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(349),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(349),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(349),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [anon_sym_PERCENT_EQ] = ACTIONS(349),
    [anon_sym_AMP_EQ] = ACTIONS(349),
    [anon_sym_PIPE_EQ] = ACTIONS(349),
    [anon_sym_CARET_EQ] = ACTIONS(349),
    [anon_sym_LT_LT_EQ] = ACTIONS(349),
    [anon_sym_GT_GT_EQ] = ACTIONS(349),
  },
  [123] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_and] = ACTIONS(353),
    [anon_sym_or] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_CARET] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(353),
    [anon_sym_BANG_EQ] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_LT_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_EQ] = ACTIONS(353),
    [anon_sym_LT_LT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_PLUS_PLUS] = ACTIONS(353),
    [anon_sym_PLUS_PERCENT] = ACTIONS(355),
    [anon_sym_DASH_PERCENT] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_STAR_STAR] = ACTIONS(353),
    [anon_sym_STAR_PERCENT] = ACTIONS(355),
    [anon_sym_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_orelse] = ACTIONS(353),
    [anon_sym_catch] = ACTIONS(353),
    [anon_sym_PLUS_EQ] = ACTIONS(353),
    [anon_sym_DASH_EQ] = ACTIONS(353),
    [anon_sym_STAR_EQ] = ACTIONS(353),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(353),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(353),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(353),
    [anon_sym_SLASH_EQ] = ACTIONS(353),
    [anon_sym_PERCENT_EQ] = ACTIONS(353),
    [anon_sym_AMP_EQ] = ACTIONS(353),
    [anon_sym_PIPE_EQ] = ACTIONS(353),
    [anon_sym_CARET_EQ] = ACTIONS(353),
    [anon_sym_LT_LT_EQ] = ACTIONS(353),
    [anon_sym_GT_GT_EQ] = ACTIONS(353),
  },
  [124] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(357),
    [anon_sym_or] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_CARET] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(357),
    [anon_sym_BANG_EQ] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(359),
    [anon_sym_LT_EQ] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_GT_EQ] = ACTIONS(357),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_PLUS_PLUS] = ACTIONS(357),
    [anon_sym_PLUS_PERCENT] = ACTIONS(359),
    [anon_sym_DASH_PERCENT] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_PERCENT] = ACTIONS(359),
    [anon_sym_STAR_STAR] = ACTIONS(357),
    [anon_sym_STAR_PERCENT] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(357),
    [anon_sym_orelse] = ACTIONS(357),
    [anon_sym_catch] = ACTIONS(357),
    [anon_sym_PLUS_EQ] = ACTIONS(357),
    [anon_sym_DASH_EQ] = ACTIONS(357),
    [anon_sym_STAR_EQ] = ACTIONS(357),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(357),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(357),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(357),
    [anon_sym_SLASH_EQ] = ACTIONS(357),
    [anon_sym_PERCENT_EQ] = ACTIONS(357),
    [anon_sym_AMP_EQ] = ACTIONS(357),
    [anon_sym_PIPE_EQ] = ACTIONS(357),
    [anon_sym_CARET_EQ] = ACTIONS(357),
    [anon_sym_LT_LT_EQ] = ACTIONS(357),
    [anon_sym_GT_GT_EQ] = ACTIONS(357),
  },
  [125] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(343),
    [anon_sym_catch] = ACTIONS(343),
    [anon_sym_PLUS_EQ] = ACTIONS(257),
    [anon_sym_DASH_EQ] = ACTIONS(257),
    [anon_sym_STAR_EQ] = ACTIONS(257),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_SLASH_EQ] = ACTIONS(257),
    [anon_sym_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_AMP_EQ] = ACTIONS(257),
    [anon_sym_PIPE_EQ] = ACTIONS(257),
    [anon_sym_CARET_EQ] = ACTIONS(257),
    [anon_sym_LT_LT_EQ] = ACTIONS(257),
    [anon_sym_GT_GT_EQ] = ACTIONS(257),
  },
  [126] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [127] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_and] = ACTIONS(361),
    [anon_sym_or] = ACTIONS(363),
    [anon_sym_AMP] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(361),
    [anon_sym_BANG_EQ] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PERCENT] = ACTIONS(363),
    [anon_sym_DASH_PERCENT] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(363),
    [anon_sym_STAR_STAR] = ACTIONS(361),
    [anon_sym_STAR_PERCENT] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_orelse] = ACTIONS(361),
    [anon_sym_catch] = ACTIONS(361),
    [anon_sym_PLUS_EQ] = ACTIONS(361),
    [anon_sym_DASH_EQ] = ACTIONS(361),
    [anon_sym_STAR_EQ] = ACTIONS(361),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(361),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(361),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(361),
    [anon_sym_SLASH_EQ] = ACTIONS(361),
    [anon_sym_PERCENT_EQ] = ACTIONS(361),
    [anon_sym_AMP_EQ] = ACTIONS(361),
    [anon_sym_PIPE_EQ] = ACTIONS(361),
    [anon_sym_CARET_EQ] = ACTIONS(361),
    [anon_sym_LT_LT_EQ] = ACTIONS(361),
    [anon_sym_GT_GT_EQ] = ACTIONS(361),
  },
  [128] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_PLUS_PLUS] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT] = ACTIONS(267),
    [anon_sym_DASH_PERCENT] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [129] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_and] = ACTIONS(365),
    [anon_sym_or] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_PLUS_PERCENT] = ACTIONS(367),
    [anon_sym_DASH_PERCENT] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_STAR_STAR] = ACTIONS(365),
    [anon_sym_STAR_PERCENT] = ACTIONS(367),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_orelse] = ACTIONS(365),
    [anon_sym_catch] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(365),
    [anon_sym_DASH_EQ] = ACTIONS(365),
    [anon_sym_STAR_EQ] = ACTIONS(365),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [anon_sym_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_AMP_EQ] = ACTIONS(365),
    [anon_sym_PIPE_EQ] = ACTIONS(365),
    [anon_sym_CARET_EQ] = ACTIONS(365),
    [anon_sym_LT_LT_EQ] = ACTIONS(365),
    [anon_sym_GT_GT_EQ] = ACTIONS(365),
  },
  [130] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [131] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_BANG_EQ] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_LT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_PLUS_PERCENT] = ACTIONS(371),
    [anon_sym_DASH_PERCENT] = ACTIONS(371),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_STAR_STAR] = ACTIONS(369),
    [anon_sym_STAR_PERCENT] = ACTIONS(371),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
  },
  [132] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [133] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(343),
    [anon_sym_catch] = ACTIONS(343),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [134] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_and] = ACTIONS(373),
    [anon_sym_or] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(373),
    [anon_sym_PLUS_PERCENT] = ACTIONS(375),
    [anon_sym_DASH_PERCENT] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_STAR_STAR] = ACTIONS(373),
    [anon_sym_STAR_PERCENT] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(373),
    [anon_sym_orelse] = ACTIONS(373),
    [anon_sym_catch] = ACTIONS(373),
    [anon_sym_PLUS_EQ] = ACTIONS(373),
    [anon_sym_DASH_EQ] = ACTIONS(373),
    [anon_sym_STAR_EQ] = ACTIONS(373),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(373),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(373),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(373),
    [anon_sym_SLASH_EQ] = ACTIONS(373),
    [anon_sym_PERCENT_EQ] = ACTIONS(373),
    [anon_sym_AMP_EQ] = ACTIONS(373),
    [anon_sym_PIPE_EQ] = ACTIONS(373),
    [anon_sym_CARET_EQ] = ACTIONS(373),
    [anon_sym_LT_LT_EQ] = ACTIONS(373),
    [anon_sym_GT_GT_EQ] = ACTIONS(373),
  },
  [135] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [136] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [137] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [138] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [139] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [140] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [141] = {
    [sym_assignment_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_PLUS_PERCENT] = ACTIONS(333),
    [anon_sym_DASH_PERCENT] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_STAR_PERCENT] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_orelse] = ACTIONS(343),
    [anon_sym_catch] = ACTIONS(343),
    [anon_sym_PLUS_EQ] = ACTIONS(285),
    [anon_sym_DASH_EQ] = ACTIONS(285),
    [anon_sym_STAR_EQ] = ACTIONS(285),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_SLASH_EQ] = ACTIONS(285),
    [anon_sym_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_AMP_EQ] = ACTIONS(285),
    [anon_sym_PIPE_EQ] = ACTIONS(285),
    [anon_sym_CARET_EQ] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(285),
    [anon_sym_GT_GT_EQ] = ACTIONS(285),
  },
  [142] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_PLUS_PLUS] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT] = ACTIONS(251),
    [anon_sym_DASH_PERCENT] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [anon_sym_STAR_PERCENT] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_orelse] = ACTIONS(253),
    [anon_sym_catch] = ACTIONS(253),
    [anon_sym_PLUS_EQ] = ACTIONS(253),
    [anon_sym_DASH_EQ] = ACTIONS(253),
    [anon_sym_STAR_EQ] = ACTIONS(253),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [anon_sym_PERCENT_EQ] = ACTIONS(253),
    [anon_sym_AMP_EQ] = ACTIONS(253),
    [anon_sym_PIPE_EQ] = ACTIONS(253),
    [anon_sym_CARET_EQ] = ACTIONS(253),
    [anon_sym_LT_LT_EQ] = ACTIONS(253),
    [anon_sym_GT_GT_EQ] = ACTIONS(253),
  },
  [143] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [144] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [145] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [146] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(409),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [147] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [148] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(413),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [149] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(285),
    [anon_sym_DASH_EQ] = ACTIONS(285),
    [anon_sym_STAR_EQ] = ACTIONS(285),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_SLASH_EQ] = ACTIONS(285),
    [anon_sym_PERCENT_EQ] = ACTIONS(285),
    [anon_sym_AMP_EQ] = ACTIONS(285),
    [anon_sym_PIPE_EQ] = ACTIONS(285),
    [anon_sym_CARET_EQ] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(285),
    [anon_sym_GT_GT_EQ] = ACTIONS(285),
  },
  [150] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_PLUS_PLUS] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT] = ACTIONS(267),
    [anon_sym_DASH_PERCENT] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [151] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT] = ACTIONS(247),
    [anon_sym_DASH_PERCENT] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_STAR_PERCENT] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [152] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [153] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [154] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_CARET] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(269),
    [anon_sym_catch] = ACTIONS(269),
    [anon_sym_PLUS_EQ] = ACTIONS(269),
    [anon_sym_DASH_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_SLASH_EQ] = ACTIONS(269),
    [anon_sym_PERCENT_EQ] = ACTIONS(269),
    [anon_sym_AMP_EQ] = ACTIONS(269),
    [anon_sym_PIPE_EQ] = ACTIONS(269),
    [anon_sym_CARET_EQ] = ACTIONS(269),
    [anon_sym_LT_LT_EQ] = ACTIONS(269),
    [anon_sym_GT_GT_EQ] = ACTIONS(269),
  },
  [155] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [156] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [157] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [158] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [159] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(257),
    [anon_sym_DASH_EQ] = ACTIONS(257),
    [anon_sym_STAR_EQ] = ACTIONS(257),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_SLASH_EQ] = ACTIONS(257),
    [anon_sym_PERCENT_EQ] = ACTIONS(257),
    [anon_sym_AMP_EQ] = ACTIONS(257),
    [anon_sym_PIPE_EQ] = ACTIONS(257),
    [anon_sym_CARET_EQ] = ACTIONS(257),
    [anon_sym_LT_LT_EQ] = ACTIONS(257),
    [anon_sym_GT_GT_EQ] = ACTIONS(257),
  },
  [160] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [161] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [162] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(249),
    [anon_sym_catch] = ACTIONS(249),
    [anon_sym_PLUS_EQ] = ACTIONS(249),
    [anon_sym_DASH_EQ] = ACTIONS(249),
    [anon_sym_STAR_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [anon_sym_PERCENT_EQ] = ACTIONS(249),
    [anon_sym_AMP_EQ] = ACTIONS(249),
    [anon_sym_PIPE_EQ] = ACTIONS(249),
    [anon_sym_CARET_EQ] = ACTIONS(249),
    [anon_sym_LT_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_GT_EQ] = ACTIONS(249),
  },
  [163] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [164] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [165] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(399),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_BANG_EQ] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_LT_EQ] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_EQ] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(377),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(407),
    [anon_sym_catch] = ACTIONS(407),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
  },
  [166] = {
    [sym__type] = STATE(205),
    [sym_primitive_type] = STATE(205),
    [sym_optional_type] = STATE(205),
    [sym_array_type] = STATE(205),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(427),
  },
  [167] = {
    [sym__type] = STATE(202),
    [sym_primitive_type] = STATE(202),
    [sym_optional_type] = STATE(202),
    [sym_array_type] = STATE(202),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(429),
  },
  [168] = {
    [sym__type] = STATE(201),
    [sym_primitive_type] = STATE(201),
    [sym_optional_type] = STATE(201),
    [sym_array_type] = STATE(201),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(431),
  },
  [169] = {
    [sym__type] = STATE(193),
    [sym_primitive_type] = STATE(193),
    [sym_optional_type] = STATE(193),
    [sym_array_type] = STATE(193),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(433),
  },
  [170] = {
    [sym__type] = STATE(200),
    [sym_primitive_type] = STATE(200),
    [sym_optional_type] = STATE(200),
    [sym_array_type] = STATE(200),
    [aux_sym_array_type_repeat1] = STATE(172),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(435),
  },
  [171] = {
    [sym__type] = STATE(196),
    [sym_primitive_type] = STATE(196),
    [sym_optional_type] = STATE(196),
    [sym_array_type] = STATE(196),
    [aux_sym_array_type_repeat1] = STATE(173),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(437),
  },
  [172] = {
    [sym_primitive_type] = STATE(191),
    [sym_optional_type] = STATE(191),
    [aux_sym_array_type_repeat1] = STATE(174),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_i128] = ACTIONS(17),
    [anon_sym_u128] = ACTIONS(17),
    [anon_sym_isize] = ACTIONS(17),
    [anon_sym_usize] = ACTIONS(17),
    [anon_sym_c_short] = ACTIONS(17),
    [anon_sym_c_ushort] = ACTIONS(17),
    [anon_sym_c_int] = ACTIONS(17),
    [anon_sym_c_uint] = ACTIONS(17),
    [anon_sym_c_long] = ACTIONS(17),
    [anon_sym_c_ulong] = ACTIONS(17),
    [anon_sym_c_longlong] = ACTIONS(17),
    [anon_sym_c_ulonglong] = ACTIONS(17),
    [anon_sym_c_longdouble] = ACTIONS(17),
    [anon_sym_f16] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_f128] = ACTIONS(17),
    [anon_sym_comptime_int] = ACTIONS(17),
    [anon_sym_comptime_float] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_noreturn] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(17),
    [anon_sym_anyerror] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_identifier] = ACTIONS(439),
  },
  [173] = {
    [sym_primitive_type] = STATE(191),
    [sym_optional_type] = STATE(191),
    [aux_sym_array_type_repeat1] = STATE(174),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(441),
    [anon_sym_u8] = ACTIONS(441),
    [anon_sym_i16] = ACTIONS(441),
    [anon_sym_u16] = ACTIONS(441),
    [anon_sym_i32] = ACTIONS(441),
    [anon_sym_u32] = ACTIONS(441),
    [anon_sym_i64] = ACTIONS(441),
    [anon_sym_u64] = ACTIONS(441),
    [anon_sym_i128] = ACTIONS(441),
    [anon_sym_u128] = ACTIONS(441),
    [anon_sym_isize] = ACTIONS(441),
    [anon_sym_usize] = ACTIONS(441),
    [anon_sym_c_short] = ACTIONS(441),
    [anon_sym_c_ushort] = ACTIONS(441),
    [anon_sym_c_int] = ACTIONS(441),
    [anon_sym_c_uint] = ACTIONS(441),
    [anon_sym_c_long] = ACTIONS(441),
    [anon_sym_c_ulong] = ACTIONS(441),
    [anon_sym_c_longlong] = ACTIONS(441),
    [anon_sym_c_ulonglong] = ACTIONS(441),
    [anon_sym_c_longdouble] = ACTIONS(441),
    [anon_sym_f16] = ACTIONS(441),
    [anon_sym_f32] = ACTIONS(441),
    [anon_sym_f64] = ACTIONS(441),
    [anon_sym_f128] = ACTIONS(441),
    [anon_sym_comptime_int] = ACTIONS(441),
    [anon_sym_comptime_float] = ACTIONS(441),
    [anon_sym_bool] = ACTIONS(441),
    [anon_sym_void] = ACTIONS(441),
    [anon_sym_noreturn] = ACTIONS(441),
    [anon_sym_type] = ACTIONS(441),
    [anon_sym_anyerror] = ACTIONS(441),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_identifier] = ACTIONS(441),
  },
  [174] = {
    [aux_sym_array_type_repeat1] = STATE(174),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(441),
    [anon_sym_u8] = ACTIONS(441),
    [anon_sym_i16] = ACTIONS(441),
    [anon_sym_u16] = ACTIONS(441),
    [anon_sym_i32] = ACTIONS(441),
    [anon_sym_u32] = ACTIONS(441),
    [anon_sym_i64] = ACTIONS(441),
    [anon_sym_u64] = ACTIONS(441),
    [anon_sym_i128] = ACTIONS(441),
    [anon_sym_u128] = ACTIONS(441),
    [anon_sym_isize] = ACTIONS(441),
    [anon_sym_usize] = ACTIONS(441),
    [anon_sym_c_short] = ACTIONS(441),
    [anon_sym_c_ushort] = ACTIONS(441),
    [anon_sym_c_int] = ACTIONS(441),
    [anon_sym_c_uint] = ACTIONS(441),
    [anon_sym_c_long] = ACTIONS(441),
    [anon_sym_c_ulong] = ACTIONS(441),
    [anon_sym_c_longlong] = ACTIONS(441),
    [anon_sym_c_ulonglong] = ACTIONS(441),
    [anon_sym_c_longdouble] = ACTIONS(441),
    [anon_sym_f16] = ACTIONS(441),
    [anon_sym_f32] = ACTIONS(441),
    [anon_sym_f64] = ACTIONS(441),
    [anon_sym_f128] = ACTIONS(441),
    [anon_sym_comptime_int] = ACTIONS(441),
    [anon_sym_comptime_float] = ACTIONS(441),
    [anon_sym_bool] = ACTIONS(441),
    [anon_sym_void] = ACTIONS(441),
    [anon_sym_noreturn] = ACTIONS(441),
    [anon_sym_type] = ACTIONS(441),
    [anon_sym_anyerror] = ACTIONS(441),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(445),
    [sym_identifier] = ACTIONS(441),
  },
  [175] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(448),
    [anon_sym_u8] = ACTIONS(448),
    [anon_sym_i16] = ACTIONS(448),
    [anon_sym_u16] = ACTIONS(448),
    [anon_sym_i32] = ACTIONS(448),
    [anon_sym_u32] = ACTIONS(448),
    [anon_sym_i64] = ACTIONS(448),
    [anon_sym_u64] = ACTIONS(448),
    [anon_sym_i128] = ACTIONS(448),
    [anon_sym_u128] = ACTIONS(448),
    [anon_sym_isize] = ACTIONS(448),
    [anon_sym_usize] = ACTIONS(448),
    [anon_sym_c_short] = ACTIONS(448),
    [anon_sym_c_ushort] = ACTIONS(448),
    [anon_sym_c_int] = ACTIONS(448),
    [anon_sym_c_uint] = ACTIONS(448),
    [anon_sym_c_long] = ACTIONS(448),
    [anon_sym_c_ulong] = ACTIONS(448),
    [anon_sym_c_longlong] = ACTIONS(448),
    [anon_sym_c_ulonglong] = ACTIONS(448),
    [anon_sym_c_longdouble] = ACTIONS(448),
    [anon_sym_f16] = ACTIONS(448),
    [anon_sym_f32] = ACTIONS(448),
    [anon_sym_f64] = ACTIONS(448),
    [anon_sym_f128] = ACTIONS(448),
    [anon_sym_comptime_int] = ACTIONS(448),
    [anon_sym_comptime_float] = ACTIONS(448),
    [anon_sym_bool] = ACTIONS(448),
    [anon_sym_void] = ACTIONS(448),
    [anon_sym_noreturn] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [anon_sym_anyerror] = ACTIONS(448),
    [anon_sym_QMARK] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [sym_identifier] = ACTIONS(448),
  },
  [176] = {
    [aux_sym_string_literal_repeat1] = STATE(180),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(452),
    [anon_sym_DQUOTE2] = ACTIONS(454),
    [sym_escape_sequence] = ACTIONS(456),
  },
  [177] = {
    [sym_block] = STATE(122),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(458),
    [anon_sym_var] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [178] = {
    [aux_sym_string_literal_repeat1] = STATE(178),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(460),
    [anon_sym_DQUOTE2] = ACTIONS(463),
    [sym_escape_sequence] = ACTIONS(465),
  },
  [179] = {
    [sym_block] = STATE(122),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(468),
    [anon_sym_var] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [180] = {
    [aux_sym_string_literal_repeat1] = STATE(178),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(470),
    [anon_sym_DQUOTE2] = ACTIONS(472),
    [sym_escape_sequence] = ACTIONS(474),
  },
  [181] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(183),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(476),
  },
  [182] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(478),
    [aux_sym_char_literal_token1] = ACTIONS(480),
    [sym_escape_sequence] = ACTIONS(482),
  },
  [183] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(183),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(484),
  },
  [184] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(183),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(487),
  },
  [185] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(491),
  },
  [186] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(468),
    [anon_sym_var] = ACTIONS(468),
  },
  [187] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(495),
  },
  [188] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(497),
    [sym_identifier] = ACTIONS(497),
  },
  [189] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(458),
    [anon_sym_var] = ACTIONS(458),
  },
  [190] = {
    [sym_block] = STATE(122),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [191] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
  },
  [192] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(503),
  },
  [193] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
  },
  [194] = {
    [sym_array_values] = STATE(115),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(507),
  },
  [195] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
  },
  [196] = {
    [sym_array_values] = STATE(100),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(507),
  },
  [197] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(513),
  },
  [198] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(515),
  },
  [199] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(517),
  },
  [200] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(519),
  },
  [201] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(521),
  },
  [202] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(523),
  },
  [203] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(525),
  },
  [204] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(527),
  },
  [205] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(529),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [207] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(533),
  },
  [208] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(535),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(68),
  [11] = {.count = 1, .reusable = false}, SHIFT(186),
  [13] = {.count = 1, .reusable = false}, SHIFT(179),
  [15] = {.count = 1, .reusable = false}, SHIFT(198),
  [17] = {.count = 1, .reusable = false}, SHIFT(195),
  [19] = {.count = 1, .reusable = true}, SHIFT(66),
  [21] = {.count = 1, .reusable = true}, SHIFT(188),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(78),
  [29] = {.count = 1, .reusable = false}, SHIFT(78),
  [31] = {.count = 1, .reusable = false}, SHIFT(119),
  [33] = {.count = 1, .reusable = true}, SHIFT(182),
  [35] = {.count = 1, .reusable = true}, SHIFT(176),
  [37] = {.count = 1, .reusable = true}, SHIFT(90),
  [39] = {.count = 1, .reusable = false}, SHIFT(113),
  [41] = {.count = 1, .reusable = false}, SHIFT(89),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [53] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [98] = {.count = 1, .reusable = true}, SHIFT(65),
  [100] = {.count = 1, .reusable = false}, SHIFT(189),
  [102] = {.count = 1, .reusable = false}, SHIFT(177),
  [104] = {.count = 1, .reusable = false}, SHIFT(203),
  [106] = {.count = 1, .reusable = true}, SHIFT(117),
  [108] = {.count = 1, .reusable = true}, SHIFT(81),
  [110] = {.count = 1, .reusable = true}, SHIFT(134),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [124] = {.count = 1, .reusable = false}, SHIFT(190),
  [126] = {.count = 1, .reusable = true}, SHIFT(105),
  [128] = {.count = 1, .reusable = true}, SHIFT(84),
  [130] = {.count = 1, .reusable = true}, SHIFT(114),
  [132] = {.count = 1, .reusable = true}, SHIFT(116),
  [134] = {.count = 1, .reusable = true}, SHIFT(99),
  [136] = {.count = 1, .reusable = true}, SHIFT(118),
  [138] = {.count = 1, .reusable = true}, SHIFT(131),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 8, .production_id = 16),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 8, .production_id = 16),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 7, .production_id = 15),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 7, .production_id = 15),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 5, .production_id = 12),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 5, .production_id = 12),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 6, .production_id = 14),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 6, .production_id = 14),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_operator, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_operator, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [174] = {.count = 1, .reusable = false}, SHIFT(82),
  [176] = {.count = 1, .reusable = false}, SHIFT(83),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [180] = {.count = 1, .reusable = false}, SHIFT(80),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(82),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(83),
  [190] = {.count = 1, .reusable = false}, SHIFT(79),
  [192] = {.count = 1, .reusable = false}, SHIFT(86),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(86),
  [197] = {.count = 1, .reusable = false}, SHIFT(23),
  [199] = {.count = 1, .reusable = true}, SHIFT(121),
  [201] = {.count = 1, .reusable = true}, SHIFT(7),
  [203] = {.count = 1, .reusable = true}, SHIFT(22),
  [205] = {.count = 1, .reusable = false}, SHIFT(21),
  [207] = {.count = 1, .reusable = false}, SHIFT(20),
  [209] = {.count = 1, .reusable = false}, SHIFT(19),
  [211] = {.count = 1, .reusable = false}, SHIFT(18),
  [213] = {.count = 1, .reusable = true}, SHIFT(17),
  [215] = {.count = 1, .reusable = false}, SHIFT(17),
  [217] = {.count = 1, .reusable = false}, SHIFT(16),
  [219] = {.count = 1, .reusable = false}, SHIFT(15),
  [221] = {.count = 1, .reusable = false}, SHIFT(38),
  [223] = {.count = 1, .reusable = true}, SHIFT(15),
  [225] = {.count = 1, .reusable = false}, SHIFT(42),
  [227] = {.count = 1, .reusable = true}, SHIFT(42),
  [229] = {.count = 1, .reusable = true}, SHIFT(57),
  [231] = {.count = 1, .reusable = true}, SHIFT(77),
  [233] = {.count = 1, .reusable = true}, SHIFT(108),
  [235] = {.count = 1, .reusable = true}, SHIFT(9),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__type, 1),
  [243] = {.count = 1, .reusable = false}, SHIFT(85),
  [245] = {.count = 1, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 8),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 8),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3, .production_id = 10),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3, .production_id = 10),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 11),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 11),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 3),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 7),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 7),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 13),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 13),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2, .production_id = 1),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2, .production_id = 1),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 4),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 4),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 5),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 5),
  [311] = {.count = 1, .reusable = true}, SHIFT(76),
  [313] = {.count = 1, .reusable = false}, SHIFT(39),
  [315] = {.count = 1, .reusable = true}, SHIFT(104),
  [317] = {.count = 1, .reusable = true}, SHIFT(14),
  [319] = {.count = 1, .reusable = false}, SHIFT(37),
  [321] = {.count = 1, .reusable = false}, SHIFT(36),
  [323] = {.count = 1, .reusable = false}, SHIFT(35),
  [325] = {.count = 1, .reusable = false}, SHIFT(34),
  [327] = {.count = 1, .reusable = true}, SHIFT(32),
  [329] = {.count = 1, .reusable = false}, SHIFT(32),
  [331] = {.count = 1, .reusable = false}, SHIFT(13),
  [333] = {.count = 1, .reusable = false}, SHIFT(30),
  [335] = {.count = 1, .reusable = false}, SHIFT(29),
  [337] = {.count = 1, .reusable = true}, SHIFT(30),
  [339] = {.count = 1, .reusable = false}, SHIFT(28),
  [341] = {.count = 1, .reusable = true}, SHIFT(28),
  [343] = {.count = 1, .reusable = true}, SHIFT(27),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 6),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 6),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_comptime_block, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_comptime_block, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 3),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [377] = {.count = 1, .reusable = false}, SHIFT(51),
  [379] = {.count = 1, .reusable = false}, SHIFT(52),
  [381] = {.count = 1, .reusable = true}, SHIFT(51),
  [383] = {.count = 1, .reusable = false}, SHIFT(53),
  [385] = {.count = 1, .reusable = true}, SHIFT(53),
  [387] = {.count = 1, .reusable = true}, SHIFT(64),
  [389] = {.count = 1, .reusable = false}, SHIFT(43),
  [391] = {.count = 1, .reusable = true}, SHIFT(44),
  [393] = {.count = 1, .reusable = false}, SHIFT(45),
  [395] = {.count = 1, .reusable = false}, SHIFT(46),
  [397] = {.count = 1, .reusable = false}, SHIFT(47),
  [399] = {.count = 1, .reusable = false}, SHIFT(48),
  [401] = {.count = 1, .reusable = true}, SHIFT(49),
  [403] = {.count = 1, .reusable = false}, SHIFT(49),
  [405] = {.count = 1, .reusable = false}, SHIFT(50),
  [407] = {.count = 1, .reusable = true}, SHIFT(54),
  [409] = {.count = 1, .reusable = true}, SHIFT(71),
  [411] = {.count = 1, .reusable = true}, SHIFT(72),
  [413] = {.count = 1, .reusable = true}, SHIFT(73),
  [415] = {.count = 1, .reusable = true}, SHIFT(69),
  [417] = {.count = 1, .reusable = true}, SHIFT(75),
  [419] = {.count = 1, .reusable = true}, SHIFT(74),
  [421] = {.count = 1, .reusable = true}, SHIFT(70),
  [423] = {.count = 1, .reusable = true}, SHIFT(67),
  [425] = {.count = 1, .reusable = true}, SHIFT(169),
  [427] = {.count = 1, .reusable = false}, SHIFT(205),
  [429] = {.count = 1, .reusable = false}, SHIFT(202),
  [431] = {.count = 1, .reusable = false}, SHIFT(201),
  [433] = {.count = 1, .reusable = false}, SHIFT(193),
  [435] = {.count = 1, .reusable = false}, SHIFT(200),
  [437] = {.count = 1, .reusable = false}, SHIFT(196),
  [439] = {.count = 1, .reusable = false}, SHIFT(191),
  [441] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 4),
  [443] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 4),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 4), SHIFT_REPEAT(188),
  [448] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 5),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 5),
  [452] = {.count = 1, .reusable = false}, SHIFT(180),
  [454] = {.count = 1, .reusable = true}, SHIFT(127),
  [456] = {.count = 1, .reusable = true}, SHIFT(180),
  [458] = {.count = 1, .reusable = true}, SHIFT(204),
  [460] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(178),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(178),
  [468] = {.count = 1, .reusable = true}, SHIFT(199),
  [470] = {.count = 1, .reusable = false}, SHIFT(178),
  [472] = {.count = 1, .reusable = true}, SHIFT(124),
  [474] = {.count = 1, .reusable = true}, SHIFT(178),
  [476] = {.count = 1, .reusable = true}, SHIFT(8),
  [478] = {.count = 1, .reusable = false}, SHIFT(129),
  [480] = {.count = 1, .reusable = false}, SHIFT(208),
  [482] = {.count = 1, .reusable = true}, SHIFT(208),
  [484] = {.count = 2, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2), SHIFT_REPEAT(55),
  [487] = {.count = 1, .reusable = true}, SHIFT(11),
  [489] = {.count = 1, .reusable = true}, SHIFT(167),
  [491] = {.count = 1, .reusable = true}, SHIFT(61),
  [493] = {.count = 1, .reusable = true}, SHIFT(170),
  [495] = {.count = 1, .reusable = true}, SHIFT(31),
  [497] = {.count = 1, .reusable = true}, SHIFT(207),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 2, .production_id = 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(166),
  [503] = {.count = 1, .reusable = true}, SHIFT(62),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_optional_type, 2),
  [507] = {.count = 1, .reusable = true}, SHIFT(10),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [511] = {.count = 1, .reusable = true}, SHIFT(168),
  [513] = {.count = 1, .reusable = true}, SHIFT(60),
  [515] = {.count = 1, .reusable = true}, SHIFT(192),
  [517] = {.count = 1, .reusable = true}, SHIFT(187),
  [519] = {.count = 1, .reusable = true}, SHIFT(41),
  [521] = {.count = 1, .reusable = true}, SHIFT(63),
  [523] = {.count = 1, .reusable = true}, SHIFT(33),
  [525] = {.count = 1, .reusable = true}, SHIFT(197),
  [527] = {.count = 1, .reusable = true}, SHIFT(185),
  [529] = {.count = 1, .reusable = true}, SHIFT(58),
  [531] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [533] = {.count = 1, .reusable = true}, SHIFT(175),
  [535] = {.count = 1, .reusable = true}, SHIFT(123),
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
