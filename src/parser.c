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
#define STATE_COUNT 206
#define SYMBOL_COUNT 138
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
  anon_sym_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
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
  sym_comptime_block = 117,
  sym_block = 118,
  sym_array_expression = 119,
  sym_anonymous_array_expr = 120,
  sym_array_values = 121,
  sym_assignment_expression = 122,
  sym_compound_assignment_expr = 123,
  sym_unary_expression = 124,
  sym_binary_expression = 125,
  sym__literals = 126,
  sym_char_literal = 127,
  sym_string_literal = 128,
  sym_multiline_string_literal = 129,
  sym_boolean_literal = 130,
  sym_assignment_operator = 131,
  sym_unary_operator = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_array_expression_repeat1 = 134,
  aux_sym_anonymous_array_expr_repeat1 = 135,
  aux_sym_string_literal_repeat1 = 136,
  aux_sym_multiline_string_literal_repeat1 = 137,
  alias_sym_binary_operator = 138,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_array_expression_repeat1] = {
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
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 3},
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
    {field_size, 1, .inherited = true},
  [6] =
    {field_size, 1},
  [7] =
    {field_values, 1},
  [8] =
    {field_left, 0},
    {field_right, 2},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_size, 0, .inherited = true},
    {field_type, 1},
    {field_values, 2},
  [16] =
    {field_values, 1},
    {field_values, 2},
  [18] =
    {field_expression, 3},
    {field_name, 1},
  [20] =
    {field_values, 1},
    {field_values, 2},
    {field_values, 3},
  [23] =
    {field_expression, 4},
    {field_name, 2},
  [25] =
    {field_expression, 5},
    {field_name, 1},
    {field_type, 3},
  [28] =
    {field_expression, 6},
    {field_name, 2},
    {field_type, 4},
};

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [1] = sym_array_values,
  },
  [8] = {
    [1] = alias_sym_binary_operator,
  },
  [10] = {
    [1] = sym_array_values,
    [2] = sym_array_values,
  },
  [12] = {
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
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(250);
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
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(247);
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
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
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
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
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
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
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
      if (lookahead == '}') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
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
      if (lookahead == '[') ADVANCE(249);
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
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
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
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(247);
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
      if (lookahead == '[') ADVANCE(249);
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
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(250);
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
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '|') ADVANCE(261);
      if (lookahead == '}') ADVANCE(247);
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
      if (lookahead == '[') ADVANCE(249);
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
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == '}') ADVANCE(248);
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
      if (lookahead == '}') ADVANCE(248);
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
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 160},
  [75] = {.lex_state = 160},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 5},
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
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_source_file] = STATE(205),
    [sym__statement] = STATE(4),
    [sym__expression_statement] = STATE(4),
    [sym__declaration_statement] = STATE(4),
    [sym__expression] = STATE(160),
    [sym_empty_statement] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__declaration_statement] = STATE(6),
    [sym__expression] = STATE(118),
    [sym_empty_statement] = STATE(6),
    [sym_assignment_statement] = STATE(6),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_array_expression_repeat1] = STATE(166),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_threadlocal] = ACTIONS(45),
    [anon_sym_comptime] = ACTIONS(47),
    [anon_sym_const] = ACTIONS(49),
    [anon_sym_var] = ACTIONS(49),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(132),
    [sym_empty_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_array_expression_repeat1] = STATE(166),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_threadlocal] = ACTIONS(45),
    [anon_sym_comptime] = ACTIONS(47),
    [anon_sym_const] = ACTIONS(49),
    [anon_sym_var] = ACTIONS(49),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym__declaration_statement] = STATE(5),
    [sym__expression] = STATE(160),
    [sym_empty_statement] = STATE(5),
    [sym_assignment_statement] = STATE(5),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_array_expression_repeat1] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(57),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [5] = {
    [sym__statement] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym__declaration_statement] = STATE(5),
    [sym__expression] = STATE(160),
    [sym_empty_statement] = STATE(5),
    [sym_assignment_statement] = STATE(5),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_array_expression_repeat1] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_threadlocal] = ACTIONS(64),
    [anon_sym_comptime] = ACTIONS(67),
    [anon_sym_const] = ACTIONS(70),
    [anon_sym_var] = ACTIONS(70),
    [anon_sym_i8] = ACTIONS(73),
    [anon_sym_u8] = ACTIONS(73),
    [anon_sym_i16] = ACTIONS(73),
    [anon_sym_u16] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(73),
    [anon_sym_u32] = ACTIONS(73),
    [anon_sym_i64] = ACTIONS(73),
    [anon_sym_u64] = ACTIONS(73),
    [anon_sym_i128] = ACTIONS(73),
    [anon_sym_u128] = ACTIONS(73),
    [anon_sym_isize] = ACTIONS(73),
    [anon_sym_usize] = ACTIONS(73),
    [anon_sym_c_short] = ACTIONS(73),
    [anon_sym_c_ushort] = ACTIONS(73),
    [anon_sym_c_int] = ACTIONS(73),
    [anon_sym_c_uint] = ACTIONS(73),
    [anon_sym_c_long] = ACTIONS(73),
    [anon_sym_c_ulong] = ACTIONS(73),
    [anon_sym_c_longlong] = ACTIONS(73),
    [anon_sym_c_ulonglong] = ACTIONS(73),
    [anon_sym_c_longdouble] = ACTIONS(73),
    [anon_sym_f16] = ACTIONS(73),
    [anon_sym_f32] = ACTIONS(73),
    [anon_sym_f64] = ACTIONS(73),
    [anon_sym_f128] = ACTIONS(73),
    [anon_sym_comptime_int] = ACTIONS(73),
    [anon_sym_comptime_float] = ACTIONS(73),
    [anon_sym_bool] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(73),
    [anon_sym_noreturn] = ACTIONS(73),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_anyerror] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_DOT_LBRACE] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_DASH_PERCENT] = ACTIONS(88),
    [sym_integer_literal] = ACTIONS(94),
    [sym_float_literal] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_c_DQUOTE] = ACTIONS(100),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [sym_null_literal] = ACTIONS(94),
    [sym_undefined_literal] = ACTIONS(94),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [sym_identifier] = ACTIONS(109),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__declaration_statement] = STATE(6),
    [sym__expression] = STATE(155),
    [sym_empty_statement] = STATE(6),
    [sym_assignment_statement] = STATE(6),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_array_expression_repeat1] = STATE(166),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_threadlocal] = ACTIONS(115),
    [anon_sym_comptime] = ACTIONS(118),
    [anon_sym_const] = ACTIONS(121),
    [anon_sym_var] = ACTIONS(121),
    [anon_sym_i8] = ACTIONS(73),
    [anon_sym_u8] = ACTIONS(73),
    [anon_sym_i16] = ACTIONS(73),
    [anon_sym_u16] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(73),
    [anon_sym_u32] = ACTIONS(73),
    [anon_sym_i64] = ACTIONS(73),
    [anon_sym_u64] = ACTIONS(73),
    [anon_sym_i128] = ACTIONS(73),
    [anon_sym_u128] = ACTIONS(73),
    [anon_sym_isize] = ACTIONS(73),
    [anon_sym_usize] = ACTIONS(73),
    [anon_sym_c_short] = ACTIONS(73),
    [anon_sym_c_ushort] = ACTIONS(73),
    [anon_sym_c_int] = ACTIONS(73),
    [anon_sym_c_uint] = ACTIONS(73),
    [anon_sym_c_long] = ACTIONS(73),
    [anon_sym_c_ulong] = ACTIONS(73),
    [anon_sym_c_longlong] = ACTIONS(73),
    [anon_sym_c_ulonglong] = ACTIONS(73),
    [anon_sym_c_longdouble] = ACTIONS(73),
    [anon_sym_f16] = ACTIONS(73),
    [anon_sym_f32] = ACTIONS(73),
    [anon_sym_f64] = ACTIONS(73),
    [anon_sym_f128] = ACTIONS(73),
    [anon_sym_comptime_int] = ACTIONS(73),
    [anon_sym_comptime_float] = ACTIONS(73),
    [anon_sym_bool] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(73),
    [anon_sym_noreturn] = ACTIONS(73),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_anyerror] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_DOT_LBRACE] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_DASH_PERCENT] = ACTIONS(88),
    [sym_integer_literal] = ACTIONS(94),
    [sym_float_literal] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_c_DQUOTE] = ACTIONS(100),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [sym_null_literal] = ACTIONS(94),
    [sym_undefined_literal] = ACTIONS(94),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [sym_identifier] = ACTIONS(109),
  },
  [7] = {
    [sym__expression] = STATE(85),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(104),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(104),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(104),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(87),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(104),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(134),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [14] = {
    [sym__expression] = STATE(139),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [15] = {
    [sym__expression] = STATE(93),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(101),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(105),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(106),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(92),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(108),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(109),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(110),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(112),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [25] = {
    [sym__expression] = STATE(115),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(164),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [27] = {
    [sym__expression] = STATE(94),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [28] = {
    [sym__expression] = STATE(126),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [30] = {
    [sym__expression] = STATE(95),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [31] = {
    [sym__expression] = STATE(130),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [32] = {
    [sym__expression] = STATE(131),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [33] = {
    [sym__expression] = STATE(135),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [36] = {
    [sym__expression] = STATE(141),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [37] = {
    [sym__expression] = STATE(140),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [38] = {
    [sym__expression] = STATE(100),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(138),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(40),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_DOT_LBRACE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_c_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_null_literal] = ACTIONS(31),
    [sym_undefined_literal] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [sym_identifier] = ACTIONS(41),
  },
  [41] = {
    [sym__expression] = STATE(142),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(150),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [43] = {
    [sym__expression] = STATE(157),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(148),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(158),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(162),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(163),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(159),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(143),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(144),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(156),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(152),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [56] = {
    [sym__expression] = STATE(99),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [57] = {
    [sym__expression] = STATE(104),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(27),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(149),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
  [60] = {
    [sym__expression] = STATE(147),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(146),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(145),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [sym__expression] = STATE(161),
    [sym__type] = STATE(186),
    [sym_primitive_type] = STATE(186),
    [sym_optional_type] = STATE(186),
    [sym_comptime_block] = STATE(121),
    [sym_block] = STATE(121),
    [sym_array_expression] = STATE(121),
    [sym_anonymous_array_expr] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_compound_assignment_expr] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym__literals] = STATE(121),
    [sym_char_literal] = STATE(121),
    [sym_string_literal] = STATE(121),
    [sym_multiline_string_literal] = STATE(121),
    [sym_boolean_literal] = STATE(121),
    [sym_unary_operator] = STATE(26),
    [aux_sym_array_expression_repeat1] = STATE(166),
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
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
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
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
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
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
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
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_threadlocal] = ACTIONS(150),
    [anon_sym_comptime] = ACTIONS(150),
    [anon_sym_const] = ACTIONS(150),
    [anon_sym_var] = ACTIONS(150),
    [anon_sym_i8] = ACTIONS(150),
    [anon_sym_u8] = ACTIONS(150),
    [anon_sym_i16] = ACTIONS(150),
    [anon_sym_u16] = ACTIONS(150),
    [anon_sym_i32] = ACTIONS(150),
    [anon_sym_u32] = ACTIONS(150),
    [anon_sym_i64] = ACTIONS(150),
    [anon_sym_u64] = ACTIONS(150),
    [anon_sym_i128] = ACTIONS(150),
    [anon_sym_u128] = ACTIONS(150),
    [anon_sym_isize] = ACTIONS(150),
    [anon_sym_usize] = ACTIONS(150),
    [anon_sym_c_short] = ACTIONS(150),
    [anon_sym_c_ushort] = ACTIONS(150),
    [anon_sym_c_int] = ACTIONS(150),
    [anon_sym_c_uint] = ACTIONS(150),
    [anon_sym_c_long] = ACTIONS(150),
    [anon_sym_c_ulong] = ACTIONS(150),
    [anon_sym_c_longlong] = ACTIONS(150),
    [anon_sym_c_ulonglong] = ACTIONS(150),
    [anon_sym_c_longdouble] = ACTIONS(150),
    [anon_sym_f16] = ACTIONS(150),
    [anon_sym_f32] = ACTIONS(150),
    [anon_sym_f64] = ACTIONS(150),
    [anon_sym_f128] = ACTIONS(150),
    [anon_sym_comptime_int] = ACTIONS(150),
    [anon_sym_comptime_float] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_void] = ACTIONS(150),
    [anon_sym_noreturn] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(150),
    [anon_sym_anyerror] = ACTIONS(150),
    [anon_sym_QMARK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_DOT_LBRACE] = ACTIONS(148),
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_DASH_PERCENT] = ACTIONS(148),
    [sym_integer_literal] = ACTIONS(150),
    [sym_float_literal] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_c_DQUOTE] = ACTIONS(148),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(148),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [sym_null_literal] = ACTIONS(150),
    [sym_undefined_literal] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_BANG] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
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
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
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
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
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
  [69] = {
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
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
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
  [70] = {
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
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
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
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_threadlocal] = ACTIONS(150),
    [anon_sym_comptime] = ACTIONS(150),
    [anon_sym_const] = ACTIONS(150),
    [anon_sym_var] = ACTIONS(150),
    [anon_sym_i8] = ACTIONS(150),
    [anon_sym_u8] = ACTIONS(150),
    [anon_sym_i16] = ACTIONS(150),
    [anon_sym_u16] = ACTIONS(150),
    [anon_sym_i32] = ACTIONS(150),
    [anon_sym_u32] = ACTIONS(150),
    [anon_sym_i64] = ACTIONS(150),
    [anon_sym_u64] = ACTIONS(150),
    [anon_sym_i128] = ACTIONS(150),
    [anon_sym_u128] = ACTIONS(150),
    [anon_sym_isize] = ACTIONS(150),
    [anon_sym_usize] = ACTIONS(150),
    [anon_sym_c_short] = ACTIONS(150),
    [anon_sym_c_ushort] = ACTIONS(150),
    [anon_sym_c_int] = ACTIONS(150),
    [anon_sym_c_uint] = ACTIONS(150),
    [anon_sym_c_long] = ACTIONS(150),
    [anon_sym_c_ulong] = ACTIONS(150),
    [anon_sym_c_longlong] = ACTIONS(150),
    [anon_sym_c_ulonglong] = ACTIONS(150),
    [anon_sym_c_longdouble] = ACTIONS(150),
    [anon_sym_f16] = ACTIONS(150),
    [anon_sym_f32] = ACTIONS(150),
    [anon_sym_f64] = ACTIONS(150),
    [anon_sym_f128] = ACTIONS(150),
    [anon_sym_comptime_int] = ACTIONS(150),
    [anon_sym_comptime_float] = ACTIONS(150),
    [anon_sym_bool] = ACTIONS(150),
    [anon_sym_void] = ACTIONS(150),
    [anon_sym_noreturn] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(150),
    [anon_sym_anyerror] = ACTIONS(150),
    [anon_sym_QMARK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_DOT_LBRACE] = ACTIONS(148),
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_DASH_PERCENT] = ACTIONS(148),
    [sym_integer_literal] = ACTIONS(150),
    [sym_float_literal] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_c_DQUOTE] = ACTIONS(148),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(148),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [sym_null_literal] = ACTIONS(150),
    [sym_undefined_literal] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_BANG] = ACTIONS(148),
    [sym_identifier] = ACTIONS(150),
  },
  [72] = {
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
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
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
  [73] = {
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
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
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
  [74] = {
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
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
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
  [75] = {
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
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
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
  [76] = {
    [sym__type] = STATE(190),
    [sym_primitive_type] = STATE(190),
    [sym_optional_type] = STATE(190),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(164),
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
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_DOT_LBRACE] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_DASH_PERCENT] = ACTIONS(172),
    [sym_integer_literal] = ACTIONS(164),
    [sym_float_literal] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_c_DQUOTE] = ACTIONS(172),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(172),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [sym_null_literal] = ACTIONS(164),
    [sym_undefined_literal] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
  },
  [77] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(164),
    [anon_sym_i8] = ACTIONS(164),
    [anon_sym_u8] = ACTIONS(164),
    [anon_sym_i16] = ACTIONS(164),
    [anon_sym_u16] = ACTIONS(164),
    [anon_sym_i32] = ACTIONS(164),
    [anon_sym_u32] = ACTIONS(164),
    [anon_sym_i64] = ACTIONS(164),
    [anon_sym_u64] = ACTIONS(164),
    [anon_sym_i128] = ACTIONS(164),
    [anon_sym_u128] = ACTIONS(164),
    [anon_sym_isize] = ACTIONS(164),
    [anon_sym_usize] = ACTIONS(164),
    [anon_sym_c_short] = ACTIONS(164),
    [anon_sym_c_ushort] = ACTIONS(164),
    [anon_sym_c_int] = ACTIONS(164),
    [anon_sym_c_uint] = ACTIONS(164),
    [anon_sym_c_long] = ACTIONS(164),
    [anon_sym_c_ulong] = ACTIONS(164),
    [anon_sym_c_longlong] = ACTIONS(164),
    [anon_sym_c_ulonglong] = ACTIONS(164),
    [anon_sym_c_longdouble] = ACTIONS(164),
    [anon_sym_f16] = ACTIONS(164),
    [anon_sym_f32] = ACTIONS(164),
    [anon_sym_f64] = ACTIONS(164),
    [anon_sym_f128] = ACTIONS(164),
    [anon_sym_comptime_int] = ACTIONS(164),
    [anon_sym_comptime_float] = ACTIONS(164),
    [anon_sym_bool] = ACTIONS(164),
    [anon_sym_void] = ACTIONS(164),
    [anon_sym_noreturn] = ACTIONS(164),
    [anon_sym_type] = ACTIONS(164),
    [anon_sym_anyerror] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_DOT_LBRACE] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_DASH_PERCENT] = ACTIONS(172),
    [sym_integer_literal] = ACTIONS(164),
    [sym_float_literal] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_c_DQUOTE] = ACTIONS(172),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(172),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [sym_null_literal] = ACTIONS(164),
    [sym_undefined_literal] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [sym_identifier] = ACTIONS(164),
  },
  [78] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(177),
    [anon_sym_i8] = ACTIONS(177),
    [anon_sym_u8] = ACTIONS(177),
    [anon_sym_i16] = ACTIONS(177),
    [anon_sym_u16] = ACTIONS(177),
    [anon_sym_i32] = ACTIONS(177),
    [anon_sym_u32] = ACTIONS(177),
    [anon_sym_i64] = ACTIONS(177),
    [anon_sym_u64] = ACTIONS(177),
    [anon_sym_i128] = ACTIONS(177),
    [anon_sym_u128] = ACTIONS(177),
    [anon_sym_isize] = ACTIONS(177),
    [anon_sym_usize] = ACTIONS(177),
    [anon_sym_c_short] = ACTIONS(177),
    [anon_sym_c_ushort] = ACTIONS(177),
    [anon_sym_c_int] = ACTIONS(177),
    [anon_sym_c_uint] = ACTIONS(177),
    [anon_sym_c_long] = ACTIONS(177),
    [anon_sym_c_ulong] = ACTIONS(177),
    [anon_sym_c_longlong] = ACTIONS(177),
    [anon_sym_c_ulonglong] = ACTIONS(177),
    [anon_sym_c_longdouble] = ACTIONS(177),
    [anon_sym_f16] = ACTIONS(177),
    [anon_sym_f32] = ACTIONS(177),
    [anon_sym_f64] = ACTIONS(177),
    [anon_sym_f128] = ACTIONS(177),
    [anon_sym_comptime_int] = ACTIONS(177),
    [anon_sym_comptime_float] = ACTIONS(177),
    [anon_sym_bool] = ACTIONS(177),
    [anon_sym_void] = ACTIONS(177),
    [anon_sym_noreturn] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_anyerror] = ACTIONS(177),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_DASH_PERCENT] = ACTIONS(179),
    [sym_integer_literal] = ACTIONS(177),
    [sym_float_literal] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_c_DQUOTE] = ACTIONS(179),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(179),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [sym_null_literal] = ACTIONS(177),
    [sym_undefined_literal] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [sym_identifier] = ACTIONS(177),
  },
  [79] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(79),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(181),
    [anon_sym_or] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT] = ACTIONS(181),
    [anon_sym_DASH_PERCENT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_STAR_PERCENT] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_orelse] = ACTIONS(181),
    [anon_sym_catch] = ACTIONS(181),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
  },
  [80] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(79),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(186),
    [anon_sym_BANG_EQ] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_PLUS_PLUS] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT] = ACTIONS(186),
    [anon_sym_DASH_PERCENT] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
    [anon_sym_STAR_STAR] = ACTIONS(186),
    [anon_sym_STAR_PERCENT] = ACTIONS(186),
    [anon_sym_PIPE_PIPE] = ACTIONS(186),
    [anon_sym_orelse] = ACTIONS(186),
    [anon_sym_catch] = ACTIONS(186),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(188),
    [sym_escape_sequence] = ACTIONS(188),
    [anon_sym_PLUS_EQ] = ACTIONS(186),
    [anon_sym_DASH_EQ] = ACTIONS(186),
    [anon_sym_STAR_EQ] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(186),
    [anon_sym_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_AMP_EQ] = ACTIONS(186),
    [anon_sym_PIPE_EQ] = ACTIONS(186),
    [anon_sym_CARET_EQ] = ACTIONS(186),
    [anon_sym_LT_LT_EQ] = ACTIONS(186),
    [anon_sym_GT_GT_EQ] = ACTIONS(186),
  },
  [81] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(80),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT] = ACTIONS(190),
    [anon_sym_DASH_PERCENT] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_STAR_STAR] = ACTIONS(190),
    [anon_sym_STAR_PERCENT] = ACTIONS(190),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_orelse] = ACTIONS(190),
    [anon_sym_catch] = ACTIONS(190),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(192),
    [sym_escape_sequence] = ACTIONS(192),
    [anon_sym_PLUS_EQ] = ACTIONS(190),
    [anon_sym_DASH_EQ] = ACTIONS(190),
    [anon_sym_STAR_EQ] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [anon_sym_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_AMP_EQ] = ACTIONS(190),
    [anon_sym_PIPE_EQ] = ACTIONS(190),
    [anon_sym_CARET_EQ] = ACTIONS(190),
    [anon_sym_LT_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT_EQ] = ACTIONS(190),
  },
  [82] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(82),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(181),
    [anon_sym_or] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT] = ACTIONS(181),
    [anon_sym_DASH_PERCENT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_STAR_PERCENT] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_orelse] = ACTIONS(181),
    [anon_sym_catch] = ACTIONS(181),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(194),
    [sym_escape_sequence] = ACTIONS(194),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
  },
  [83] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(84),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT] = ACTIONS(190),
    [anon_sym_DASH_PERCENT] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_STAR_STAR] = ACTIONS(190),
    [anon_sym_STAR_PERCENT] = ACTIONS(190),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_orelse] = ACTIONS(190),
    [anon_sym_catch] = ACTIONS(190),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(197),
    [sym_escape_sequence] = ACTIONS(197),
    [anon_sym_PLUS_EQ] = ACTIONS(190),
    [anon_sym_DASH_EQ] = ACTIONS(190),
    [anon_sym_STAR_EQ] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [anon_sym_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_AMP_EQ] = ACTIONS(190),
    [anon_sym_PIPE_EQ] = ACTIONS(190),
    [anon_sym_CARET_EQ] = ACTIONS(190),
    [anon_sym_LT_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT_EQ] = ACTIONS(190),
  },
  [84] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(82),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(186),
    [anon_sym_BANG_EQ] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_PLUS_PLUS] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT] = ACTIONS(186),
    [anon_sym_DASH_PERCENT] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
    [anon_sym_STAR_STAR] = ACTIONS(186),
    [anon_sym_STAR_PERCENT] = ACTIONS(186),
    [anon_sym_PIPE_PIPE] = ACTIONS(186),
    [anon_sym_orelse] = ACTIONS(186),
    [anon_sym_catch] = ACTIONS(186),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(199),
    [sym_escape_sequence] = ACTIONS(199),
    [anon_sym_PLUS_EQ] = ACTIONS(186),
    [anon_sym_DASH_EQ] = ACTIONS(186),
    [anon_sym_STAR_EQ] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(186),
    [anon_sym_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_AMP_EQ] = ACTIONS(186),
    [anon_sym_PIPE_EQ] = ACTIONS(186),
    [anon_sym_CARET_EQ] = ACTIONS(186),
    [anon_sym_LT_LT_EQ] = ACTIONS(186),
    [anon_sym_GT_GT_EQ] = ACTIONS(186),
  },
  [85] = {
    [sym_assignment_operator] = STATE(56),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(181),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(233),
    [anon_sym_catch] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [86] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(88),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(186),
    [anon_sym_BANG_EQ] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_EQ] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_PLUS_PLUS] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT] = ACTIONS(186),
    [anon_sym_DASH_PERCENT] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
    [anon_sym_STAR_STAR] = ACTIONS(186),
    [anon_sym_STAR_PERCENT] = ACTIONS(186),
    [anon_sym_PIPE_PIPE] = ACTIONS(186),
    [anon_sym_orelse] = ACTIONS(186),
    [anon_sym_catch] = ACTIONS(186),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [anon_sym_PLUS_EQ] = ACTIONS(186),
    [anon_sym_DASH_EQ] = ACTIONS(186),
    [anon_sym_STAR_EQ] = ACTIONS(186),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_SLASH_EQ] = ACTIONS(186),
    [anon_sym_PERCENT_EQ] = ACTIONS(186),
    [anon_sym_AMP_EQ] = ACTIONS(186),
    [anon_sym_PIPE_EQ] = ACTIONS(186),
    [anon_sym_CARET_EQ] = ACTIONS(186),
    [anon_sym_LT_LT_EQ] = ACTIONS(186),
    [anon_sym_GT_GT_EQ] = ACTIONS(186),
  },
  [87] = {
    [sym_assignment_operator] = STATE(56),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(179),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(233),
    [anon_sym_catch] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [88] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(88),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(181),
    [anon_sym_or] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT] = ACTIONS(181),
    [anon_sym_DASH_PERCENT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_STAR_STAR] = ACTIONS(181),
    [anon_sym_STAR_PERCENT] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_orelse] = ACTIONS(181),
    [anon_sym_catch] = ACTIONS(181),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(243),
    [sym_escape_sequence] = ACTIONS(243),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
  },
  [89] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(246),
    [anon_sym_or] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(246),
    [anon_sym_BANG_EQ] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_PLUS_PERCENT] = ACTIONS(248),
    [anon_sym_DASH_PERCENT] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [anon_sym_STAR_PERCENT] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_orelse] = ACTIONS(246),
    [anon_sym_catch] = ACTIONS(246),
    [anon_sym_PLUS_EQ] = ACTIONS(246),
    [anon_sym_DASH_EQ] = ACTIONS(246),
    [anon_sym_STAR_EQ] = ACTIONS(246),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(246),
    [anon_sym_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_AMP_EQ] = ACTIONS(246),
    [anon_sym_PIPE_EQ] = ACTIONS(246),
    [anon_sym_CARET_EQ] = ACTIONS(246),
    [anon_sym_LT_LT_EQ] = ACTIONS(246),
    [anon_sym_GT_GT_EQ] = ACTIONS(246),
  },
  [90] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(86),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT] = ACTIONS(190),
    [anon_sym_DASH_PERCENT] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_STAR_STAR] = ACTIONS(190),
    [anon_sym_STAR_PERCENT] = ACTIONS(190),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_orelse] = ACTIONS(190),
    [anon_sym_catch] = ACTIONS(190),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(252),
    [sym_escape_sequence] = ACTIONS(252),
    [anon_sym_PLUS_EQ] = ACTIONS(190),
    [anon_sym_DASH_EQ] = ACTIONS(190),
    [anon_sym_STAR_EQ] = ACTIONS(190),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [anon_sym_PERCENT_EQ] = ACTIONS(190),
    [anon_sym_AMP_EQ] = ACTIONS(190),
    [anon_sym_PIPE_EQ] = ACTIONS(190),
    [anon_sym_CARET_EQ] = ACTIONS(190),
    [anon_sym_LT_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT_EQ] = ACTIONS(190),
  },
  [91] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_or] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_GT_GT] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_PLUS_PERCENT] = ACTIONS(256),
    [anon_sym_DASH_PERCENT] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_STAR_STAR] = ACTIONS(254),
    [anon_sym_STAR_PERCENT] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_orelse] = ACTIONS(254),
    [anon_sym_catch] = ACTIONS(254),
    [anon_sym_PLUS_EQ] = ACTIONS(254),
    [anon_sym_DASH_EQ] = ACTIONS(254),
    [anon_sym_STAR_EQ] = ACTIONS(254),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(254),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(254),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(254),
    [anon_sym_SLASH_EQ] = ACTIONS(254),
    [anon_sym_PERCENT_EQ] = ACTIONS(254),
    [anon_sym_AMP_EQ] = ACTIONS(254),
    [anon_sym_PIPE_EQ] = ACTIONS(254),
    [anon_sym_CARET_EQ] = ACTIONS(254),
    [anon_sym_LT_LT_EQ] = ACTIONS(254),
    [anon_sym_GT_GT_EQ] = ACTIONS(254),
  },
  [92] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [93] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(260),
    [anon_sym_STAR_PERCENT] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [94] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT] = ACTIONS(262),
    [anon_sym_DASH_PERCENT] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [anon_sym_STAR_PERCENT] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_orelse] = ACTIONS(264),
    [anon_sym_catch] = ACTIONS(264),
    [anon_sym_PLUS_EQ] = ACTIONS(264),
    [anon_sym_DASH_EQ] = ACTIONS(264),
    [anon_sym_STAR_EQ] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_AMP_EQ] = ACTIONS(264),
    [anon_sym_PIPE_EQ] = ACTIONS(264),
    [anon_sym_CARET_EQ] = ACTIONS(264),
    [anon_sym_LT_LT_EQ] = ACTIONS(264),
    [anon_sym_GT_GT_EQ] = ACTIONS(264),
  },
  [95] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(260),
    [anon_sym_STAR_PERCENT] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [96] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT] = ACTIONS(262),
    [anon_sym_DASH_PERCENT] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [anon_sym_STAR_PERCENT] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_orelse] = ACTIONS(264),
    [anon_sym_catch] = ACTIONS(264),
    [anon_sym_PLUS_EQ] = ACTIONS(264),
    [anon_sym_DASH_EQ] = ACTIONS(264),
    [anon_sym_STAR_EQ] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_AMP_EQ] = ACTIONS(264),
    [anon_sym_PIPE_EQ] = ACTIONS(264),
    [anon_sym_CARET_EQ] = ACTIONS(264),
    [anon_sym_LT_LT_EQ] = ACTIONS(264),
    [anon_sym_GT_GT_EQ] = ACTIONS(264),
  },
  [97] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_and] = ACTIONS(266),
    [anon_sym_or] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_PLUS_PERCENT] = ACTIONS(268),
    [anon_sym_DASH_PERCENT] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [anon_sym_STAR_PERCENT] = ACTIONS(268),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_orelse] = ACTIONS(266),
    [anon_sym_catch] = ACTIONS(266),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
  },
  [98] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_and] = ACTIONS(270),
    [anon_sym_or] = ACTIONS(272),
    [anon_sym_AMP] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(270),
    [anon_sym_BANG_EQ] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_LT_EQ] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_GT_GT] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_PLUS_PLUS] = ACTIONS(270),
    [anon_sym_PLUS_PERCENT] = ACTIONS(272),
    [anon_sym_DASH_PERCENT] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(272),
    [anon_sym_STAR_STAR] = ACTIONS(270),
    [anon_sym_STAR_PERCENT] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_orelse] = ACTIONS(270),
    [anon_sym_catch] = ACTIONS(270),
    [anon_sym_PLUS_EQ] = ACTIONS(270),
    [anon_sym_DASH_EQ] = ACTIONS(270),
    [anon_sym_STAR_EQ] = ACTIONS(270),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(270),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(270),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(270),
    [anon_sym_SLASH_EQ] = ACTIONS(270),
    [anon_sym_PERCENT_EQ] = ACTIONS(270),
    [anon_sym_AMP_EQ] = ACTIONS(270),
    [anon_sym_PIPE_EQ] = ACTIONS(270),
    [anon_sym_CARET_EQ] = ACTIONS(270),
    [anon_sym_LT_LT_EQ] = ACTIONS(270),
    [anon_sym_GT_GT_EQ] = ACTIONS(270),
  },
  [99] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(233),
    [anon_sym_catch] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(276),
    [anon_sym_DASH_EQ] = ACTIONS(276),
    [anon_sym_STAR_EQ] = ACTIONS(276),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_SLASH_EQ] = ACTIONS(276),
    [anon_sym_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_AMP_EQ] = ACTIONS(276),
    [anon_sym_PIPE_EQ] = ACTIONS(276),
    [anon_sym_CARET_EQ] = ACTIONS(276),
    [anon_sym_LT_LT_EQ] = ACTIONS(276),
    [anon_sym_GT_GT_EQ] = ACTIONS(276),
  },
  [100] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [101] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_GT_GT] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_PLUS_PLUS] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT] = ACTIONS(278),
    [anon_sym_DASH_PERCENT] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [102] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(282),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_and] = ACTIONS(282),
    [anon_sym_or] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(284),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [anon_sym_BANG_EQ] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(284),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(284),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_GT_GT] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_PLUS_PLUS] = ACTIONS(282),
    [anon_sym_PLUS_PERCENT] = ACTIONS(284),
    [anon_sym_DASH_PERCENT] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(284),
    [anon_sym_SLASH] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
    [anon_sym_STAR_STAR] = ACTIONS(282),
    [anon_sym_STAR_PERCENT] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(282),
    [anon_sym_orelse] = ACTIONS(282),
    [anon_sym_catch] = ACTIONS(282),
    [anon_sym_PLUS_EQ] = ACTIONS(282),
    [anon_sym_DASH_EQ] = ACTIONS(282),
    [anon_sym_STAR_EQ] = ACTIONS(282),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(282),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(282),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(282),
    [anon_sym_SLASH_EQ] = ACTIONS(282),
    [anon_sym_PERCENT_EQ] = ACTIONS(282),
    [anon_sym_AMP_EQ] = ACTIONS(282),
    [anon_sym_PIPE_EQ] = ACTIONS(282),
    [anon_sym_CARET_EQ] = ACTIONS(282),
    [anon_sym_LT_LT_EQ] = ACTIONS(282),
    [anon_sym_GT_GT_EQ] = ACTIONS(282),
  },
  [103] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_and] = ACTIONS(286),
    [anon_sym_or] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(288),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [anon_sym_BANG_EQ] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_GT_GT] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_PLUS_PLUS] = ACTIONS(286),
    [anon_sym_PLUS_PERCENT] = ACTIONS(288),
    [anon_sym_DASH_PERCENT] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_STAR_STAR] = ACTIONS(286),
    [anon_sym_STAR_PERCENT] = ACTIONS(288),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_orelse] = ACTIONS(286),
    [anon_sym_catch] = ACTIONS(286),
    [anon_sym_PLUS_EQ] = ACTIONS(286),
    [anon_sym_DASH_EQ] = ACTIONS(286),
    [anon_sym_STAR_EQ] = ACTIONS(286),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(286),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(286),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [anon_sym_PERCENT_EQ] = ACTIONS(286),
    [anon_sym_AMP_EQ] = ACTIONS(286),
    [anon_sym_PIPE_EQ] = ACTIONS(286),
    [anon_sym_CARET_EQ] = ACTIONS(286),
    [anon_sym_LT_LT_EQ] = ACTIONS(286),
    [anon_sym_GT_GT_EQ] = ACTIONS(286),
  },
  [104] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(233),
    [anon_sym_catch] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [105] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [106] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [107] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [108] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [109] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [110] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [111] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT] = ACTIONS(294),
    [anon_sym_DASH_PERCENT] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym_STAR_PERCENT] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_orelse] = ACTIONS(292),
    [anon_sym_catch] = ACTIONS(292),
    [anon_sym_PLUS_EQ] = ACTIONS(292),
    [anon_sym_DASH_EQ] = ACTIONS(292),
    [anon_sym_STAR_EQ] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(292),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(292),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(292),
    [anon_sym_SLASH_EQ] = ACTIONS(292),
    [anon_sym_PERCENT_EQ] = ACTIONS(292),
    [anon_sym_AMP_EQ] = ACTIONS(292),
    [anon_sym_PIPE_EQ] = ACTIONS(292),
    [anon_sym_CARET_EQ] = ACTIONS(292),
    [anon_sym_LT_LT_EQ] = ACTIONS(292),
    [anon_sym_GT_GT_EQ] = ACTIONS(292),
  },
  [112] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [113] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(296),
    [anon_sym_or] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [anon_sym_BANG_EQ] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(296),
    [anon_sym_PLUS_PERCENT] = ACTIONS(298),
    [anon_sym_DASH_PERCENT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [anon_sym_STAR_PERCENT] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(296),
    [anon_sym_orelse] = ACTIONS(296),
    [anon_sym_catch] = ACTIONS(296),
    [anon_sym_PLUS_EQ] = ACTIONS(296),
    [anon_sym_DASH_EQ] = ACTIONS(296),
    [anon_sym_STAR_EQ] = ACTIONS(296),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(296),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(296),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(296),
    [anon_sym_PERCENT_EQ] = ACTIONS(296),
    [anon_sym_AMP_EQ] = ACTIONS(296),
    [anon_sym_PIPE_EQ] = ACTIONS(296),
    [anon_sym_CARET_EQ] = ACTIONS(296),
    [anon_sym_LT_LT_EQ] = ACTIONS(296),
    [anon_sym_GT_GT_EQ] = ACTIONS(296),
  },
  [114] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_and] = ACTIONS(300),
    [anon_sym_or] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_GT_GT] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_PLUS_PLUS] = ACTIONS(300),
    [anon_sym_PLUS_PERCENT] = ACTIONS(302),
    [anon_sym_DASH_PERCENT] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_STAR_STAR] = ACTIONS(300),
    [anon_sym_STAR_PERCENT] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_orelse] = ACTIONS(300),
    [anon_sym_catch] = ACTIONS(300),
    [anon_sym_PLUS_EQ] = ACTIONS(300),
    [anon_sym_DASH_EQ] = ACTIONS(300),
    [anon_sym_STAR_EQ] = ACTIONS(300),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(300),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(300),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(300),
    [anon_sym_SLASH_EQ] = ACTIONS(300),
    [anon_sym_PERCENT_EQ] = ACTIONS(300),
    [anon_sym_AMP_EQ] = ACTIONS(300),
    [anon_sym_PIPE_EQ] = ACTIONS(300),
    [anon_sym_CARET_EQ] = ACTIONS(300),
    [anon_sym_LT_LT_EQ] = ACTIONS(300),
    [anon_sym_GT_GT_EQ] = ACTIONS(300),
  },
  [115] = {
    [sym_assignment_operator] = STATE(56),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PLUS_PERCENT] = ACTIONS(223),
    [anon_sym_DASH_PERCENT] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_STAR_STAR] = ACTIONS(231),
    [anon_sym_STAR_PERCENT] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_orelse] = ACTIONS(233),
    [anon_sym_catch] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(306),
    [anon_sym_DASH_EQ] = ACTIONS(306),
    [anon_sym_STAR_EQ] = ACTIONS(306),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [anon_sym_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_AMP_EQ] = ACTIONS(306),
    [anon_sym_PIPE_EQ] = ACTIONS(306),
    [anon_sym_CARET_EQ] = ACTIONS(306),
    [anon_sym_LT_LT_EQ] = ACTIONS(306),
    [anon_sym_GT_GT_EQ] = ACTIONS(306),
  },
  [116] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_and] = ACTIONS(308),
    [anon_sym_or] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_GT_GT] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_PLUS_PERCENT] = ACTIONS(310),
    [anon_sym_DASH_PERCENT] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [anon_sym_STAR_PERCENT] = ACTIONS(310),
    [anon_sym_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_orelse] = ACTIONS(308),
    [anon_sym_catch] = ACTIONS(308),
    [anon_sym_PLUS_EQ] = ACTIONS(308),
    [anon_sym_DASH_EQ] = ACTIONS(308),
    [anon_sym_STAR_EQ] = ACTIONS(308),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [anon_sym_PERCENT_EQ] = ACTIONS(308),
    [anon_sym_AMP_EQ] = ACTIONS(308),
    [anon_sym_PIPE_EQ] = ACTIONS(308),
    [anon_sym_CARET_EQ] = ACTIONS(308),
    [anon_sym_LT_LT_EQ] = ACTIONS(308),
    [anon_sym_GT_GT_EQ] = ACTIONS(308),
  },
  [117] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_and] = ACTIONS(312),
    [anon_sym_or] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_LT_LT] = ACTIONS(314),
    [anon_sym_GT_GT] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(312),
    [anon_sym_PLUS_PERCENT] = ACTIONS(314),
    [anon_sym_DASH_PERCENT] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym_STAR_PERCENT] = ACTIONS(314),
    [anon_sym_PIPE_PIPE] = ACTIONS(312),
    [anon_sym_orelse] = ACTIONS(312),
    [anon_sym_catch] = ACTIONS(312),
    [anon_sym_PLUS_EQ] = ACTIONS(312),
    [anon_sym_DASH_EQ] = ACTIONS(312),
    [anon_sym_STAR_EQ] = ACTIONS(312),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(312),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(312),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(312),
    [anon_sym_PERCENT_EQ] = ACTIONS(312),
    [anon_sym_AMP_EQ] = ACTIONS(312),
    [anon_sym_PIPE_EQ] = ACTIONS(312),
    [anon_sym_CARET_EQ] = ACTIONS(312),
    [anon_sym_LT_LT_EQ] = ACTIONS(312),
    [anon_sym_GT_GT_EQ] = ACTIONS(312),
  },
  [118] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(348),
    [anon_sym_catch] = ACTIONS(348),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [119] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(350),
    [anon_sym_or] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_EQ_EQ] = ACTIONS(350),
    [anon_sym_BANG_EQ] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_LT_EQ] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(352),
    [anon_sym_GT_EQ] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_GT_GT] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_PLUS_PERCENT] = ACTIONS(352),
    [anon_sym_DASH_PERCENT] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(352),
    [anon_sym_STAR_STAR] = ACTIONS(350),
    [anon_sym_STAR_PERCENT] = ACTIONS(352),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_orelse] = ACTIONS(350),
    [anon_sym_catch] = ACTIONS(350),
    [anon_sym_PLUS_EQ] = ACTIONS(350),
    [anon_sym_DASH_EQ] = ACTIONS(350),
    [anon_sym_STAR_EQ] = ACTIONS(350),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(350),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(350),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(350),
    [anon_sym_SLASH_EQ] = ACTIONS(350),
    [anon_sym_PERCENT_EQ] = ACTIONS(350),
    [anon_sym_AMP_EQ] = ACTIONS(350),
    [anon_sym_PIPE_EQ] = ACTIONS(350),
    [anon_sym_CARET_EQ] = ACTIONS(350),
    [anon_sym_LT_LT_EQ] = ACTIONS(350),
    [anon_sym_GT_GT_EQ] = ACTIONS(350),
  },
  [120] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_and] = ACTIONS(354),
    [anon_sym_or] = ACTIONS(356),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(356),
    [anon_sym_GT_GT] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(354),
    [anon_sym_PLUS_PERCENT] = ACTIONS(356),
    [anon_sym_DASH_PERCENT] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(356),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [anon_sym_STAR_PERCENT] = ACTIONS(356),
    [anon_sym_PIPE_PIPE] = ACTIONS(354),
    [anon_sym_orelse] = ACTIONS(354),
    [anon_sym_catch] = ACTIONS(354),
    [anon_sym_PLUS_EQ] = ACTIONS(354),
    [anon_sym_DASH_EQ] = ACTIONS(354),
    [anon_sym_STAR_EQ] = ACTIONS(354),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [anon_sym_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_AMP_EQ] = ACTIONS(354),
    [anon_sym_PIPE_EQ] = ACTIONS(354),
    [anon_sym_CARET_EQ] = ACTIONS(354),
    [anon_sym_LT_LT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_EQ] = ACTIONS(354),
  },
  [121] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(246),
    [anon_sym_or] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(246),
    [anon_sym_BANG_EQ] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_PLUS_PERCENT] = ACTIONS(248),
    [anon_sym_DASH_PERCENT] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [anon_sym_STAR_PERCENT] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_orelse] = ACTIONS(246),
    [anon_sym_catch] = ACTIONS(246),
    [anon_sym_PLUS_EQ] = ACTIONS(246),
    [anon_sym_DASH_EQ] = ACTIONS(246),
    [anon_sym_STAR_EQ] = ACTIONS(246),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(246),
    [anon_sym_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_AMP_EQ] = ACTIONS(246),
    [anon_sym_PIPE_EQ] = ACTIONS(246),
    [anon_sym_CARET_EQ] = ACTIONS(246),
    [anon_sym_LT_LT_EQ] = ACTIONS(246),
    [anon_sym_GT_GT_EQ] = ACTIONS(246),
  },
  [122] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_and] = ACTIONS(358),
    [anon_sym_or] = ACTIONS(360),
    [anon_sym_AMP] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_CARET] = ACTIONS(360),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [anon_sym_BANG_EQ] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(360),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(360),
    [anon_sym_GT_GT] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_PLUS_PERCENT] = ACTIONS(360),
    [anon_sym_DASH_PERCENT] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_STAR_STAR] = ACTIONS(358),
    [anon_sym_STAR_PERCENT] = ACTIONS(360),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_orelse] = ACTIONS(358),
    [anon_sym_catch] = ACTIONS(358),
    [anon_sym_PLUS_EQ] = ACTIONS(358),
    [anon_sym_DASH_EQ] = ACTIONS(358),
    [anon_sym_STAR_EQ] = ACTIONS(358),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [anon_sym_PERCENT_EQ] = ACTIONS(358),
    [anon_sym_AMP_EQ] = ACTIONS(358),
    [anon_sym_PIPE_EQ] = ACTIONS(358),
    [anon_sym_CARET_EQ] = ACTIONS(358),
    [anon_sym_LT_LT_EQ] = ACTIONS(358),
    [anon_sym_GT_GT_EQ] = ACTIONS(358),
  },
  [123] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_and] = ACTIONS(362),
    [anon_sym_or] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_EQ_EQ] = ACTIONS(362),
    [anon_sym_BANG_EQ] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_LT_EQ] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_GT_EQ] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_GT_GT] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_PLUS_PERCENT] = ACTIONS(364),
    [anon_sym_DASH_PERCENT] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(364),
    [anon_sym_STAR_STAR] = ACTIONS(362),
    [anon_sym_STAR_PERCENT] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_orelse] = ACTIONS(362),
    [anon_sym_catch] = ACTIONS(362),
    [anon_sym_PLUS_EQ] = ACTIONS(362),
    [anon_sym_DASH_EQ] = ACTIONS(362),
    [anon_sym_STAR_EQ] = ACTIONS(362),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(362),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(362),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(362),
    [anon_sym_SLASH_EQ] = ACTIONS(362),
    [anon_sym_PERCENT_EQ] = ACTIONS(362),
    [anon_sym_AMP_EQ] = ACTIONS(362),
    [anon_sym_PIPE_EQ] = ACTIONS(362),
    [anon_sym_CARET_EQ] = ACTIONS(362),
    [anon_sym_LT_LT_EQ] = ACTIONS(362),
    [anon_sym_GT_GT_EQ] = ACTIONS(362),
  },
  [124] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_and] = ACTIONS(366),
    [anon_sym_or] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(366),
    [anon_sym_BANG_EQ] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_LT_EQ] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_GT_EQ] = ACTIONS(366),
    [anon_sym_LT_LT] = ACTIONS(368),
    [anon_sym_GT_GT] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_PLUS_PERCENT] = ACTIONS(368),
    [anon_sym_DASH_PERCENT] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [anon_sym_STAR_STAR] = ACTIONS(366),
    [anon_sym_STAR_PERCENT] = ACTIONS(368),
    [anon_sym_PIPE_PIPE] = ACTIONS(366),
    [anon_sym_orelse] = ACTIONS(366),
    [anon_sym_catch] = ACTIONS(366),
    [anon_sym_PLUS_EQ] = ACTIONS(366),
    [anon_sym_DASH_EQ] = ACTIONS(366),
    [anon_sym_STAR_EQ] = ACTIONS(366),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(366),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(366),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(366),
    [anon_sym_SLASH_EQ] = ACTIONS(366),
    [anon_sym_PERCENT_EQ] = ACTIONS(366),
    [anon_sym_AMP_EQ] = ACTIONS(366),
    [anon_sym_PIPE_EQ] = ACTIONS(366),
    [anon_sym_CARET_EQ] = ACTIONS(366),
    [anon_sym_LT_LT_EQ] = ACTIONS(366),
    [anon_sym_GT_GT_EQ] = ACTIONS(366),
  },
  [125] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_and] = ACTIONS(370),
    [anon_sym_or] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(370),
    [anon_sym_BANG_EQ] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_LT_EQ] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_GT_EQ] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(372),
    [anon_sym_GT_GT] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_PLUS_PLUS] = ACTIONS(370),
    [anon_sym_PLUS_PERCENT] = ACTIONS(372),
    [anon_sym_DASH_PERCENT] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_STAR_STAR] = ACTIONS(370),
    [anon_sym_STAR_PERCENT] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(370),
    [anon_sym_orelse] = ACTIONS(370),
    [anon_sym_catch] = ACTIONS(370),
    [anon_sym_PLUS_EQ] = ACTIONS(370),
    [anon_sym_DASH_EQ] = ACTIONS(370),
    [anon_sym_STAR_EQ] = ACTIONS(370),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(370),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(370),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(370),
    [anon_sym_SLASH_EQ] = ACTIONS(370),
    [anon_sym_PERCENT_EQ] = ACTIONS(370),
    [anon_sym_AMP_EQ] = ACTIONS(370),
    [anon_sym_PIPE_EQ] = ACTIONS(370),
    [anon_sym_CARET_EQ] = ACTIONS(370),
    [anon_sym_LT_LT_EQ] = ACTIONS(370),
    [anon_sym_GT_GT_EQ] = ACTIONS(370),
  },
  [126] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(348),
    [anon_sym_catch] = ACTIONS(348),
    [anon_sym_PLUS_EQ] = ACTIONS(276),
    [anon_sym_DASH_EQ] = ACTIONS(276),
    [anon_sym_STAR_EQ] = ACTIONS(276),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_SLASH_EQ] = ACTIONS(276),
    [anon_sym_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_AMP_EQ] = ACTIONS(276),
    [anon_sym_PIPE_EQ] = ACTIONS(276),
    [anon_sym_CARET_EQ] = ACTIONS(276),
    [anon_sym_LT_LT_EQ] = ACTIONS(276),
    [anon_sym_GT_GT_EQ] = ACTIONS(276),
  },
  [127] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(374),
    [anon_sym_or] = ACTIONS(376),
    [anon_sym_AMP] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_EQ_EQ] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(374),
    [anon_sym_LT] = ACTIONS(376),
    [anon_sym_LT_EQ] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(376),
    [anon_sym_GT_EQ] = ACTIONS(374),
    [anon_sym_LT_LT] = ACTIONS(376),
    [anon_sym_GT_GT] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_PLUS_PLUS] = ACTIONS(374),
    [anon_sym_PLUS_PERCENT] = ACTIONS(376),
    [anon_sym_DASH_PERCENT] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(376),
    [anon_sym_STAR_STAR] = ACTIONS(374),
    [anon_sym_STAR_PERCENT] = ACTIONS(376),
    [anon_sym_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_orelse] = ACTIONS(374),
    [anon_sym_catch] = ACTIONS(374),
    [anon_sym_PLUS_EQ] = ACTIONS(374),
    [anon_sym_DASH_EQ] = ACTIONS(374),
    [anon_sym_STAR_EQ] = ACTIONS(374),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_SLASH_EQ] = ACTIONS(374),
    [anon_sym_PERCENT_EQ] = ACTIONS(374),
    [anon_sym_AMP_EQ] = ACTIONS(374),
    [anon_sym_PIPE_EQ] = ACTIONS(374),
    [anon_sym_CARET_EQ] = ACTIONS(374),
    [anon_sym_LT_LT_EQ] = ACTIONS(374),
    [anon_sym_GT_GT_EQ] = ACTIONS(374),
  },
  [128] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [129] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_and] = ACTIONS(378),
    [anon_sym_or] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(380),
    [anon_sym_CARET] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(378),
    [anon_sym_BANG_EQ] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(380),
    [anon_sym_GT_GT] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_PLUS_PLUS] = ACTIONS(378),
    [anon_sym_PLUS_PERCENT] = ACTIONS(380),
    [anon_sym_DASH_PERCENT] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_STAR_STAR] = ACTIONS(378),
    [anon_sym_STAR_PERCENT] = ACTIONS(380),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_orelse] = ACTIONS(378),
    [anon_sym_catch] = ACTIONS(378),
    [anon_sym_PLUS_EQ] = ACTIONS(378),
    [anon_sym_DASH_EQ] = ACTIONS(378),
    [anon_sym_STAR_EQ] = ACTIONS(378),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(378),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(378),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(378),
    [anon_sym_SLASH_EQ] = ACTIONS(378),
    [anon_sym_PERCENT_EQ] = ACTIONS(378),
    [anon_sym_AMP_EQ] = ACTIONS(378),
    [anon_sym_PIPE_EQ] = ACTIONS(378),
    [anon_sym_CARET_EQ] = ACTIONS(378),
    [anon_sym_LT_LT_EQ] = ACTIONS(378),
    [anon_sym_GT_GT_EQ] = ACTIONS(378),
  },
  [130] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_GT_GT] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_PLUS_PLUS] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT] = ACTIONS(278),
    [anon_sym_DASH_PERCENT] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [131] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [132] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(348),
    [anon_sym_catch] = ACTIONS(348),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [133] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(382),
    [anon_sym_or] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_EQ_EQ] = ACTIONS(382),
    [anon_sym_BANG_EQ] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [anon_sym_LT_LT] = ACTIONS(384),
    [anon_sym_GT_GT] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_PLUS_PLUS] = ACTIONS(382),
    [anon_sym_PLUS_PERCENT] = ACTIONS(384),
    [anon_sym_DASH_PERCENT] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_STAR_STAR] = ACTIONS(382),
    [anon_sym_STAR_PERCENT] = ACTIONS(384),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_orelse] = ACTIONS(382),
    [anon_sym_catch] = ACTIONS(382),
    [anon_sym_PLUS_EQ] = ACTIONS(382),
    [anon_sym_DASH_EQ] = ACTIONS(382),
    [anon_sym_STAR_EQ] = ACTIONS(382),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [anon_sym_PERCENT_EQ] = ACTIONS(382),
    [anon_sym_AMP_EQ] = ACTIONS(382),
    [anon_sym_PIPE_EQ] = ACTIONS(382),
    [anon_sym_CARET_EQ] = ACTIONS(382),
    [anon_sym_LT_LT_EQ] = ACTIONS(382),
    [anon_sym_GT_GT_EQ] = ACTIONS(382),
  },
  [134] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [135] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [136] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [137] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [138] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(348),
    [anon_sym_catch] = ACTIONS(348),
    [anon_sym_PLUS_EQ] = ACTIONS(306),
    [anon_sym_DASH_EQ] = ACTIONS(306),
    [anon_sym_STAR_EQ] = ACTIONS(306),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [anon_sym_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_AMP_EQ] = ACTIONS(306),
    [anon_sym_PIPE_EQ] = ACTIONS(306),
    [anon_sym_CARET_EQ] = ACTIONS(306),
    [anon_sym_LT_LT_EQ] = ACTIONS(306),
    [anon_sym_GT_GT_EQ] = ACTIONS(306),
  },
  [139] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [140] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(322),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_BANG_EQ] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [141] = {
    [sym_assignment_operator] = STATE(28),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_GT_GT] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_PLUS_PERCENT] = ACTIONS(338),
    [anon_sym_DASH_PERCENT] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_STAR_STAR] = ACTIONS(346),
    [anon_sym_STAR_PERCENT] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [142] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [143] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_GT_GT] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_PLUS_PLUS] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT] = ACTIONS(278),
    [anon_sym_DASH_PERCENT] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [144] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(260),
    [anon_sym_STAR_PERCENT] = ACTIONS(258),
    [anon_sym_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [145] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [146] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [147] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [148] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [149] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [150] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(306),
    [anon_sym_DASH_EQ] = ACTIONS(306),
    [anon_sym_STAR_EQ] = ACTIONS(306),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(306),
    [anon_sym_PERCENT_EQ] = ACTIONS(306),
    [anon_sym_AMP_EQ] = ACTIONS(306),
    [anon_sym_PIPE_EQ] = ACTIONS(306),
    [anon_sym_CARET_EQ] = ACTIONS(306),
    [anon_sym_LT_LT_EQ] = ACTIONS(306),
    [anon_sym_GT_GT_EQ] = ACTIONS(306),
  },
  [151] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [152] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(276),
    [anon_sym_DASH_EQ] = ACTIONS(276),
    [anon_sym_STAR_EQ] = ACTIONS(276),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_SLASH_EQ] = ACTIONS(276),
    [anon_sym_PERCENT_EQ] = ACTIONS(276),
    [anon_sym_AMP_EQ] = ACTIONS(276),
    [anon_sym_PIPE_EQ] = ACTIONS(276),
    [anon_sym_CARET_EQ] = ACTIONS(276),
    [anon_sym_LT_LT_EQ] = ACTIONS(276),
    [anon_sym_GT_GT_EQ] = ACTIONS(276),
  },
  [153] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_BANG_EQ] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_GT_EQ] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(280),
    [anon_sym_catch] = ACTIONS(280),
    [anon_sym_PLUS_EQ] = ACTIONS(280),
    [anon_sym_DASH_EQ] = ACTIONS(280),
    [anon_sym_STAR_EQ] = ACTIONS(280),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_SLASH_EQ] = ACTIONS(280),
    [anon_sym_PERCENT_EQ] = ACTIONS(280),
    [anon_sym_AMP_EQ] = ACTIONS(280),
    [anon_sym_PIPE_EQ] = ACTIONS(280),
    [anon_sym_CARET_EQ] = ACTIONS(280),
    [anon_sym_LT_LT_EQ] = ACTIONS(280),
    [anon_sym_GT_GT_EQ] = ACTIONS(280),
  },
  [154] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [155] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [156] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [157] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [158] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [159] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT] = ACTIONS(258),
    [anon_sym_DASH_PERCENT] = ACTIONS(258),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [160] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [161] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [162] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [163] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_BANG_EQ] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(260),
    [anon_sym_catch] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PERCENT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
  },
  [164] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT] = ACTIONS(262),
    [anon_sym_DASH_PERCENT] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [anon_sym_STAR_PERCENT] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_orelse] = ACTIONS(264),
    [anon_sym_catch] = ACTIONS(264),
    [anon_sym_PLUS_EQ] = ACTIONS(264),
    [anon_sym_DASH_EQ] = ACTIONS(264),
    [anon_sym_STAR_EQ] = ACTIONS(264),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(264),
    [anon_sym_AMP_EQ] = ACTIONS(264),
    [anon_sym_PIPE_EQ] = ACTIONS(264),
    [anon_sym_CARET_EQ] = ACTIONS(264),
    [anon_sym_LT_LT_EQ] = ACTIONS(264),
    [anon_sym_GT_GT_EQ] = ACTIONS(264),
  },
  [165] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_and] = ACTIONS(390),
    [anon_sym_or] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_BANG_EQ] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_LT_EQ] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_EQ] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(404),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(406),
    [anon_sym_DASH_PERCENT] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(235),
    [anon_sym_DASH_EQ] = ACTIONS(235),
    [anon_sym_STAR_EQ] = ACTIONS(235),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_SLASH_EQ] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(235),
    [anon_sym_AMP_EQ] = ACTIONS(235),
    [anon_sym_PIPE_EQ] = ACTIONS(235),
    [anon_sym_CARET_EQ] = ACTIONS(235),
    [anon_sym_LT_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_GT_EQ] = ACTIONS(235),
  },
  [166] = {
    [sym__type] = STATE(184),
    [sym_primitive_type] = STATE(184),
    [sym_optional_type] = STATE(184),
    [aux_sym_array_expression_repeat1] = STATE(172),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_identifier] = ACTIONS(436),
  },
  [167] = {
    [sym__type] = STATE(199),
    [sym_primitive_type] = STATE(199),
    [sym_optional_type] = STATE(199),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [sym_identifier] = ACTIONS(438),
  },
  [168] = {
    [sym__type] = STATE(198),
    [sym_primitive_type] = STATE(198),
    [sym_optional_type] = STATE(198),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [sym_identifier] = ACTIONS(440),
  },
  [169] = {
    [sym__type] = STATE(195),
    [sym_primitive_type] = STATE(195),
    [sym_optional_type] = STATE(195),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [sym_identifier] = ACTIONS(442),
  },
  [170] = {
    [sym__type] = STATE(190),
    [sym_primitive_type] = STATE(190),
    [sym_optional_type] = STATE(190),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [sym_identifier] = ACTIONS(444),
  },
  [171] = {
    [sym__type] = STATE(197),
    [sym_primitive_type] = STATE(197),
    [sym_optional_type] = STATE(197),
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
    [anon_sym_QMARK] = ACTIONS(434),
    [sym_identifier] = ACTIONS(446),
  },
  [172] = {
    [aux_sym_array_expression_repeat1] = STATE(172),
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
    [anon_sym_LBRACK] = ACTIONS(452),
    [sym_identifier] = ACTIONS(448),
  },
  [173] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(455),
    [anon_sym_u8] = ACTIONS(455),
    [anon_sym_i16] = ACTIONS(455),
    [anon_sym_u16] = ACTIONS(455),
    [anon_sym_i32] = ACTIONS(455),
    [anon_sym_u32] = ACTIONS(455),
    [anon_sym_i64] = ACTIONS(455),
    [anon_sym_u64] = ACTIONS(455),
    [anon_sym_i128] = ACTIONS(455),
    [anon_sym_u128] = ACTIONS(455),
    [anon_sym_isize] = ACTIONS(455),
    [anon_sym_usize] = ACTIONS(455),
    [anon_sym_c_short] = ACTIONS(455),
    [anon_sym_c_ushort] = ACTIONS(455),
    [anon_sym_c_int] = ACTIONS(455),
    [anon_sym_c_uint] = ACTIONS(455),
    [anon_sym_c_long] = ACTIONS(455),
    [anon_sym_c_ulong] = ACTIONS(455),
    [anon_sym_c_longlong] = ACTIONS(455),
    [anon_sym_c_ulonglong] = ACTIONS(455),
    [anon_sym_c_longdouble] = ACTIONS(455),
    [anon_sym_f16] = ACTIONS(455),
    [anon_sym_f32] = ACTIONS(455),
    [anon_sym_f64] = ACTIONS(455),
    [anon_sym_f128] = ACTIONS(455),
    [anon_sym_comptime_int] = ACTIONS(455),
    [anon_sym_comptime_float] = ACTIONS(455),
    [anon_sym_bool] = ACTIONS(455),
    [anon_sym_void] = ACTIONS(455),
    [anon_sym_noreturn] = ACTIONS(455),
    [anon_sym_type] = ACTIONS(455),
    [anon_sym_anyerror] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [sym_identifier] = ACTIONS(455),
  },
  [174] = {
    [sym_block] = STATE(123),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(459),
    [anon_sym_var] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [175] = {
    [sym_block] = STATE(123),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(461),
    [anon_sym_var] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [176] = {
    [aux_sym_string_literal_repeat1] = STATE(177),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(463),
    [anon_sym_DQUOTE2] = ACTIONS(465),
    [sym_escape_sequence] = ACTIONS(467),
  },
  [177] = {
    [aux_sym_string_literal_repeat1] = STATE(178),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(469),
    [anon_sym_DQUOTE2] = ACTIONS(471),
    [sym_escape_sequence] = ACTIONS(473),
  },
  [178] = {
    [aux_sym_string_literal_repeat1] = STATE(178),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(475),
    [anon_sym_DQUOTE2] = ACTIONS(478),
    [sym_escape_sequence] = ACTIONS(480),
  },
  [179] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(180),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(483),
  },
  [180] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(180),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(485),
  },
  [181] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(180),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(488),
  },
  [182] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [aux_sym_char_literal_token1] = ACTIONS(492),
    [sym_escape_sequence] = ACTIONS(494),
  },
  [183] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(496),
    [anon_sym_EQ] = ACTIONS(498),
  },
  [184] = {
    [sym_array_values] = STATE(98),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(500),
  },
  [185] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(461),
    [anon_sym_var] = ACTIONS(461),
  },
  [186] = {
    [sym_array_values] = STATE(114),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(500),
  },
  [187] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
  },
  [188] = {
    [sym_block] = STATE(123),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [189] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(506),
    [anon_sym_EQ] = ACTIONS(508),
  },
  [190] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(510),
  },
  [191] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(512),
    [sym_identifier] = ACTIONS(512),
  },
  [192] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(514),
  },
  [193] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(516),
    [anon_sym_EQ] = ACTIONS(518),
  },
  [194] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(459),
    [anon_sym_var] = ACTIONS(459),
  },
  [195] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(520),
  },
  [196] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(522),
  },
  [197] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(524),
  },
  [198] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(526),
  },
  [199] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(528),
  },
  [200] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(530),
  },
  [201] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(532),
  },
  [202] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(534),
  },
  [203] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(536),
  },
  [204] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(538),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(540),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(67),
  [11] = {.count = 1, .reusable = false}, SHIFT(194),
  [13] = {.count = 1, .reusable = false}, SHIFT(174),
  [15] = {.count = 1, .reusable = false}, SHIFT(196),
  [17] = {.count = 1, .reusable = false}, SHIFT(192),
  [19] = {.count = 1, .reusable = true}, SHIFT(76),
  [21] = {.count = 1, .reusable = true}, SHIFT(3),
  [23] = {.count = 1, .reusable = true}, SHIFT(191),
  [25] = {.count = 1, .reusable = true}, SHIFT(7),
  [27] = {.count = 1, .reusable = true}, SHIFT(77),
  [29] = {.count = 1, .reusable = false}, SHIFT(77),
  [31] = {.count = 1, .reusable = false}, SHIFT(121),
  [33] = {.count = 1, .reusable = true}, SHIFT(182),
  [35] = {.count = 1, .reusable = true}, SHIFT(176),
  [37] = {.count = 1, .reusable = true}, SHIFT(90),
  [39] = {.count = 1, .reusable = false}, SHIFT(119),
  [41] = {.count = 1, .reusable = false}, SHIFT(89),
  [43] = {.count = 1, .reusable = true}, SHIFT(74),
  [45] = {.count = 1, .reusable = false}, SHIFT(185),
  [47] = {.count = 1, .reusable = false}, SHIFT(175),
  [49] = {.count = 1, .reusable = false}, SHIFT(200),
  [51] = {.count = 1, .reusable = true}, SHIFT(117),
  [53] = {.count = 1, .reusable = true}, SHIFT(81),
  [55] = {.count = 1, .reusable = true}, SHIFT(133),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [91] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [124] = {.count = 1, .reusable = false}, SHIFT(188),
  [126] = {.count = 1, .reusable = true}, SHIFT(129),
  [128] = {.count = 1, .reusable = true}, SHIFT(83),
  [130] = {.count = 1, .reusable = true}, SHIFT(103),
  [132] = {.count = 1, .reusable = true}, SHIFT(111),
  [134] = {.count = 1, .reusable = true}, SHIFT(113),
  [136] = {.count = 1, .reusable = true}, SHIFT(97),
  [138] = {.count = 1, .reusable = true}, SHIFT(116),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 8, .production_id = 15),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 8, .production_id = 15),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 6, .production_id = 13),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 6, .production_id = 13),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 5, .production_id = 11),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 5, .production_id = 11),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 7, .production_id = 14),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 7, .production_id = 14),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [166] = {.count = 2, .reusable = false}, REDUCE(sym_unary_operator, 1), SHIFT(192),
  [169] = {.count = 2, .reusable = true}, REDUCE(sym_unary_operator, 1), SHIFT(170),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [174] = {.count = 2, .reusable = false}, REDUCE(sym_unary_operator, 1), SHIFT(190),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_operator, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_operator, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(79),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [188] = {.count = 1, .reusable = false}, SHIFT(79),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [192] = {.count = 1, .reusable = false}, SHIFT(80),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(82),
  [197] = {.count = 1, .reusable = false}, SHIFT(84),
  [199] = {.count = 1, .reusable = false}, SHIFT(82),
  [201] = {.count = 1, .reusable = false}, SHIFT(25),
  [203] = {.count = 1, .reusable = true}, SHIFT(120),
  [205] = {.count = 1, .reusable = true}, SHIFT(8),
  [207] = {.count = 1, .reusable = true}, SHIFT(24),
  [209] = {.count = 1, .reusable = false}, SHIFT(23),
  [211] = {.count = 1, .reusable = false}, SHIFT(22),
  [213] = {.count = 1, .reusable = false}, SHIFT(21),
  [215] = {.count = 1, .reusable = false}, SHIFT(20),
  [217] = {.count = 1, .reusable = true}, SHIFT(19),
  [219] = {.count = 1, .reusable = false}, SHIFT(19),
  [221] = {.count = 1, .reusable = false}, SHIFT(18),
  [223] = {.count = 1, .reusable = false}, SHIFT(17),
  [225] = {.count = 1, .reusable = false}, SHIFT(16),
  [227] = {.count = 1, .reusable = true}, SHIFT(17),
  [229] = {.count = 1, .reusable = false}, SHIFT(15),
  [231] = {.count = 1, .reusable = true}, SHIFT(15),
  [233] = {.count = 1, .reusable = true}, SHIFT(38),
  [235] = {.count = 1, .reusable = true}, SHIFT(78),
  [237] = {.count = 1, .reusable = false}, SHIFT(88),
  [239] = {.count = 1, .reusable = true}, SHIFT(91),
  [241] = {.count = 1, .reusable = true}, SHIFT(10),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(88),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym__type, 1),
  [252] = {.count = 1, .reusable = false}, SHIFT(86),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 3),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 3),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 2),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 2),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3, .production_id = 9),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3, .production_id = 9),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 7),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 7),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 10),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 10),
  [290] = {.count = 1, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 12),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 12),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 4),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 4),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2, .production_id = 1),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2, .production_id = 1),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 5),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 5),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [316] = {.count = 1, .reusable = true}, SHIFT(75),
  [318] = {.count = 1, .reusable = false}, SHIFT(39),
  [320] = {.count = 1, .reusable = true}, SHIFT(102),
  [322] = {.count = 1, .reusable = true}, SHIFT(14),
  [324] = {.count = 1, .reusable = false}, SHIFT(37),
  [326] = {.count = 1, .reusable = false}, SHIFT(36),
  [328] = {.count = 1, .reusable = false}, SHIFT(35),
  [330] = {.count = 1, .reusable = false}, SHIFT(34),
  [332] = {.count = 1, .reusable = true}, SHIFT(33),
  [334] = {.count = 1, .reusable = false}, SHIFT(33),
  [336] = {.count = 1, .reusable = false}, SHIFT(13),
  [338] = {.count = 1, .reusable = false}, SHIFT(32),
  [340] = {.count = 1, .reusable = false}, SHIFT(31),
  [342] = {.count = 1, .reusable = true}, SHIFT(32),
  [344] = {.count = 1, .reusable = false}, SHIFT(30),
  [346] = {.count = 1, .reusable = true}, SHIFT(30),
  [348] = {.count = 1, .reusable = true}, SHIFT(29),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 5),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 5),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_comptime_block, 2),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_comptime_block, 2),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 2),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [386] = {.count = 1, .reusable = true}, SHIFT(73),
  [388] = {.count = 1, .reusable = false}, SHIFT(42),
  [390] = {.count = 1, .reusable = true}, SHIFT(43),
  [392] = {.count = 1, .reusable = false}, SHIFT(44),
  [394] = {.count = 1, .reusable = false}, SHIFT(45),
  [396] = {.count = 1, .reusable = false}, SHIFT(46),
  [398] = {.count = 1, .reusable = false}, SHIFT(47),
  [400] = {.count = 1, .reusable = true}, SHIFT(48),
  [402] = {.count = 1, .reusable = false}, SHIFT(48),
  [404] = {.count = 1, .reusable = false}, SHIFT(49),
  [406] = {.count = 1, .reusable = false}, SHIFT(50),
  [408] = {.count = 1, .reusable = false}, SHIFT(51),
  [410] = {.count = 1, .reusable = true}, SHIFT(50),
  [412] = {.count = 1, .reusable = false}, SHIFT(52),
  [414] = {.count = 1, .reusable = true}, SHIFT(52),
  [416] = {.count = 1, .reusable = true}, SHIFT(53),
  [418] = {.count = 1, .reusable = true}, SHIFT(64),
  [420] = {.count = 1, .reusable = true}, SHIFT(70),
  [422] = {.count = 1, .reusable = true}, SHIFT(71),
  [424] = {.count = 1, .reusable = true}, SHIFT(72),
  [426] = {.count = 1, .reusable = true}, SHIFT(68),
  [428] = {.count = 1, .reusable = true}, SHIFT(65),
  [430] = {.count = 1, .reusable = true}, SHIFT(66),
  [432] = {.count = 1, .reusable = true}, SHIFT(69),
  [434] = {.count = 1, .reusable = true}, SHIFT(170),
  [436] = {.count = 1, .reusable = false}, SHIFT(184),
  [438] = {.count = 1, .reusable = false}, SHIFT(199),
  [440] = {.count = 1, .reusable = false}, SHIFT(198),
  [442] = {.count = 1, .reusable = false}, SHIFT(195),
  [444] = {.count = 1, .reusable = false}, SHIFT(190),
  [446] = {.count = 1, .reusable = false}, SHIFT(197),
  [448] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 3),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 3),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 3), SHIFT_REPEAT(191),
  [455] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 4),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 4),
  [459] = {.count = 1, .reusable = true}, SHIFT(204),
  [461] = {.count = 1, .reusable = true}, SHIFT(201),
  [463] = {.count = 1, .reusable = false}, SHIFT(177),
  [465] = {.count = 1, .reusable = true}, SHIFT(125),
  [467] = {.count = 1, .reusable = true}, SHIFT(177),
  [469] = {.count = 1, .reusable = false}, SHIFT(178),
  [471] = {.count = 1, .reusable = true}, SHIFT(124),
  [473] = {.count = 1, .reusable = true}, SHIFT(178),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(178),
  [478] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(178),
  [483] = {.count = 1, .reusable = true}, SHIFT(12),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2), SHIFT_REPEAT(57),
  [488] = {.count = 1, .reusable = true}, SHIFT(9),
  [490] = {.count = 1, .reusable = false}, SHIFT(127),
  [492] = {.count = 1, .reusable = false}, SHIFT(203),
  [494] = {.count = 1, .reusable = true}, SHIFT(203),
  [496] = {.count = 1, .reusable = true}, SHIFT(168),
  [498] = {.count = 1, .reusable = true}, SHIFT(59),
  [500] = {.count = 1, .reusable = true}, SHIFT(11),
  [502] = {.count = 1, .reusable = true}, SHIFT(169),
  [504] = {.count = 1, .reusable = true}, SHIFT(54),
  [506] = {.count = 1, .reusable = true}, SHIFT(167),
  [508] = {.count = 1, .reusable = true}, SHIFT(60),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_optional_type, 2),
  [512] = {.count = 1, .reusable = true}, SHIFT(202),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [516] = {.count = 1, .reusable = true}, SHIFT(171),
  [518] = {.count = 1, .reusable = true}, SHIFT(63),
  [520] = {.count = 1, .reusable = true}, SHIFT(58),
  [522] = {.count = 1, .reusable = true}, SHIFT(187),
  [524] = {.count = 1, .reusable = true}, SHIFT(41),
  [526] = {.count = 1, .reusable = true}, SHIFT(61),
  [528] = {.count = 1, .reusable = true}, SHIFT(62),
  [530] = {.count = 1, .reusable = true}, SHIFT(183),
  [532] = {.count = 1, .reusable = true}, SHIFT(189),
  [534] = {.count = 1, .reusable = true}, SHIFT(173),
  [536] = {.count = 1, .reusable = true}, SHIFT(122),
  [538] = {.count = 1, .reusable = true}, SHIFT(193),
  [540] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
