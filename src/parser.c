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
#define STATE_COUNT 142
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 1
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
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
  anon_sym_and = 45,
  anon_sym_or = 46,
  anon_sym_AMP = 47,
  anon_sym_PIPE = 48,
  anon_sym_CARET = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_LT = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_GT = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_LT_LT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_PLUS = 58,
  anon_sym_DASH = 59,
  anon_sym_PLUS_PLUS = 60,
  anon_sym_PLUS_PERCENT = 61,
  anon_sym_DASH_PERCENT = 62,
  anon_sym_STAR = 63,
  anon_sym_SLASH = 64,
  anon_sym_PERCENT = 65,
  anon_sym_STAR_STAR = 66,
  anon_sym_STAR_PERCENT = 67,
  anon_sym_PIPE_PIPE = 68,
  anon_sym_orelse = 69,
  anon_sym_catch = 70,
  sym_integer_literal = 71,
  sym_float_literal = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_char_literal_token1 = 74,
  anon_sym_DQUOTE = 75,
  anon_sym_c_DQUOTE = 76,
  aux_sym_string_literal_token1 = 77,
  anon_sym_DQUOTE2 = 78,
  anon_sym_BSLASH_BSLASH = 79,
  anon_sym_c_BSLASH_BSLASH = 80,
  aux_sym_multiline_string_literal_token1 = 81,
  sym_escape_sequence = 82,
  anon_sym_true = 83,
  anon_sym_false = 84,
  sym_null_literal = 85,
  sym_undefined_literal = 86,
  anon_sym_PLUS_EQ = 87,
  anon_sym_DASH_EQ = 88,
  anon_sym_STAR_EQ = 89,
  anon_sym_PLUS_PERCENT_EQ = 90,
  anon_sym_DASH_PERCENT_EQ = 91,
  anon_sym_STAR_PERCENT_EQ = 92,
  anon_sym_SLASH_EQ = 93,
  anon_sym_PERCENT_EQ = 94,
  anon_sym_AMP_EQ = 95,
  anon_sym_PIPE_EQ = 96,
  anon_sym_CARET_EQ = 97,
  anon_sym_LT_LT_EQ = 98,
  anon_sym_GT_GT_EQ = 99,
  anon_sym_TILDE = 100,
  anon_sym_BANG = 101,
  sym_identifier = 102,
  sym_source_file = 103,
  sym__statement = 104,
  sym__expression_statement = 105,
  sym__declaration_statement = 106,
  sym__expression = 107,
  sym_empty_statement = 108,
  sym_assignment_statement = 109,
  sym__type = 110,
  sym_primitive_type = 111,
  sym_optional_type = 112,
  sym_comptime_block = 113,
  sym_block = 114,
  sym_assignment_expression = 115,
  sym_compound_assignment_expr = 116,
  sym_unary_expression = 117,
  sym_binary_expression = 118,
  sym__literals = 119,
  sym_char_literal = 120,
  sym_string_literal = 121,
  sym_multiline_string_literal = 122,
  sym_boolean_literal = 123,
  sym_assignment_operator = 124,
  sym_unary_operator = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym_string_literal_repeat1 = 127,
  aux_sym_multiline_string_literal_repeat1 = 128,
  alias_sym_binary_operator = 129,
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
  field_type = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_expression, 3},
    {field_name, 1},
  [9] =
    {field_expression, 4},
    {field_name, 2},
  [11] =
    {field_expression, 5},
    {field_name, 1},
    {field_type, 3},
  [14] =
    {field_expression, 6},
    {field_name, 2},
    {field_type, 4},
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = alias_sym_binary_operator,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(390);
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '&') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(272);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '{') ADVANCE(242);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(243);
      if (lookahead == '~') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(389);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '&') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == '{') ADVANCE(242);
      if (lookahead == '~') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '&') ADVANCE(250);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(272);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'b') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(177);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '6') ADVANCE(219);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(187);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '6') ADVANCE(181);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '6') ADVANCE(183);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(223);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(189);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(191);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(195);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(329);
      END_STATE();
    case 31:
      if (lookahead == '\\') ADVANCE(329);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(330);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'z') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'z') ADVANCE(53);
      END_STATE();
    case 143:
      if (lookahead == '{') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 144:
      if (lookahead == '}') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 146:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(390);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '&') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '+') ADVANCE(272);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == '{') ADVANCE(242);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(243);
      if (lookahead == '~') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(389);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '&') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == 'v') ADVANCE(411);
      if (lookahead == '{') ADVANCE(242);
      if (lookahead == '}') ADVANCE(243);
      if (lookahead == '~') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(159);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(163);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_c_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_c_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_c_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'l') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_anyerror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(380);
      if (lookahead == '|') ADVANCE(294);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(381);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(269);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(386);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(279);
      if (lookahead == '+') ADVANCE(277);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(280);
      if (lookahead == '+') ADVANCE(278);
      if (lookahead == '=') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(368);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(370);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(292);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '=') ADVANCE(366);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '=') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '=') ADVANCE(374);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '=') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(376);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(372);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_orelse);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == 'X') ADVANCE(150);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_c_DQUOTE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_c_BSLASH_BSLASH);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == 'x') ADVANCE(350);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ';') ADVANCE(165);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_undefined_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(396);
      if (lookahead == '3') ADVANCE(397);
      if (lookahead == '6') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(400);
      if (lookahead == '3') ADVANCE(398);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == 's') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(401);
      if (lookahead == '3') ADVANCE(399);
      if (lookahead == '6') ADVANCE(404);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == 's') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(405);
      if (lookahead == '6') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(406);
      if (lookahead == '6') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(407);
      if (lookahead == '6') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 's') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(522);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 156},
  [8] = {.lex_state = 156},
  [9] = {.lex_state = 156},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 156},
  [12] = {.lex_state = 156},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 156},
  [104] = {.lex_state = 156},
  [105] = {.lex_state = 156},
  [106] = {.lex_state = 156},
  [107] = {.lex_state = 156},
  [108] = {.lex_state = 156},
  [109] = {.lex_state = 156},
  [110] = {.lex_state = 156},
  [111] = {.lex_state = 156},
  [112] = {.lex_state = 156},
  [113] = {.lex_state = 156},
  [114] = {.lex_state = 156},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 13},
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
    [sym_source_file] = STATE(139),
    [sym__statement] = STATE(12),
    [sym__expression_statement] = STATE(12),
    [sym__declaration_statement] = STATE(12),
    [sym__expression] = STATE(33),
    [sym_empty_statement] = STATE(12),
    [sym_assignment_statement] = STATE(12),
    [sym_comptime_block] = STATE(33),
    [sym_block] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_compound_assignment_expr] = STATE(33),
    [sym_unary_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym__literals] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [sym_multiline_string_literal] = STATE(33),
    [sym_boolean_literal] = STATE(33),
    [sym_unary_operator] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(23),
    [sym_undefined_literal] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(23),
  },
  [2] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(3),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(33),
    [anon_sym_PLUS_PERCENT] = ACTIONS(33),
    [anon_sym_DASH_PERCENT] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_STAR_STAR] = ACTIONS(33),
    [anon_sym_STAR_PERCENT] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_orelse] = ACTIONS(33),
    [anon_sym_catch] = ACTIONS(33),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(35),
    [sym_escape_sequence] = ACTIONS(35),
    [anon_sym_PLUS_EQ] = ACTIONS(33),
    [anon_sym_DASH_EQ] = ACTIONS(33),
    [anon_sym_STAR_EQ] = ACTIONS(33),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_SLASH_EQ] = ACTIONS(33),
    [anon_sym_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_AMP_EQ] = ACTIONS(33),
    [anon_sym_PIPE_EQ] = ACTIONS(33),
    [anon_sym_CARET_EQ] = ACTIONS(33),
    [anon_sym_LT_LT_EQ] = ACTIONS(33),
    [anon_sym_GT_GT_EQ] = ACTIONS(33),
  },
  [3] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(4),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_PLUS_PERCENT] = ACTIONS(37),
    [anon_sym_DASH_PERCENT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_STAR_PERCENT] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_orelse] = ACTIONS(37),
    [anon_sym_catch] = ACTIONS(37),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(39),
    [sym_escape_sequence] = ACTIONS(39),
    [anon_sym_PLUS_EQ] = ACTIONS(37),
    [anon_sym_DASH_EQ] = ACTIONS(37),
    [anon_sym_STAR_EQ] = ACTIONS(37),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_SLASH_EQ] = ACTIONS(37),
    [anon_sym_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_AMP_EQ] = ACTIONS(37),
    [anon_sym_PIPE_EQ] = ACTIONS(37),
    [anon_sym_CARET_EQ] = ACTIONS(37),
    [anon_sym_LT_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT_EQ] = ACTIONS(37),
  },
  [4] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(4),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PLUS_PLUS] = ACTIONS(41),
    [anon_sym_PLUS_PERCENT] = ACTIONS(41),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_STAR_PERCENT] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_orelse] = ACTIONS(41),
    [anon_sym_catch] = ACTIONS(41),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(43),
    [sym_escape_sequence] = ACTIONS(43),
    [anon_sym_PLUS_EQ] = ACTIONS(41),
    [anon_sym_DASH_EQ] = ACTIONS(41),
    [anon_sym_STAR_EQ] = ACTIONS(41),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_SLASH_EQ] = ACTIONS(41),
    [anon_sym_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_AMP_EQ] = ACTIONS(41),
    [anon_sym_PIPE_EQ] = ACTIONS(41),
    [anon_sym_CARET_EQ] = ACTIONS(41),
    [anon_sym_LT_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_GT_EQ] = ACTIONS(41),
  },
  [5] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(6),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_CARET] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_PLUS_PERCENT] = ACTIONS(37),
    [anon_sym_DASH_PERCENT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_STAR_PERCENT] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_orelse] = ACTIONS(37),
    [anon_sym_catch] = ACTIONS(37),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(46),
    [sym_escape_sequence] = ACTIONS(46),
    [anon_sym_PLUS_EQ] = ACTIONS(37),
    [anon_sym_DASH_EQ] = ACTIONS(37),
    [anon_sym_STAR_EQ] = ACTIONS(37),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_SLASH_EQ] = ACTIONS(37),
    [anon_sym_PERCENT_EQ] = ACTIONS(37),
    [anon_sym_AMP_EQ] = ACTIONS(37),
    [anon_sym_PIPE_EQ] = ACTIONS(37),
    [anon_sym_CARET_EQ] = ACTIONS(37),
    [anon_sym_LT_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT_EQ] = ACTIONS(37),
  },
  [6] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(6),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_PLUS_PLUS] = ACTIONS(41),
    [anon_sym_PLUS_PERCENT] = ACTIONS(41),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_STAR_STAR] = ACTIONS(41),
    [anon_sym_STAR_PERCENT] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_orelse] = ACTIONS(41),
    [anon_sym_catch] = ACTIONS(41),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(48),
    [sym_escape_sequence] = ACTIONS(48),
    [anon_sym_PLUS_EQ] = ACTIONS(41),
    [anon_sym_DASH_EQ] = ACTIONS(41),
    [anon_sym_STAR_EQ] = ACTIONS(41),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_SLASH_EQ] = ACTIONS(41),
    [anon_sym_PERCENT_EQ] = ACTIONS(41),
    [anon_sym_AMP_EQ] = ACTIONS(41),
    [anon_sym_PIPE_EQ] = ACTIONS(41),
    [anon_sym_CARET_EQ] = ACTIONS(41),
    [anon_sym_LT_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_GT_EQ] = ACTIONS(41),
  },
  [7] = {
    [sym__statement] = STATE(7),
    [sym__expression_statement] = STATE(7),
    [sym__declaration_statement] = STATE(7),
    [sym__expression] = STATE(33),
    [sym_empty_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_comptime_block] = STATE(33),
    [sym_block] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_compound_assignment_expr] = STATE(33),
    [sym_unary_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym__literals] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [sym_multiline_string_literal] = STATE(33),
    [sym_boolean_literal] = STATE(33),
    [sym_unary_operator] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_threadlocal] = ACTIONS(56),
    [anon_sym_comptime] = ACTIONS(59),
    [anon_sym_const] = ACTIONS(62),
    [anon_sym_var] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_DASH_PERCENT] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(74),
    [sym_float_literal] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_c_DQUOTE] = ACTIONS(80),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(83),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [sym_null_literal] = ACTIONS(74),
    [sym_undefined_literal] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [sym_identifier] = ACTIONS(74),
  },
  [8] = {
    [sym__statement] = STATE(8),
    [sym__expression_statement] = STATE(8),
    [sym__declaration_statement] = STATE(8),
    [sym__expression] = STATE(49),
    [sym_empty_statement] = STATE(8),
    [sym_assignment_statement] = STATE(8),
    [sym_comptime_block] = STATE(49),
    [sym_block] = STATE(49),
    [sym_assignment_expression] = STATE(49),
    [sym_compound_assignment_expr] = STATE(49),
    [sym_unary_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym__literals] = STATE(49),
    [sym_char_literal] = STATE(49),
    [sym_string_literal] = STATE(49),
    [sym_multiline_string_literal] = STATE(49),
    [sym_boolean_literal] = STATE(49),
    [sym_unary_operator] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_threadlocal] = ACTIONS(92),
    [anon_sym_comptime] = ACTIONS(95),
    [anon_sym_const] = ACTIONS(98),
    [anon_sym_var] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_DASH_PERCENT] = ACTIONS(65),
    [sym_integer_literal] = ACTIONS(101),
    [sym_float_literal] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_c_DQUOTE] = ACTIONS(80),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(83),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [sym_null_literal] = ACTIONS(101),
    [sym_undefined_literal] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [sym_identifier] = ACTIONS(101),
  },
  [9] = {
    [sym__statement] = STATE(11),
    [sym__expression_statement] = STATE(11),
    [sym__declaration_statement] = STATE(11),
    [sym__expression] = STATE(22),
    [sym_empty_statement] = STATE(11),
    [sym_assignment_statement] = STATE(11),
    [sym_comptime_block] = STATE(22),
    [sym_block] = STATE(22),
    [sym_assignment_expression] = STATE(22),
    [sym_compound_assignment_expr] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym__literals] = STATE(22),
    [sym_char_literal] = STATE(22),
    [sym_string_literal] = STATE(22),
    [sym_multiline_string_literal] = STATE(22),
    [sym_boolean_literal] = STATE(22),
    [sym_unary_operator] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_threadlocal] = ACTIONS(106),
    [anon_sym_comptime] = ACTIONS(108),
    [anon_sym_const] = ACTIONS(110),
    [anon_sym_var] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(114),
    [sym_float_literal] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(114),
    [sym_undefined_literal] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(114),
  },
  [10] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(5),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_CARET] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(33),
    [anon_sym_GT_GT] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(33),
    [anon_sym_PLUS_PERCENT] = ACTIONS(33),
    [anon_sym_DASH_PERCENT] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_STAR_STAR] = ACTIONS(33),
    [anon_sym_STAR_PERCENT] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_orelse] = ACTIONS(33),
    [anon_sym_catch] = ACTIONS(33),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(118),
    [sym_escape_sequence] = ACTIONS(118),
    [anon_sym_PLUS_EQ] = ACTIONS(33),
    [anon_sym_DASH_EQ] = ACTIONS(33),
    [anon_sym_STAR_EQ] = ACTIONS(33),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_SLASH_EQ] = ACTIONS(33),
    [anon_sym_PERCENT_EQ] = ACTIONS(33),
    [anon_sym_AMP_EQ] = ACTIONS(33),
    [anon_sym_PIPE_EQ] = ACTIONS(33),
    [anon_sym_CARET_EQ] = ACTIONS(33),
    [anon_sym_LT_LT_EQ] = ACTIONS(33),
    [anon_sym_GT_GT_EQ] = ACTIONS(33),
  },
  [11] = {
    [sym__statement] = STATE(8),
    [sym__expression_statement] = STATE(8),
    [sym__declaration_statement] = STATE(8),
    [sym__expression] = STATE(16),
    [sym_empty_statement] = STATE(8),
    [sym_assignment_statement] = STATE(8),
    [sym_comptime_block] = STATE(16),
    [sym_block] = STATE(16),
    [sym_assignment_expression] = STATE(16),
    [sym_compound_assignment_expr] = STATE(16),
    [sym_unary_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym__literals] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [sym_multiline_string_literal] = STATE(16),
    [sym_boolean_literal] = STATE(16),
    [sym_unary_operator] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_threadlocal] = ACTIONS(106),
    [anon_sym_comptime] = ACTIONS(108),
    [anon_sym_const] = ACTIONS(110),
    [anon_sym_var] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(122),
    [sym_float_literal] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(122),
    [sym_undefined_literal] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(122),
  },
  [12] = {
    [sym__statement] = STATE(7),
    [sym__expression_statement] = STATE(7),
    [sym__declaration_statement] = STATE(7),
    [sym__expression] = STATE(33),
    [sym_empty_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_comptime_block] = STATE(33),
    [sym_block] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_compound_assignment_expr] = STATE(33),
    [sym_unary_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym__literals] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_string_literal] = STATE(33),
    [sym_multiline_string_literal] = STATE(33),
    [sym_boolean_literal] = STATE(33),
    [sym_unary_operator] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(23),
    [sym_undefined_literal] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(23),
  },
  [13] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [14] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [15] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_and] = ACTIONS(154),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_EQ_EQ] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(154),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_PLUS_PLUS] = ACTIONS(154),
    [anon_sym_PLUS_PERCENT] = ACTIONS(156),
    [anon_sym_DASH_PERCENT] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [anon_sym_STAR_PERCENT] = ACTIONS(156),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_orelse] = ACTIONS(154),
    [anon_sym_catch] = ACTIONS(154),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
  },
  [16] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(166),
    [anon_sym_catch] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [17] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT] = ACTIONS(128),
    [anon_sym_DASH_PERCENT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_STAR_PERCENT] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(126),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [18] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(166),
    [anon_sym_catch] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
  },
  [19] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(166),
    [anon_sym_catch] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(174),
    [anon_sym_DASH_EQ] = ACTIONS(174),
    [anon_sym_STAR_EQ] = ACTIONS(174),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [anon_sym_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_AMP_EQ] = ACTIONS(174),
    [anon_sym_PIPE_EQ] = ACTIONS(174),
    [anon_sym_CARET_EQ] = ACTIONS(174),
    [anon_sym_LT_LT_EQ] = ACTIONS(174),
    [anon_sym_GT_GT_EQ] = ACTIONS(174),
  },
  [20] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [21] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [22] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(166),
    [anon_sym_catch] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [23] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [24] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT] = ACTIONS(180),
    [anon_sym_DASH_PERCENT] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
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
  [25] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
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
  [26] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT] = ACTIONS(128),
    [anon_sym_DASH_PERCENT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [27] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [28] = {
    [sym_assignment_operator] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_PLUS_PERCENT] = ACTIONS(144),
    [anon_sym_DASH_PERCENT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_STAR_STAR] = ACTIONS(152),
    [anon_sym_STAR_PERCENT] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [29] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [30] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(216),
    [anon_sym_AMP] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_GT_GT] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_PLUS_PERCENT] = ACTIONS(216),
    [anon_sym_DASH_PERCENT] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_PERCENT] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(214),
    [anon_sym_STAR_PERCENT] = ACTIONS(216),
    [anon_sym_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_orelse] = ACTIONS(214),
    [anon_sym_catch] = ACTIONS(214),
    [anon_sym_PLUS_EQ] = ACTIONS(214),
    [anon_sym_DASH_EQ] = ACTIONS(214),
    [anon_sym_STAR_EQ] = ACTIONS(214),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(214),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(214),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(214),
    [anon_sym_SLASH_EQ] = ACTIONS(214),
    [anon_sym_PERCENT_EQ] = ACTIONS(214),
    [anon_sym_AMP_EQ] = ACTIONS(214),
    [anon_sym_PIPE_EQ] = ACTIONS(214),
    [anon_sym_CARET_EQ] = ACTIONS(214),
    [anon_sym_LT_LT_EQ] = ACTIONS(214),
    [anon_sym_GT_GT_EQ] = ACTIONS(214),
  },
  [31] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_and] = ACTIONS(218),
    [anon_sym_or] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [anon_sym_BANG_EQ] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(220),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_PLUS_PLUS] = ACTIONS(218),
    [anon_sym_PLUS_PERCENT] = ACTIONS(220),
    [anon_sym_DASH_PERCENT] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [anon_sym_STAR_PERCENT] = ACTIONS(220),
    [anon_sym_PIPE_PIPE] = ACTIONS(218),
    [anon_sym_orelse] = ACTIONS(218),
    [anon_sym_catch] = ACTIONS(218),
    [anon_sym_PLUS_EQ] = ACTIONS(218),
    [anon_sym_DASH_EQ] = ACTIONS(218),
    [anon_sym_STAR_EQ] = ACTIONS(218),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(218),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(218),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(218),
    [anon_sym_SLASH_EQ] = ACTIONS(218),
    [anon_sym_PERCENT_EQ] = ACTIONS(218),
    [anon_sym_AMP_EQ] = ACTIONS(218),
    [anon_sym_PIPE_EQ] = ACTIONS(218),
    [anon_sym_CARET_EQ] = ACTIONS(218),
    [anon_sym_LT_LT_EQ] = ACTIONS(218),
    [anon_sym_GT_GT_EQ] = ACTIONS(218),
  },
  [32] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
  },
  [33] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [34] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_and] = ACTIONS(224),
    [anon_sym_or] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_LT_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_EQ] = ACTIONS(224),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_GT_GT] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_PLUS_PLUS] = ACTIONS(224),
    [anon_sym_PLUS_PERCENT] = ACTIONS(226),
    [anon_sym_DASH_PERCENT] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [anon_sym_STAR_PERCENT] = ACTIONS(226),
    [anon_sym_PIPE_PIPE] = ACTIONS(224),
    [anon_sym_orelse] = ACTIONS(224),
    [anon_sym_catch] = ACTIONS(224),
    [anon_sym_PLUS_EQ] = ACTIONS(224),
    [anon_sym_DASH_EQ] = ACTIONS(224),
    [anon_sym_STAR_EQ] = ACTIONS(224),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_SLASH_EQ] = ACTIONS(224),
    [anon_sym_PERCENT_EQ] = ACTIONS(224),
    [anon_sym_AMP_EQ] = ACTIONS(224),
    [anon_sym_PIPE_EQ] = ACTIONS(224),
    [anon_sym_CARET_EQ] = ACTIONS(224),
    [anon_sym_LT_LT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_EQ] = ACTIONS(224),
  },
  [35] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [36] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_and] = ACTIONS(228),
    [anon_sym_or] = ACTIONS(230),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_CARET] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_BANG_EQ] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(228),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_GT_GT] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(228),
    [anon_sym_PLUS_PERCENT] = ACTIONS(230),
    [anon_sym_DASH_PERCENT] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_PERCENT] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym_STAR_PERCENT] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(228),
    [anon_sym_orelse] = ACTIONS(228),
    [anon_sym_catch] = ACTIONS(228),
    [anon_sym_PLUS_EQ] = ACTIONS(228),
    [anon_sym_DASH_EQ] = ACTIONS(228),
    [anon_sym_STAR_EQ] = ACTIONS(228),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_SLASH_EQ] = ACTIONS(228),
    [anon_sym_PERCENT_EQ] = ACTIONS(228),
    [anon_sym_AMP_EQ] = ACTIONS(228),
    [anon_sym_PIPE_EQ] = ACTIONS(228),
    [anon_sym_CARET_EQ] = ACTIONS(228),
    [anon_sym_LT_LT_EQ] = ACTIONS(228),
    [anon_sym_GT_GT_EQ] = ACTIONS(228),
  },
  [37] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [38] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [39] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [40] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_and] = ACTIONS(238),
    [anon_sym_or] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_GT_GT] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_PLUS_PERCENT] = ACTIONS(240),
    [anon_sym_DASH_PERCENT] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_STAR_STAR] = ACTIONS(238),
    [anon_sym_STAR_PERCENT] = ACTIONS(240),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_orelse] = ACTIONS(238),
    [anon_sym_catch] = ACTIONS(238),
    [anon_sym_PLUS_EQ] = ACTIONS(238),
    [anon_sym_DASH_EQ] = ACTIONS(238),
    [anon_sym_STAR_EQ] = ACTIONS(238),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_SLASH_EQ] = ACTIONS(238),
    [anon_sym_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_AMP_EQ] = ACTIONS(238),
    [anon_sym_PIPE_EQ] = ACTIONS(238),
    [anon_sym_CARET_EQ] = ACTIONS(238),
    [anon_sym_LT_LT_EQ] = ACTIONS(238),
    [anon_sym_GT_GT_EQ] = ACTIONS(238),
  },
  [41] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [42] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [43] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_and] = ACTIONS(154),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_EQ_EQ] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(154),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_PLUS_PLUS] = ACTIONS(154),
    [anon_sym_PLUS_PERCENT] = ACTIONS(156),
    [anon_sym_DASH_PERCENT] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [anon_sym_STAR_PERCENT] = ACTIONS(156),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_orelse] = ACTIONS(154),
    [anon_sym_catch] = ACTIONS(154),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
  },
  [44] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [45] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_and] = ACTIONS(248),
    [anon_sym_or] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_BANG_EQ] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PLUS_PLUS] = ACTIONS(248),
    [anon_sym_PLUS_PERCENT] = ACTIONS(250),
    [anon_sym_DASH_PERCENT] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_STAR_STAR] = ACTIONS(248),
    [anon_sym_STAR_PERCENT] = ACTIONS(250),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_orelse] = ACTIONS(248),
    [anon_sym_catch] = ACTIONS(248),
    [anon_sym_PLUS_EQ] = ACTIONS(248),
    [anon_sym_DASH_EQ] = ACTIONS(248),
    [anon_sym_STAR_EQ] = ACTIONS(248),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(248),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(248),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(248),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [anon_sym_PERCENT_EQ] = ACTIONS(248),
    [anon_sym_AMP_EQ] = ACTIONS(248),
    [anon_sym_PIPE_EQ] = ACTIONS(248),
    [anon_sym_CARET_EQ] = ACTIONS(248),
    [anon_sym_LT_LT_EQ] = ACTIONS(248),
    [anon_sym_GT_GT_EQ] = ACTIONS(248),
  },
  [46] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT] = ACTIONS(128),
    [anon_sym_DASH_PERCENT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_STAR_PERCENT] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(126),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [47] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [48] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(254),
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
  [49] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(168),
    [anon_sym_DASH_EQ] = ACTIONS(168),
    [anon_sym_STAR_EQ] = ACTIONS(168),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(168),
    [anon_sym_AMP_EQ] = ACTIONS(168),
    [anon_sym_PIPE_EQ] = ACTIONS(168),
    [anon_sym_CARET_EQ] = ACTIONS(168),
    [anon_sym_LT_LT_EQ] = ACTIONS(168),
    [anon_sym_GT_GT_EQ] = ACTIONS(168),
  },
  [50] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(258),
    [anon_sym_or] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_GT_GT] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_PLUS_PLUS] = ACTIONS(258),
    [anon_sym_PLUS_PERCENT] = ACTIONS(260),
    [anon_sym_DASH_PERCENT] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_STAR_STAR] = ACTIONS(258),
    [anon_sym_STAR_PERCENT] = ACTIONS(260),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_orelse] = ACTIONS(258),
    [anon_sym_catch] = ACTIONS(258),
    [anon_sym_PLUS_EQ] = ACTIONS(258),
    [anon_sym_DASH_EQ] = ACTIONS(258),
    [anon_sym_STAR_EQ] = ACTIONS(258),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(258),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(258),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(258),
    [anon_sym_PERCENT_EQ] = ACTIONS(258),
    [anon_sym_AMP_EQ] = ACTIONS(258),
    [anon_sym_PIPE_EQ] = ACTIONS(258),
    [anon_sym_CARET_EQ] = ACTIONS(258),
    [anon_sym_LT_LT_EQ] = ACTIONS(258),
    [anon_sym_GT_GT_EQ] = ACTIONS(258),
  },
  [51] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_and] = ACTIONS(262),
    [anon_sym_or] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_PLUS_PERCENT] = ACTIONS(264),
    [anon_sym_DASH_PERCENT] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(262),
    [anon_sym_STAR_PERCENT] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_orelse] = ACTIONS(262),
    [anon_sym_catch] = ACTIONS(262),
    [anon_sym_PLUS_EQ] = ACTIONS(262),
    [anon_sym_DASH_EQ] = ACTIONS(262),
    [anon_sym_STAR_EQ] = ACTIONS(262),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(262),
    [anon_sym_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_AMP_EQ] = ACTIONS(262),
    [anon_sym_PIPE_EQ] = ACTIONS(262),
    [anon_sym_CARET_EQ] = ACTIONS(262),
    [anon_sym_LT_LT_EQ] = ACTIONS(262),
    [anon_sym_GT_GT_EQ] = ACTIONS(262),
  },
  [52] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_PLUS_PERCENT] = ACTIONS(180),
    [anon_sym_DASH_PERCENT] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
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
  [53] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT] = ACTIONS(128),
    [anon_sym_DASH_PERCENT] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [54] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(212),
    [anon_sym_catch] = ACTIONS(212),
    [anon_sym_PLUS_EQ] = ACTIONS(174),
    [anon_sym_DASH_EQ] = ACTIONS(174),
    [anon_sym_STAR_EQ] = ACTIONS(174),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(174),
    [anon_sym_PERCENT_EQ] = ACTIONS(174),
    [anon_sym_AMP_EQ] = ACTIONS(174),
    [anon_sym_PIPE_EQ] = ACTIONS(174),
    [anon_sym_CARET_EQ] = ACTIONS(174),
    [anon_sym_LT_LT_EQ] = ACTIONS(174),
    [anon_sym_GT_GT_EQ] = ACTIONS(174),
  },
  [55] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [56] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [57] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(178),
    [anon_sym_catch] = ACTIONS(178),
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
  [58] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [59] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [60] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [61] = {
    [sym_assignment_operator] = STATE(82),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_PLUS_PERCENT] = ACTIONS(202),
    [anon_sym_DASH_PERCENT] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_STAR_STAR] = ACTIONS(210),
    [anon_sym_STAR_PERCENT] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_orelse] = ACTIONS(126),
    [anon_sym_catch] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
  },
  [62] = {
    [sym__type] = STATE(134),
    [sym_primitive_type] = STATE(134),
    [sym_optional_type] = STATE(134),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(266),
    [anon_sym_u8] = ACTIONS(266),
    [anon_sym_i16] = ACTIONS(266),
    [anon_sym_u16] = ACTIONS(266),
    [anon_sym_i32] = ACTIONS(266),
    [anon_sym_u32] = ACTIONS(266),
    [anon_sym_i64] = ACTIONS(266),
    [anon_sym_u64] = ACTIONS(266),
    [anon_sym_i128] = ACTIONS(266),
    [anon_sym_u128] = ACTIONS(266),
    [anon_sym_isize] = ACTIONS(266),
    [anon_sym_usize] = ACTIONS(266),
    [anon_sym_c_short] = ACTIONS(266),
    [anon_sym_c_ushort] = ACTIONS(266),
    [anon_sym_c_int] = ACTIONS(266),
    [anon_sym_c_uint] = ACTIONS(266),
    [anon_sym_c_long] = ACTIONS(266),
    [anon_sym_c_ulong] = ACTIONS(266),
    [anon_sym_c_longlong] = ACTIONS(266),
    [anon_sym_c_ulonglong] = ACTIONS(266),
    [anon_sym_c_longdouble] = ACTIONS(266),
    [anon_sym_f16] = ACTIONS(266),
    [anon_sym_f32] = ACTIONS(266),
    [anon_sym_f64] = ACTIONS(266),
    [anon_sym_f128] = ACTIONS(266),
    [anon_sym_comptime_int] = ACTIONS(266),
    [anon_sym_comptime_float] = ACTIONS(266),
    [anon_sym_bool] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_noreturn] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_anyerror] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(268),
    [sym_identifier] = ACTIONS(270),
  },
  [63] = {
    [sym__type] = STATE(130),
    [sym_primitive_type] = STATE(130),
    [sym_optional_type] = STATE(130),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(266),
    [anon_sym_u8] = ACTIONS(266),
    [anon_sym_i16] = ACTIONS(266),
    [anon_sym_u16] = ACTIONS(266),
    [anon_sym_i32] = ACTIONS(266),
    [anon_sym_u32] = ACTIONS(266),
    [anon_sym_i64] = ACTIONS(266),
    [anon_sym_u64] = ACTIONS(266),
    [anon_sym_i128] = ACTIONS(266),
    [anon_sym_u128] = ACTIONS(266),
    [anon_sym_isize] = ACTIONS(266),
    [anon_sym_usize] = ACTIONS(266),
    [anon_sym_c_short] = ACTIONS(266),
    [anon_sym_c_ushort] = ACTIONS(266),
    [anon_sym_c_int] = ACTIONS(266),
    [anon_sym_c_uint] = ACTIONS(266),
    [anon_sym_c_long] = ACTIONS(266),
    [anon_sym_c_ulong] = ACTIONS(266),
    [anon_sym_c_longlong] = ACTIONS(266),
    [anon_sym_c_ulonglong] = ACTIONS(266),
    [anon_sym_c_longdouble] = ACTIONS(266),
    [anon_sym_f16] = ACTIONS(266),
    [anon_sym_f32] = ACTIONS(266),
    [anon_sym_f64] = ACTIONS(266),
    [anon_sym_f128] = ACTIONS(266),
    [anon_sym_comptime_int] = ACTIONS(266),
    [anon_sym_comptime_float] = ACTIONS(266),
    [anon_sym_bool] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_noreturn] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_anyerror] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(268),
    [sym_identifier] = ACTIONS(272),
  },
  [64] = {
    [sym__type] = STATE(131),
    [sym_primitive_type] = STATE(131),
    [sym_optional_type] = STATE(131),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(266),
    [anon_sym_u8] = ACTIONS(266),
    [anon_sym_i16] = ACTIONS(266),
    [anon_sym_u16] = ACTIONS(266),
    [anon_sym_i32] = ACTIONS(266),
    [anon_sym_u32] = ACTIONS(266),
    [anon_sym_i64] = ACTIONS(266),
    [anon_sym_u64] = ACTIONS(266),
    [anon_sym_i128] = ACTIONS(266),
    [anon_sym_u128] = ACTIONS(266),
    [anon_sym_isize] = ACTIONS(266),
    [anon_sym_usize] = ACTIONS(266),
    [anon_sym_c_short] = ACTIONS(266),
    [anon_sym_c_ushort] = ACTIONS(266),
    [anon_sym_c_int] = ACTIONS(266),
    [anon_sym_c_uint] = ACTIONS(266),
    [anon_sym_c_long] = ACTIONS(266),
    [anon_sym_c_ulong] = ACTIONS(266),
    [anon_sym_c_longlong] = ACTIONS(266),
    [anon_sym_c_ulonglong] = ACTIONS(266),
    [anon_sym_c_longdouble] = ACTIONS(266),
    [anon_sym_f16] = ACTIONS(266),
    [anon_sym_f32] = ACTIONS(266),
    [anon_sym_f64] = ACTIONS(266),
    [anon_sym_f128] = ACTIONS(266),
    [anon_sym_comptime_int] = ACTIONS(266),
    [anon_sym_comptime_float] = ACTIONS(266),
    [anon_sym_bool] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_noreturn] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_anyerror] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(268),
    [sym_identifier] = ACTIONS(274),
  },
  [65] = {
    [sym__type] = STATE(135),
    [sym_primitive_type] = STATE(135),
    [sym_optional_type] = STATE(135),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(266),
    [anon_sym_u8] = ACTIONS(266),
    [anon_sym_i16] = ACTIONS(266),
    [anon_sym_u16] = ACTIONS(266),
    [anon_sym_i32] = ACTIONS(266),
    [anon_sym_u32] = ACTIONS(266),
    [anon_sym_i64] = ACTIONS(266),
    [anon_sym_u64] = ACTIONS(266),
    [anon_sym_i128] = ACTIONS(266),
    [anon_sym_u128] = ACTIONS(266),
    [anon_sym_isize] = ACTIONS(266),
    [anon_sym_usize] = ACTIONS(266),
    [anon_sym_c_short] = ACTIONS(266),
    [anon_sym_c_ushort] = ACTIONS(266),
    [anon_sym_c_int] = ACTIONS(266),
    [anon_sym_c_uint] = ACTIONS(266),
    [anon_sym_c_long] = ACTIONS(266),
    [anon_sym_c_ulong] = ACTIONS(266),
    [anon_sym_c_longlong] = ACTIONS(266),
    [anon_sym_c_ulonglong] = ACTIONS(266),
    [anon_sym_c_longdouble] = ACTIONS(266),
    [anon_sym_f16] = ACTIONS(266),
    [anon_sym_f32] = ACTIONS(266),
    [anon_sym_f64] = ACTIONS(266),
    [anon_sym_f128] = ACTIONS(266),
    [anon_sym_comptime_int] = ACTIONS(266),
    [anon_sym_comptime_float] = ACTIONS(266),
    [anon_sym_bool] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_noreturn] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_anyerror] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(268),
    [sym_identifier] = ACTIONS(276),
  },
  [66] = {
    [sym__type] = STATE(132),
    [sym_primitive_type] = STATE(132),
    [sym_optional_type] = STATE(132),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(266),
    [anon_sym_u8] = ACTIONS(266),
    [anon_sym_i16] = ACTIONS(266),
    [anon_sym_u16] = ACTIONS(266),
    [anon_sym_i32] = ACTIONS(266),
    [anon_sym_u32] = ACTIONS(266),
    [anon_sym_i64] = ACTIONS(266),
    [anon_sym_u64] = ACTIONS(266),
    [anon_sym_i128] = ACTIONS(266),
    [anon_sym_u128] = ACTIONS(266),
    [anon_sym_isize] = ACTIONS(266),
    [anon_sym_usize] = ACTIONS(266),
    [anon_sym_c_short] = ACTIONS(266),
    [anon_sym_c_ushort] = ACTIONS(266),
    [anon_sym_c_int] = ACTIONS(266),
    [anon_sym_c_uint] = ACTIONS(266),
    [anon_sym_c_long] = ACTIONS(266),
    [anon_sym_c_ulong] = ACTIONS(266),
    [anon_sym_c_longlong] = ACTIONS(266),
    [anon_sym_c_ulonglong] = ACTIONS(266),
    [anon_sym_c_longdouble] = ACTIONS(266),
    [anon_sym_f16] = ACTIONS(266),
    [anon_sym_f32] = ACTIONS(266),
    [anon_sym_f64] = ACTIONS(266),
    [anon_sym_f128] = ACTIONS(266),
    [anon_sym_comptime_int] = ACTIONS(266),
    [anon_sym_comptime_float] = ACTIONS(266),
    [anon_sym_bool] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_noreturn] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_anyerror] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(268),
    [sym_identifier] = ACTIONS(278),
  },
  [67] = {
    [sym__expression] = STATE(61),
    [sym_comptime_block] = STATE(61),
    [sym_block] = STATE(61),
    [sym_assignment_expression] = STATE(61),
    [sym_compound_assignment_expr] = STATE(61),
    [sym_unary_expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym__literals] = STATE(61),
    [sym_char_literal] = STATE(61),
    [sym_string_literal] = STATE(61),
    [sym_multiline_string_literal] = STATE(61),
    [sym_boolean_literal] = STATE(61),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(282),
    [sym_float_literal] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(282),
    [sym_undefined_literal] = ACTIONS(282),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(282),
  },
  [68] = {
    [sym__expression] = STATE(46),
    [sym_comptime_block] = STATE(46),
    [sym_block] = STATE(46),
    [sym_assignment_expression] = STATE(46),
    [sym_compound_assignment_expr] = STATE(46),
    [sym_unary_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym__literals] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [sym_multiline_string_literal] = STATE(46),
    [sym_boolean_literal] = STATE(46),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(284),
    [sym_float_literal] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(284),
    [sym_undefined_literal] = ACTIONS(284),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(284),
  },
  [69] = {
    [sym__expression] = STATE(42),
    [sym_comptime_block] = STATE(42),
    [sym_block] = STATE(42),
    [sym_assignment_expression] = STATE(42),
    [sym_compound_assignment_expr] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym__literals] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_string_literal] = STATE(42),
    [sym_multiline_string_literal] = STATE(42),
    [sym_boolean_literal] = STATE(42),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(286),
    [sym_float_literal] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(286),
    [sym_undefined_literal] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(286),
  },
  [70] = {
    [sym__expression] = STATE(44),
    [sym_comptime_block] = STATE(44),
    [sym_block] = STATE(44),
    [sym_assignment_expression] = STATE(44),
    [sym_compound_assignment_expr] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym__literals] = STATE(44),
    [sym_char_literal] = STATE(44),
    [sym_string_literal] = STATE(44),
    [sym_multiline_string_literal] = STATE(44),
    [sym_boolean_literal] = STATE(44),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(288),
    [sym_float_literal] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(288),
    [sym_undefined_literal] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(288),
  },
  [71] = {
    [sym__expression] = STATE(39),
    [sym_comptime_block] = STATE(39),
    [sym_block] = STATE(39),
    [sym_assignment_expression] = STATE(39),
    [sym_compound_assignment_expr] = STATE(39),
    [sym_unary_expression] = STATE(39),
    [sym_binary_expression] = STATE(39),
    [sym__literals] = STATE(39),
    [sym_char_literal] = STATE(39),
    [sym_string_literal] = STATE(39),
    [sym_multiline_string_literal] = STATE(39),
    [sym_boolean_literal] = STATE(39),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(290),
    [sym_float_literal] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(290),
    [sym_undefined_literal] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(290),
  },
  [72] = {
    [sym__expression] = STATE(38),
    [sym_comptime_block] = STATE(38),
    [sym_block] = STATE(38),
    [sym_assignment_expression] = STATE(38),
    [sym_compound_assignment_expr] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym__literals] = STATE(38),
    [sym_char_literal] = STATE(38),
    [sym_string_literal] = STATE(38),
    [sym_multiline_string_literal] = STATE(38),
    [sym_boolean_literal] = STATE(38),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(292),
    [sym_float_literal] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(292),
    [sym_undefined_literal] = ACTIONS(292),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(292),
  },
  [73] = {
    [sym__expression] = STATE(47),
    [sym_comptime_block] = STATE(47),
    [sym_block] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_compound_assignment_expr] = STATE(47),
    [sym_unary_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym__literals] = STATE(47),
    [sym_char_literal] = STATE(47),
    [sym_string_literal] = STATE(47),
    [sym_multiline_string_literal] = STATE(47),
    [sym_boolean_literal] = STATE(47),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(294),
    [sym_float_literal] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(294),
    [sym_undefined_literal] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(294),
  },
  [74] = {
    [sym__expression] = STATE(37),
    [sym_comptime_block] = STATE(37),
    [sym_block] = STATE(37),
    [sym_assignment_expression] = STATE(37),
    [sym_compound_assignment_expr] = STATE(37),
    [sym_unary_expression] = STATE(37),
    [sym_binary_expression] = STATE(37),
    [sym__literals] = STATE(37),
    [sym_char_literal] = STATE(37),
    [sym_string_literal] = STATE(37),
    [sym_multiline_string_literal] = STATE(37),
    [sym_boolean_literal] = STATE(37),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(296),
    [sym_float_literal] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(296),
    [sym_undefined_literal] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(296),
  },
  [75] = {
    [sym__expression] = STATE(43),
    [sym_comptime_block] = STATE(43),
    [sym_block] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_compound_assignment_expr] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_char_literal] = STATE(43),
    [sym_string_literal] = STATE(43),
    [sym_multiline_string_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(298),
    [sym_float_literal] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(298),
    [sym_undefined_literal] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(298),
  },
  [76] = {
    [sym__expression] = STATE(54),
    [sym_comptime_block] = STATE(54),
    [sym_block] = STATE(54),
    [sym_assignment_expression] = STATE(54),
    [sym_compound_assignment_expr] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym__literals] = STATE(54),
    [sym_char_literal] = STATE(54),
    [sym_string_literal] = STATE(54),
    [sym_multiline_string_literal] = STATE(54),
    [sym_boolean_literal] = STATE(54),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(300),
    [sym_float_literal] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(300),
    [sym_undefined_literal] = ACTIONS(300),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(300),
  },
  [77] = {
    [sym__expression] = STATE(41),
    [sym_comptime_block] = STATE(41),
    [sym_block] = STATE(41),
    [sym_assignment_expression] = STATE(41),
    [sym_compound_assignment_expr] = STATE(41),
    [sym_unary_expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym__literals] = STATE(41),
    [sym_char_literal] = STATE(41),
    [sym_string_literal] = STATE(41),
    [sym_multiline_string_literal] = STATE(41),
    [sym_boolean_literal] = STATE(41),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(302),
    [sym_float_literal] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(302),
    [sym_undefined_literal] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(302),
  },
  [78] = {
    [sym__expression] = STATE(55),
    [sym_comptime_block] = STATE(55),
    [sym_block] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_compound_assignment_expr] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym__literals] = STATE(55),
    [sym_char_literal] = STATE(55),
    [sym_string_literal] = STATE(55),
    [sym_multiline_string_literal] = STATE(55),
    [sym_boolean_literal] = STATE(55),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(304),
    [sym_float_literal] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(304),
    [sym_undefined_literal] = ACTIONS(304),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(304),
  },
  [79] = {
    [sym__expression] = STATE(29),
    [sym_comptime_block] = STATE(29),
    [sym_block] = STATE(29),
    [sym_assignment_expression] = STATE(29),
    [sym_compound_assignment_expr] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym__literals] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_string_literal] = STATE(29),
    [sym_multiline_string_literal] = STATE(29),
    [sym_boolean_literal] = STATE(29),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(306),
    [sym_float_literal] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(306),
    [sym_undefined_literal] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(306),
  },
  [80] = {
    [sym__expression] = STATE(56),
    [sym_comptime_block] = STATE(56),
    [sym_block] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_compound_assignment_expr] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym__literals] = STATE(56),
    [sym_char_literal] = STATE(56),
    [sym_string_literal] = STATE(56),
    [sym_multiline_string_literal] = STATE(56),
    [sym_boolean_literal] = STATE(56),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(308),
    [sym_float_literal] = ACTIONS(308),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(308),
    [sym_undefined_literal] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(308),
  },
  [81] = {
    [sym__expression] = STATE(57),
    [sym_comptime_block] = STATE(57),
    [sym_block] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_compound_assignment_expr] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym__literals] = STATE(57),
    [sym_char_literal] = STATE(57),
    [sym_string_literal] = STATE(57),
    [sym_multiline_string_literal] = STATE(57),
    [sym_boolean_literal] = STATE(57),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(310),
    [sym_float_literal] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(310),
    [sym_undefined_literal] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(310),
  },
  [82] = {
    [sym__expression] = STATE(32),
    [sym_comptime_block] = STATE(32),
    [sym_block] = STATE(32),
    [sym_assignment_expression] = STATE(32),
    [sym_compound_assignment_expr] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym__literals] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_string_literal] = STATE(32),
    [sym_multiline_string_literal] = STATE(32),
    [sym_boolean_literal] = STATE(32),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(312),
    [sym_float_literal] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(312),
    [sym_undefined_literal] = ACTIONS(312),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(312),
  },
  [83] = {
    [sym__expression] = STATE(58),
    [sym_comptime_block] = STATE(58),
    [sym_block] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_compound_assignment_expr] = STATE(58),
    [sym_unary_expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym__literals] = STATE(58),
    [sym_char_literal] = STATE(58),
    [sym_string_literal] = STATE(58),
    [sym_multiline_string_literal] = STATE(58),
    [sym_boolean_literal] = STATE(58),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(314),
    [sym_float_literal] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(314),
    [sym_undefined_literal] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(314),
  },
  [84] = {
    [sym__expression] = STATE(59),
    [sym_comptime_block] = STATE(59),
    [sym_block] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_compound_assignment_expr] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym__literals] = STATE(59),
    [sym_char_literal] = STATE(59),
    [sym_string_literal] = STATE(59),
    [sym_multiline_string_literal] = STATE(59),
    [sym_boolean_literal] = STATE(59),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(316),
    [sym_float_literal] = ACTIONS(316),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(316),
    [sym_undefined_literal] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(316),
  },
  [85] = {
    [sym__expression] = STATE(60),
    [sym_comptime_block] = STATE(60),
    [sym_block] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_compound_assignment_expr] = STATE(60),
    [sym_unary_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym__literals] = STATE(60),
    [sym_char_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [sym_multiline_string_literal] = STATE(60),
    [sym_boolean_literal] = STATE(60),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(318),
    [sym_float_literal] = ACTIONS(318),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(318),
    [sym_undefined_literal] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(318),
  },
  [86] = {
    [sym__expression] = STATE(53),
    [sym_comptime_block] = STATE(53),
    [sym_block] = STATE(53),
    [sym_assignment_expression] = STATE(53),
    [sym_compound_assignment_expr] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym__literals] = STATE(53),
    [sym_char_literal] = STATE(53),
    [sym_string_literal] = STATE(53),
    [sym_multiline_string_literal] = STATE(53),
    [sym_boolean_literal] = STATE(53),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(320),
    [sym_float_literal] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(320),
    [sym_undefined_literal] = ACTIONS(320),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(320),
  },
  [87] = {
    [sym__expression] = STATE(15),
    [sym_comptime_block] = STATE(15),
    [sym_block] = STATE(15),
    [sym_assignment_expression] = STATE(15),
    [sym_compound_assignment_expr] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym__literals] = STATE(15),
    [sym_char_literal] = STATE(15),
    [sym_string_literal] = STATE(15),
    [sym_multiline_string_literal] = STATE(15),
    [sym_boolean_literal] = STATE(15),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(322),
    [sym_float_literal] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(322),
    [sym_undefined_literal] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(322),
  },
  [88] = {
    [sym__expression] = STATE(35),
    [sym_comptime_block] = STATE(35),
    [sym_block] = STATE(35),
    [sym_assignment_expression] = STATE(35),
    [sym_compound_assignment_expr] = STATE(35),
    [sym_unary_expression] = STATE(35),
    [sym_binary_expression] = STATE(35),
    [sym__literals] = STATE(35),
    [sym_char_literal] = STATE(35),
    [sym_string_literal] = STATE(35),
    [sym_multiline_string_literal] = STATE(35),
    [sym_boolean_literal] = STATE(35),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(324),
    [sym_float_literal] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(324),
    [sym_undefined_literal] = ACTIONS(324),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(324),
  },
  [89] = {
    [sym__expression] = STATE(52),
    [sym_comptime_block] = STATE(52),
    [sym_block] = STATE(52),
    [sym_assignment_expression] = STATE(52),
    [sym_compound_assignment_expr] = STATE(52),
    [sym_unary_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym__literals] = STATE(52),
    [sym_char_literal] = STATE(52),
    [sym_string_literal] = STATE(52),
    [sym_multiline_string_literal] = STATE(52),
    [sym_boolean_literal] = STATE(52),
    [sym_unary_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(326),
    [sym_float_literal] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(326),
    [sym_undefined_literal] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(326),
  },
  [90] = {
    [sym__expression] = STATE(19),
    [sym_comptime_block] = STATE(19),
    [sym_block] = STATE(19),
    [sym_assignment_expression] = STATE(19),
    [sym_compound_assignment_expr] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym__literals] = STATE(19),
    [sym_char_literal] = STATE(19),
    [sym_string_literal] = STATE(19),
    [sym_multiline_string_literal] = STATE(19),
    [sym_boolean_literal] = STATE(19),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(328),
    [sym_float_literal] = ACTIONS(328),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(328),
    [sym_undefined_literal] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(328),
  },
  [91] = {
    [sym__expression] = STATE(21),
    [sym_comptime_block] = STATE(21),
    [sym_block] = STATE(21),
    [sym_assignment_expression] = STATE(21),
    [sym_compound_assignment_expr] = STATE(21),
    [sym_unary_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym__literals] = STATE(21),
    [sym_char_literal] = STATE(21),
    [sym_string_literal] = STATE(21),
    [sym_multiline_string_literal] = STATE(21),
    [sym_boolean_literal] = STATE(21),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(330),
    [sym_float_literal] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(330),
    [sym_undefined_literal] = ACTIONS(330),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(330),
  },
  [92] = {
    [sym__expression] = STATE(13),
    [sym_comptime_block] = STATE(13),
    [sym_block] = STATE(13),
    [sym_assignment_expression] = STATE(13),
    [sym_compound_assignment_expr] = STATE(13),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym__literals] = STATE(13),
    [sym_char_literal] = STATE(13),
    [sym_string_literal] = STATE(13),
    [sym_multiline_string_literal] = STATE(13),
    [sym_boolean_literal] = STATE(13),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(332),
    [sym_float_literal] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(332),
    [sym_undefined_literal] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(332),
  },
  [93] = {
    [sym__expression] = STATE(25),
    [sym_comptime_block] = STATE(25),
    [sym_block] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_compound_assignment_expr] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym__literals] = STATE(25),
    [sym_char_literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [sym_multiline_string_literal] = STATE(25),
    [sym_boolean_literal] = STATE(25),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(334),
    [sym_float_literal] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(334),
    [sym_undefined_literal] = ACTIONS(334),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(334),
  },
  [94] = {
    [sym__expression] = STATE(23),
    [sym_comptime_block] = STATE(23),
    [sym_block] = STATE(23),
    [sym_assignment_expression] = STATE(23),
    [sym_compound_assignment_expr] = STATE(23),
    [sym_unary_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym__literals] = STATE(23),
    [sym_char_literal] = STATE(23),
    [sym_string_literal] = STATE(23),
    [sym_multiline_string_literal] = STATE(23),
    [sym_boolean_literal] = STATE(23),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(336),
    [sym_float_literal] = ACTIONS(336),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(336),
    [sym_undefined_literal] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(336),
  },
  [95] = {
    [sym__expression] = STATE(14),
    [sym_comptime_block] = STATE(14),
    [sym_block] = STATE(14),
    [sym_assignment_expression] = STATE(14),
    [sym_compound_assignment_expr] = STATE(14),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym__literals] = STATE(14),
    [sym_char_literal] = STATE(14),
    [sym_string_literal] = STATE(14),
    [sym_multiline_string_literal] = STATE(14),
    [sym_boolean_literal] = STATE(14),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(338),
    [sym_float_literal] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(338),
    [sym_undefined_literal] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(338),
  },
  [96] = {
    [sym__expression] = STATE(28),
    [sym_comptime_block] = STATE(28),
    [sym_block] = STATE(28),
    [sym_assignment_expression] = STATE(28),
    [sym_compound_assignment_expr] = STATE(28),
    [sym_unary_expression] = STATE(28),
    [sym_binary_expression] = STATE(28),
    [sym__literals] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_multiline_string_literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(340),
    [sym_float_literal] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(340),
    [sym_undefined_literal] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(340),
  },
  [97] = {
    [sym__expression] = STATE(27),
    [sym_comptime_block] = STATE(27),
    [sym_block] = STATE(27),
    [sym_assignment_expression] = STATE(27),
    [sym_compound_assignment_expr] = STATE(27),
    [sym_unary_expression] = STATE(27),
    [sym_binary_expression] = STATE(27),
    [sym__literals] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_string_literal] = STATE(27),
    [sym_multiline_string_literal] = STATE(27),
    [sym_boolean_literal] = STATE(27),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(342),
    [sym_float_literal] = ACTIONS(342),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(342),
    [sym_undefined_literal] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(342),
  },
  [98] = {
    [sym__expression] = STATE(26),
    [sym_comptime_block] = STATE(26),
    [sym_block] = STATE(26),
    [sym_assignment_expression] = STATE(26),
    [sym_compound_assignment_expr] = STATE(26),
    [sym_unary_expression] = STATE(26),
    [sym_binary_expression] = STATE(26),
    [sym__literals] = STATE(26),
    [sym_char_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_multiline_string_literal] = STATE(26),
    [sym_boolean_literal] = STATE(26),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(344),
    [sym_float_literal] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(344),
    [sym_undefined_literal] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(344),
  },
  [99] = {
    [sym__expression] = STATE(24),
    [sym_comptime_block] = STATE(24),
    [sym_block] = STATE(24),
    [sym_assignment_expression] = STATE(24),
    [sym_compound_assignment_expr] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [sym__literals] = STATE(24),
    [sym_char_literal] = STATE(24),
    [sym_string_literal] = STATE(24),
    [sym_multiline_string_literal] = STATE(24),
    [sym_boolean_literal] = STATE(24),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(346),
    [sym_float_literal] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(346),
    [sym_undefined_literal] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(346),
  },
  [100] = {
    [sym__expression] = STATE(17),
    [sym_comptime_block] = STATE(17),
    [sym_block] = STATE(17),
    [sym_assignment_expression] = STATE(17),
    [sym_compound_assignment_expr] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym__literals] = STATE(17),
    [sym_char_literal] = STATE(17),
    [sym_string_literal] = STATE(17),
    [sym_multiline_string_literal] = STATE(17),
    [sym_boolean_literal] = STATE(17),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(348),
    [sym_float_literal] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(348),
    [sym_undefined_literal] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(348),
  },
  [101] = {
    [sym__expression] = STATE(20),
    [sym_comptime_block] = STATE(20),
    [sym_block] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_compound_assignment_expr] = STATE(20),
    [sym_unary_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym__literals] = STATE(20),
    [sym_char_literal] = STATE(20),
    [sym_string_literal] = STATE(20),
    [sym_multiline_string_literal] = STATE(20),
    [sym_boolean_literal] = STATE(20),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(350),
    [sym_float_literal] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(350),
    [sym_undefined_literal] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(350),
  },
  [102] = {
    [sym__expression] = STATE(18),
    [sym_comptime_block] = STATE(18),
    [sym_block] = STATE(18),
    [sym_assignment_expression] = STATE(18),
    [sym_compound_assignment_expr] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym__literals] = STATE(18),
    [sym_char_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [sym_multiline_string_literal] = STATE(18),
    [sym_boolean_literal] = STATE(18),
    [sym_unary_operator] = STATE(87),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_DASH_PERCENT] = ACTIONS(17),
    [sym_integer_literal] = ACTIONS(352),
    [sym_float_literal] = ACTIONS(352),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_c_DQUOTE] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_null_literal] = ACTIONS(352),
    [sym_undefined_literal] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(352),
  },
  [103] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_threadlocal] = ACTIONS(356),
    [anon_sym_comptime] = ACTIONS(356),
    [anon_sym_const] = ACTIONS(356),
    [anon_sym_var] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_DASH_PERCENT] = ACTIONS(354),
    [sym_integer_literal] = ACTIONS(356),
    [sym_float_literal] = ACTIONS(356),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_c_DQUOTE] = ACTIONS(354),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(354),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(354),
    [anon_sym_true] = ACTIONS(356),
    [anon_sym_false] = ACTIONS(356),
    [sym_null_literal] = ACTIONS(356),
    [sym_undefined_literal] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
  },
  [104] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_threadlocal] = ACTIONS(360),
    [anon_sym_comptime] = ACTIONS(360),
    [anon_sym_const] = ACTIONS(360),
    [anon_sym_var] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_DASH_PERCENT] = ACTIONS(358),
    [sym_integer_literal] = ACTIONS(360),
    [sym_float_literal] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_c_DQUOTE] = ACTIONS(358),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(358),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(358),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [sym_null_literal] = ACTIONS(360),
    [sym_undefined_literal] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [sym_identifier] = ACTIONS(360),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(362),
    [anon_sym_threadlocal] = ACTIONS(364),
    [anon_sym_comptime] = ACTIONS(364),
    [anon_sym_const] = ACTIONS(364),
    [anon_sym_var] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_DASH_PERCENT] = ACTIONS(362),
    [sym_integer_literal] = ACTIONS(364),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_c_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(362),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(364),
    [anon_sym_false] = ACTIONS(364),
    [sym_null_literal] = ACTIONS(364),
    [sym_undefined_literal] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_threadlocal] = ACTIONS(368),
    [anon_sym_comptime] = ACTIONS(368),
    [anon_sym_const] = ACTIONS(368),
    [anon_sym_var] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_DASH_PERCENT] = ACTIONS(366),
    [sym_integer_literal] = ACTIONS(368),
    [sym_float_literal] = ACTIONS(368),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_c_DQUOTE] = ACTIONS(366),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(366),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(366),
    [anon_sym_true] = ACTIONS(368),
    [anon_sym_false] = ACTIONS(368),
    [sym_null_literal] = ACTIONS(368),
    [sym_undefined_literal] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(366),
    [anon_sym_BANG] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_threadlocal] = ACTIONS(356),
    [anon_sym_comptime] = ACTIONS(356),
    [anon_sym_const] = ACTIONS(356),
    [anon_sym_var] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_DASH_PERCENT] = ACTIONS(354),
    [sym_integer_literal] = ACTIONS(356),
    [sym_float_literal] = ACTIONS(356),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_c_DQUOTE] = ACTIONS(354),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(354),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(354),
    [anon_sym_true] = ACTIONS(356),
    [anon_sym_false] = ACTIONS(356),
    [sym_null_literal] = ACTIONS(356),
    [sym_undefined_literal] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [sym_identifier] = ACTIONS(356),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_threadlocal] = ACTIONS(372),
    [anon_sym_comptime] = ACTIONS(372),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_var] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_DASH_PERCENT] = ACTIONS(370),
    [sym_integer_literal] = ACTIONS(372),
    [sym_float_literal] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_c_DQUOTE] = ACTIONS(370),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(370),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_false] = ACTIONS(372),
    [sym_null_literal] = ACTIONS(372),
    [sym_undefined_literal] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [sym_identifier] = ACTIONS(372),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_threadlocal] = ACTIONS(376),
    [anon_sym_comptime] = ACTIONS(376),
    [anon_sym_const] = ACTIONS(376),
    [anon_sym_var] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_DASH_PERCENT] = ACTIONS(374),
    [sym_integer_literal] = ACTIONS(376),
    [sym_float_literal] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [anon_sym_c_DQUOTE] = ACTIONS(374),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(374),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(374),
    [anon_sym_true] = ACTIONS(376),
    [anon_sym_false] = ACTIONS(376),
    [sym_null_literal] = ACTIONS(376),
    [sym_undefined_literal] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_BANG] = ACTIONS(374),
    [sym_identifier] = ACTIONS(376),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_threadlocal] = ACTIONS(360),
    [anon_sym_comptime] = ACTIONS(360),
    [anon_sym_const] = ACTIONS(360),
    [anon_sym_var] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_DASH_PERCENT] = ACTIONS(358),
    [sym_integer_literal] = ACTIONS(360),
    [sym_float_literal] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_c_DQUOTE] = ACTIONS(358),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(358),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(358),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_false] = ACTIONS(360),
    [sym_null_literal] = ACTIONS(360),
    [sym_undefined_literal] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [sym_identifier] = ACTIONS(360),
  },
  [111] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_threadlocal] = ACTIONS(376),
    [anon_sym_comptime] = ACTIONS(376),
    [anon_sym_const] = ACTIONS(376),
    [anon_sym_var] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_DASH_PERCENT] = ACTIONS(374),
    [sym_integer_literal] = ACTIONS(376),
    [sym_float_literal] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [anon_sym_c_DQUOTE] = ACTIONS(374),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(374),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(374),
    [anon_sym_true] = ACTIONS(376),
    [anon_sym_false] = ACTIONS(376),
    [sym_null_literal] = ACTIONS(376),
    [sym_undefined_literal] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(374),
    [anon_sym_BANG] = ACTIONS(374),
    [sym_identifier] = ACTIONS(376),
  },
  [112] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_threadlocal] = ACTIONS(372),
    [anon_sym_comptime] = ACTIONS(372),
    [anon_sym_const] = ACTIONS(372),
    [anon_sym_var] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_DASH_PERCENT] = ACTIONS(370),
    [sym_integer_literal] = ACTIONS(372),
    [sym_float_literal] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_c_DQUOTE] = ACTIONS(370),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(370),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_false] = ACTIONS(372),
    [sym_null_literal] = ACTIONS(372),
    [sym_undefined_literal] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [sym_identifier] = ACTIONS(372),
  },
  [113] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(366),
    [anon_sym_threadlocal] = ACTIONS(368),
    [anon_sym_comptime] = ACTIONS(368),
    [anon_sym_const] = ACTIONS(368),
    [anon_sym_var] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_DASH_PERCENT] = ACTIONS(366),
    [sym_integer_literal] = ACTIONS(368),
    [sym_float_literal] = ACTIONS(368),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_c_DQUOTE] = ACTIONS(366),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(366),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(366),
    [anon_sym_true] = ACTIONS(368),
    [anon_sym_false] = ACTIONS(368),
    [sym_null_literal] = ACTIONS(368),
    [sym_undefined_literal] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(366),
    [anon_sym_BANG] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
  },
  [114] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(362),
    [anon_sym_threadlocal] = ACTIONS(364),
    [anon_sym_comptime] = ACTIONS(364),
    [anon_sym_const] = ACTIONS(364),
    [anon_sym_var] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_DASH_PERCENT] = ACTIONS(362),
    [sym_integer_literal] = ACTIONS(364),
    [sym_float_literal] = ACTIONS(364),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_c_DQUOTE] = ACTIONS(362),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(362),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(364),
    [anon_sym_false] = ACTIONS(364),
    [sym_null_literal] = ACTIONS(364),
    [sym_undefined_literal] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
  },
  [115] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_DASH_PERCENT] = ACTIONS(380),
    [sym_integer_literal] = ACTIONS(378),
    [sym_float_literal] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [anon_sym_c_DQUOTE] = ACTIONS(380),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(380),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(378),
    [anon_sym_false] = ACTIONS(378),
    [sym_null_literal] = ACTIONS(378),
    [sym_undefined_literal] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [sym_identifier] = ACTIONS(378),
  },
  [116] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym_DASH_PERCENT] = ACTIONS(384),
    [sym_integer_literal] = ACTIONS(382),
    [sym_float_literal] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_c_DQUOTE] = ACTIONS(384),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(384),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(382),
    [anon_sym_false] = ACTIONS(382),
    [sym_null_literal] = ACTIONS(382),
    [sym_undefined_literal] = ACTIONS(382),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [sym_identifier] = ACTIONS(382),
  },
  [117] = {
    [aux_sym_string_literal_repeat1] = STATE(117),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(386),
    [anon_sym_DQUOTE2] = ACTIONS(389),
    [sym_escape_sequence] = ACTIONS(391),
  },
  [118] = {
    [aux_sym_string_literal_repeat1] = STATE(117),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(394),
    [anon_sym_DQUOTE2] = ACTIONS(396),
    [sym_escape_sequence] = ACTIONS(398),
  },
  [119] = {
    [sym_block] = STATE(36),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(400),
    [anon_sym_var] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [120] = {
    [sym_block] = STATE(36),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(402),
    [anon_sym_var] = ACTIONS(402),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [121] = {
    [aux_sym_string_literal_repeat1] = STATE(118),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(404),
    [anon_sym_DQUOTE2] = ACTIONS(406),
    [sym_escape_sequence] = ACTIONS(408),
  },
  [122] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [aux_sym_char_literal_token1] = ACTIONS(412),
    [sym_escape_sequence] = ACTIONS(414),
  },
  [123] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_EQ] = ACTIONS(418),
  },
  [124] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(402),
    [anon_sym_var] = ACTIONS(402),
  },
  [125] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(400),
    [anon_sym_var] = ACTIONS(400),
  },
  [126] = {
    [sym_block] = STATE(36),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [127] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(422),
  },
  [128] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(424),
    [anon_sym_EQ] = ACTIONS(426),
  },
  [129] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(430),
  },
  [130] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(432),
  },
  [131] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(434),
  },
  [132] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(436),
  },
  [133] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(438),
  },
  [134] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(440),
  },
  [135] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(442),
  },
  [136] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(444),
  },
  [137] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(446),
  },
  [138] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(448),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [140] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(452),
  },
  [141] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(454),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(107),
  [11] = {.count = 1, .reusable = false}, SHIFT(124),
  [13] = {.count = 1, .reusable = false}, SHIFT(120),
  [15] = {.count = 1, .reusable = false}, SHIFT(138),
  [17] = {.count = 1, .reusable = true}, SHIFT(116),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(116),
  [23] = {.count = 1, .reusable = false}, SHIFT(33),
  [25] = {.count = 1, .reusable = true}, SHIFT(122),
  [27] = {.count = 1, .reusable = true}, SHIFT(121),
  [29] = {.count = 1, .reusable = true}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(40),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [35] = {.count = 1, .reusable = false}, SHIFT(3),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [39] = {.count = 1, .reusable = false}, SHIFT(4),
  [41] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.count = 1, .reusable = false}, SHIFT(6),
  [48] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [56] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [98] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [104] = {.count = 1, .reusable = true}, SHIFT(103),
  [106] = {.count = 1, .reusable = false}, SHIFT(125),
  [108] = {.count = 1, .reusable = false}, SHIFT(119),
  [110] = {.count = 1, .reusable = false}, SHIFT(136),
  [112] = {.count = 1, .reusable = true}, SHIFT(34),
  [114] = {.count = 1, .reusable = false}, SHIFT(22),
  [116] = {.count = 1, .reusable = true}, SHIFT(2),
  [118] = {.count = 1, .reusable = false}, SHIFT(5),
  [120] = {.count = 1, .reusable = true}, SHIFT(30),
  [122] = {.count = 1, .reusable = false}, SHIFT(16),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [130] = {.count = 1, .reusable = true}, SHIFT(91),
  [132] = {.count = 1, .reusable = false}, SHIFT(93),
  [134] = {.count = 1, .reusable = false}, SHIFT(94),
  [136] = {.count = 1, .reusable = false}, SHIFT(95),
  [138] = {.count = 1, .reusable = true}, SHIFT(96),
  [140] = {.count = 1, .reusable = false}, SHIFT(96),
  [142] = {.count = 1, .reusable = false}, SHIFT(97),
  [144] = {.count = 1, .reusable = false}, SHIFT(98),
  [146] = {.count = 1, .reusable = false}, SHIFT(99),
  [148] = {.count = 1, .reusable = true}, SHIFT(98),
  [150] = {.count = 1, .reusable = false}, SHIFT(100),
  [152] = {.count = 1, .reusable = true}, SHIFT(100),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [158] = {.count = 1, .reusable = true}, SHIFT(104),
  [160] = {.count = 1, .reusable = false}, SHIFT(90),
  [162] = {.count = 1, .reusable = true}, SHIFT(45),
  [164] = {.count = 1, .reusable = false}, SHIFT(92),
  [166] = {.count = 1, .reusable = true}, SHIFT(101),
  [168] = {.count = 1, .reusable = true}, SHIFT(115),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [182] = {.count = 1, .reusable = true}, SHIFT(105),
  [184] = {.count = 1, .reusable = false}, SHIFT(76),
  [186] = {.count = 1, .reusable = true}, SHIFT(78),
  [188] = {.count = 1, .reusable = false}, SHIFT(80),
  [190] = {.count = 1, .reusable = false}, SHIFT(81),
  [192] = {.count = 1, .reusable = false}, SHIFT(83),
  [194] = {.count = 1, .reusable = false}, SHIFT(84),
  [196] = {.count = 1, .reusable = true}, SHIFT(85),
  [198] = {.count = 1, .reusable = false}, SHIFT(85),
  [200] = {.count = 1, .reusable = false}, SHIFT(67),
  [202] = {.count = 1, .reusable = false}, SHIFT(86),
  [204] = {.count = 1, .reusable = false}, SHIFT(89),
  [206] = {.count = 1, .reusable = true}, SHIFT(86),
  [208] = {.count = 1, .reusable = false}, SHIFT(68),
  [210] = {.count = 1, .reusable = true}, SHIFT(68),
  [212] = {.count = 1, .reusable = true}, SHIFT(88),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [222] = {.count = 1, .reusable = true}, SHIFT(110),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_comptime_block, 2),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_comptime_block, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(111),
  [234] = {.count = 1, .reusable = true}, SHIFT(112),
  [236] = {.count = 1, .reusable = true}, SHIFT(113),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [242] = {.count = 1, .reusable = true}, SHIFT(106),
  [244] = {.count = 1, .reusable = true}, SHIFT(108),
  [246] = {.count = 1, .reusable = true}, SHIFT(114),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [252] = {.count = 1, .reusable = true}, SHIFT(109),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 3),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [266] = {.count = 1, .reusable = false}, SHIFT(140),
  [268] = {.count = 1, .reusable = true}, SHIFT(63),
  [270] = {.count = 1, .reusable = false}, SHIFT(134),
  [272] = {.count = 1, .reusable = false}, SHIFT(130),
  [274] = {.count = 1, .reusable = false}, SHIFT(131),
  [276] = {.count = 1, .reusable = false}, SHIFT(135),
  [278] = {.count = 1, .reusable = false}, SHIFT(132),
  [280] = {.count = 1, .reusable = false}, SHIFT(126),
  [282] = {.count = 1, .reusable = false}, SHIFT(61),
  [284] = {.count = 1, .reusable = false}, SHIFT(46),
  [286] = {.count = 1, .reusable = false}, SHIFT(42),
  [288] = {.count = 1, .reusable = false}, SHIFT(44),
  [290] = {.count = 1, .reusable = false}, SHIFT(39),
  [292] = {.count = 1, .reusable = false}, SHIFT(38),
  [294] = {.count = 1, .reusable = false}, SHIFT(47),
  [296] = {.count = 1, .reusable = false}, SHIFT(37),
  [298] = {.count = 1, .reusable = false}, SHIFT(43),
  [300] = {.count = 1, .reusable = false}, SHIFT(54),
  [302] = {.count = 1, .reusable = false}, SHIFT(41),
  [304] = {.count = 1, .reusable = false}, SHIFT(55),
  [306] = {.count = 1, .reusable = false}, SHIFT(29),
  [308] = {.count = 1, .reusable = false}, SHIFT(56),
  [310] = {.count = 1, .reusable = false}, SHIFT(57),
  [312] = {.count = 1, .reusable = false}, SHIFT(32),
  [314] = {.count = 1, .reusable = false}, SHIFT(58),
  [316] = {.count = 1, .reusable = false}, SHIFT(59),
  [318] = {.count = 1, .reusable = false}, SHIFT(60),
  [320] = {.count = 1, .reusable = false}, SHIFT(53),
  [322] = {.count = 1, .reusable = false}, SHIFT(15),
  [324] = {.count = 1, .reusable = false}, SHIFT(35),
  [326] = {.count = 1, .reusable = false}, SHIFT(52),
  [328] = {.count = 1, .reusable = false}, SHIFT(19),
  [330] = {.count = 1, .reusable = false}, SHIFT(21),
  [332] = {.count = 1, .reusable = false}, SHIFT(13),
  [334] = {.count = 1, .reusable = false}, SHIFT(25),
  [336] = {.count = 1, .reusable = false}, SHIFT(23),
  [338] = {.count = 1, .reusable = false}, SHIFT(14),
  [340] = {.count = 1, .reusable = false}, SHIFT(28),
  [342] = {.count = 1, .reusable = false}, SHIFT(27),
  [344] = {.count = 1, .reusable = false}, SHIFT(26),
  [346] = {.count = 1, .reusable = false}, SHIFT(24),
  [348] = {.count = 1, .reusable = false}, SHIFT(17),
  [350] = {.count = 1, .reusable = false}, SHIFT(20),
  [352] = {.count = 1, .reusable = false}, SHIFT(18),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 8, .production_id = 8),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 8, .production_id = 8),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 7, .production_id = 7),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 7, .production_id = 7),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 6, .production_id = 6),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 6, .production_id = 6),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_operator, 1),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_operator, 1),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [386] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(117),
  [389] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(117),
  [394] = {.count = 1, .reusable = false}, SHIFT(117),
  [396] = {.count = 1, .reusable = true}, SHIFT(51),
  [398] = {.count = 1, .reusable = true}, SHIFT(117),
  [400] = {.count = 1, .reusable = true}, SHIFT(137),
  [402] = {.count = 1, .reusable = true}, SHIFT(141),
  [404] = {.count = 1, .reusable = false}, SHIFT(118),
  [406] = {.count = 1, .reusable = true}, SHIFT(31),
  [408] = {.count = 1, .reusable = true}, SHIFT(118),
  [410] = {.count = 1, .reusable = false}, SHIFT(48),
  [412] = {.count = 1, .reusable = false}, SHIFT(133),
  [414] = {.count = 1, .reusable = true}, SHIFT(133),
  [416] = {.count = 1, .reusable = true}, SHIFT(64),
  [418] = {.count = 1, .reusable = true}, SHIFT(73),
  [420] = {.count = 1, .reusable = true}, SHIFT(65),
  [422] = {.count = 1, .reusable = true}, SHIFT(72),
  [424] = {.count = 1, .reusable = true}, SHIFT(66),
  [426] = {.count = 1, .reusable = true}, SHIFT(69),
  [428] = {.count = 1, .reusable = true}, SHIFT(62),
  [430] = {.count = 1, .reusable = true}, SHIFT(74),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_optional_type, 2),
  [434] = {.count = 1, .reusable = true}, SHIFT(77),
  [436] = {.count = 1, .reusable = true}, SHIFT(79),
  [438] = {.count = 1, .reusable = true}, SHIFT(50),
  [440] = {.count = 1, .reusable = true}, SHIFT(71),
  [442] = {.count = 1, .reusable = true}, SHIFT(70),
  [444] = {.count = 1, .reusable = true}, SHIFT(129),
  [446] = {.count = 1, .reusable = true}, SHIFT(127),
  [448] = {.count = 1, .reusable = true}, SHIFT(123),
  [450] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [454] = {.count = 1, .reusable = true}, SHIFT(128),
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
