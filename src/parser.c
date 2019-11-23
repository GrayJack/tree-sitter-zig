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
#define STATE_COUNT 46
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_doc_comment = 1,
  sym_line_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_const = 4,
  anon_sym_var = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_i8 = 8,
  anon_sym_u8 = 9,
  anon_sym_i16 = 10,
  anon_sym_u16 = 11,
  anon_sym_i32 = 12,
  anon_sym_u32 = 13,
  anon_sym_i64 = 14,
  anon_sym_u64 = 15,
  anon_sym_i128 = 16,
  anon_sym_u128 = 17,
  anon_sym_isize = 18,
  anon_sym_usize = 19,
  anon_sym_c_short = 20,
  anon_sym_c_ushort = 21,
  anon_sym_c_int = 22,
  anon_sym_c_uint = 23,
  anon_sym_c_long = 24,
  anon_sym_c_ulong = 25,
  anon_sym_c_longlong = 26,
  anon_sym_c_ulonglong = 27,
  anon_sym_c_longdouble = 28,
  anon_sym_f16 = 29,
  anon_sym_f32 = 30,
  anon_sym_f64 = 31,
  anon_sym_f128 = 32,
  anon_sym_comptime_int = 33,
  anon_sym_comptime_float = 34,
  anon_sym_bool = 35,
  anon_sym_void = 36,
  anon_sym_noreturn = 37,
  anon_sym_type = 38,
  anon_sym_anyerror = 39,
  sym_integer_literal = 40,
  sym_float_literal = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_char_literal_token1 = 43,
  anon_sym_DQUOTE = 44,
  anon_sym_c_DQUOTE = 45,
  aux_sym_string_literal_token1 = 46,
  anon_sym_DQUOTE2 = 47,
  anon_sym_BSLASH_BSLASH = 48,
  anon_sym_c_BSLASH_BSLASH = 49,
  aux_sym_multiline_string_literal_token1 = 50,
  sym_escape_sequence = 51,
  anon_sym_true = 52,
  anon_sym_false = 53,
  sym_null_literal = 54,
  sym_undefined_literal = 55,
  anon_sym_PLUS = 56,
  anon_sym_PLUS_PERCENT = 57,
  anon_sym_DASH = 58,
  anon_sym_DASH_PERCENT = 59,
  anon_sym_STAR = 60,
  anon_sym_STAR_PERCENT = 61,
  anon_sym_SLASH = 62,
  anon_sym_PERCENT = 63,
  anon_sym_LT_LT = 64,
  anon_sym_GT_GT = 65,
  anon_sym_AMP = 66,
  anon_sym_PIPE = 67,
  anon_sym_CARET = 68,
  anon_sym_PIPE_PIPE = 69,
  anon_sym_orelse = 70,
  anon_sym_and = 71,
  anon_sym_or = 72,
  anon_sym_PLUS_PLUS = 73,
  anon_sym_STAR_STAR = 74,
  anon_sym_PLUS_EQ = 75,
  anon_sym_DASH_EQ = 76,
  anon_sym_STAR_EQ = 77,
  anon_sym_PLUS_PERCENT_EQ = 78,
  anon_sym_DASH_PERCENT_EQ = 79,
  anon_sym_STAR_PERCENT_EQ = 80,
  anon_sym_SLASH_EQ = 81,
  anon_sym_PERCENT_EQ = 82,
  anon_sym_AMP_EQ = 83,
  anon_sym_PIPE_EQ = 84,
  anon_sym_CARET_EQ = 85,
  anon_sym_LT_LT_EQ = 86,
  anon_sym_GT_GT_EQ = 87,
  anon_sym_EQ_EQ = 88,
  anon_sym_BANG_EQ = 89,
  anon_sym_LT = 90,
  anon_sym_LT_EQ = 91,
  anon_sym_GT = 92,
  anon_sym_GT_EQ = 93,
  anon_sym_TILDE = 94,
  anon_sym_BANG = 95,
  sym_identifier = 96,
  sym_source_file = 97,
  sym__statement = 98,
  sym__expression_statement = 99,
  sym__declaration_statement = 100,
  sym__expression = 101,
  sym_empty_statement = 102,
  sym_assignment_statement = 103,
  sym__type = 104,
  sym_primitive_type = 105,
  sym_assignment_expression = 106,
  sym_compound_assignment_expr = 107,
  sym_unary_expression = 108,
  sym_binary_expression = 109,
  sym_comparison_expression = 110,
  sym__literals = 111,
  sym_char_literal = 112,
  sym_string_literal = 113,
  sym_multiline_string_literal = 114,
  sym_boolean_literal = 115,
  sym_binary_operator = 116,
  sym_assignment_operator = 117,
  sym_comparison_operator = 118,
  sym_unary_operator = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_string_literal_repeat1 = 121,
  aux_sym_multiline_string_literal_repeat1 = 122,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PERCENT] = "+%",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_PERCENT] = "-%",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_PERCENT] = "*%",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_orelse] = "orelse",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_STAR_STAR] = "**",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
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
  [sym_assignment_expression] = "assignment_expression",
  [sym_compound_assignment_expr] = "compound_assignment_expr",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym__literals] = "_literals",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_multiline_string_literal] = "multiline_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_binary_operator] = "binary_operator",
  [sym_assignment_operator] = "assignment_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_unary_operator] = "unary_operator",
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [sym_comparison_expression] = {
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
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
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
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
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
    {field_expression, 5},
    {field_name, 1},
    {field_type, 3},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(360);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(350);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '~') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(256);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(256);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '~') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(350);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(201);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(167);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(169);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == '6') ADVANCE(163);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '6') ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(205);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(171);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(207);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(175);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 28:
      if (lookahead == '\\') ADVANCE(252);
      END_STATE();
    case 29:
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'z') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'z') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 132:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(360);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '%') ADVANCE(296);
      if (lookahead == '&') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(350);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '~') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == 'v') ADVANCE(381);
      if (lookahead == '~') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(145);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(149);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(149);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_c_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_c_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_c_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_anyerror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'X') ADVANCE(136);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(230);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(241);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_c_DQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_c_BSLASH_BSLASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(256);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '+') ADVANCE(281);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_undefined_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(282);
      if (lookahead == '+') ADVANCE(316);
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(283);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '=') ADVANCE(322);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(292);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(342);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(344);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(336);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '|') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '|') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(340);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_orelse);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(298);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(299);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(366);
      if (lookahead == '3') ADVANCE(367);
      if (lookahead == '6') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(370);
      if (lookahead == '3') ADVANCE(368);
      if (lookahead == '6') ADVANCE(373);
      if (lookahead == '8') ADVANCE(160);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(371);
      if (lookahead == '3') ADVANCE(369);
      if (lookahead == '6') ADVANCE(374);
      if (lookahead == '8') ADVANCE(162);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(375);
      if (lookahead == '6') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(376);
      if (lookahead == '6') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(377);
      if (lookahead == '6') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 's') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(476);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 142},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 142},
  [31] = {.lex_state = 142},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_orelse] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__statement] = STATE(19),
    [sym__expression_statement] = STATE(19),
    [sym__declaration_statement] = STATE(19),
    [sym__expression] = STATE(6),
    [sym_empty_statement] = STATE(19),
    [sym_assignment_statement] = STATE(19),
    [sym_assignment_expression] = STATE(6),
    [sym_compound_assignment_expr] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_comparison_expression] = STATE(6),
    [sym__literals] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_string_literal] = STATE(6),
    [sym_multiline_string_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(13),
    [sym_undefined_literal] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(13),
  },
  [2] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PERCENT] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_PERCENT] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_STAR_PERCENT] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_orelse] = ACTIONS(27),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_PLUS_EQ] = ACTIONS(27),
    [anon_sym_DASH_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_SLASH_EQ] = ACTIONS(27),
    [anon_sym_PERCENT_EQ] = ACTIONS(27),
    [anon_sym_AMP_EQ] = ACTIONS(27),
    [anon_sym_PIPE_EQ] = ACTIONS(27),
    [anon_sym_CARET_EQ] = ACTIONS(27),
    [anon_sym_LT_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_GT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
  },
  [3] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_PLUS_PERCENT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_DASH_PERCENT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_STAR_PERCENT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_orelse] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_PLUS_EQ] = ACTIONS(39),
    [anon_sym_DASH_EQ] = ACTIONS(39),
    [anon_sym_STAR_EQ] = ACTIONS(39),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_SLASH_EQ] = ACTIONS(39),
    [anon_sym_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_AMP_EQ] = ACTIONS(39),
    [anon_sym_PIPE_EQ] = ACTIONS(39),
    [anon_sym_CARET_EQ] = ACTIONS(39),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_GT_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
  },
  [4] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(11),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(47),
    [sym_escape_sequence] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_PLUS_PERCENT] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_DASH_PERCENT] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_STAR_PERCENT] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_CARET] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_orelse] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_PLUS_PLUS] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(45),
    [anon_sym_PLUS_EQ] = ACTIONS(45),
    [anon_sym_DASH_EQ] = ACTIONS(45),
    [anon_sym_STAR_EQ] = ACTIONS(45),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(45),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(45),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(45),
    [anon_sym_SLASH_EQ] = ACTIONS(45),
    [anon_sym_PERCENT_EQ] = ACTIONS(45),
    [anon_sym_AMP_EQ] = ACTIONS(45),
    [anon_sym_PIPE_EQ] = ACTIONS(45),
    [anon_sym_CARET_EQ] = ACTIONS(45),
    [anon_sym_LT_LT_EQ] = ACTIONS(45),
    [anon_sym_GT_GT_EQ] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
  },
  [5] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_PLUS_PERCENT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_DASH_PERCENT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_STAR_PERCENT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_orelse] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_PLUS_EQ] = ACTIONS(39),
    [anon_sym_DASH_EQ] = ACTIONS(39),
    [anon_sym_STAR_EQ] = ACTIONS(39),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_SLASH_EQ] = ACTIONS(39),
    [anon_sym_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_AMP_EQ] = ACTIONS(39),
    [anon_sym_PIPE_EQ] = ACTIONS(39),
    [anon_sym_CARET_EQ] = ACTIONS(39),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_GT_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
  },
  [6] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_PLUS_PERCENT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_DASH_PERCENT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_STAR_PERCENT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_orelse] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_STAR_STAR] = ACTIONS(37),
    [anon_sym_PLUS_EQ] = ACTIONS(39),
    [anon_sym_DASH_EQ] = ACTIONS(39),
    [anon_sym_STAR_EQ] = ACTIONS(39),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_SLASH_EQ] = ACTIONS(39),
    [anon_sym_PERCENT_EQ] = ACTIONS(39),
    [anon_sym_AMP_EQ] = ACTIONS(39),
    [anon_sym_PIPE_EQ] = ACTIONS(39),
    [anon_sym_CARET_EQ] = ACTIONS(39),
    [anon_sym_LT_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_GT_EQ] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
  },
  [7] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_PLUS_PERCENT] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_DASH_PERCENT] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_STAR_PERCENT] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_orelse] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_PLUS_PLUS] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(53),
    [anon_sym_PLUS_EQ] = ACTIONS(53),
    [anon_sym_DASH_EQ] = ACTIONS(53),
    [anon_sym_STAR_EQ] = ACTIONS(53),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(53),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(53),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(53),
    [anon_sym_SLASH_EQ] = ACTIONS(53),
    [anon_sym_PERCENT_EQ] = ACTIONS(53),
    [anon_sym_AMP_EQ] = ACTIONS(53),
    [anon_sym_PIPE_EQ] = ACTIONS(53),
    [anon_sym_CARET_EQ] = ACTIONS(53),
    [anon_sym_LT_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_GT_EQ] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(53),
  },
  [8] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_PLUS_PERCENT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_DASH_PERCENT] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_STAR_PERCENT] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_orelse] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(57),
    [anon_sym_PLUS_EQ] = ACTIONS(57),
    [anon_sym_DASH_EQ] = ACTIONS(57),
    [anon_sym_STAR_EQ] = ACTIONS(57),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(57),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(57),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(57),
    [anon_sym_SLASH_EQ] = ACTIONS(57),
    [anon_sym_PERCENT_EQ] = ACTIONS(57),
    [anon_sym_AMP_EQ] = ACTIONS(57),
    [anon_sym_PIPE_EQ] = ACTIONS(57),
    [anon_sym_CARET_EQ] = ACTIONS(57),
    [anon_sym_LT_LT_EQ] = ACTIONS(57),
    [anon_sym_GT_GT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(57),
  },
  [9] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(9),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(61),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(63),
    [sym_escape_sequence] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_PLUS_PERCENT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_DASH_PERCENT] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_STAR_PERCENT] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_orelse] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_STAR_STAR] = ACTIONS(61),
    [anon_sym_PLUS_EQ] = ACTIONS(61),
    [anon_sym_DASH_EQ] = ACTIONS(61),
    [anon_sym_STAR_EQ] = ACTIONS(61),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_SLASH_EQ] = ACTIONS(61),
    [anon_sym_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_AMP_EQ] = ACTIONS(61),
    [anon_sym_PIPE_EQ] = ACTIONS(61),
    [anon_sym_CARET_EQ] = ACTIONS(61),
    [anon_sym_LT_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_GT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
  },
  [10] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_PLUS_PERCENT] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_DASH_PERCENT] = ACTIONS(68),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_STAR_PERCENT] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_LT_LT] = ACTIONS(68),
    [anon_sym_GT_GT] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(66),
    [anon_sym_orelse] = ACTIONS(66),
    [anon_sym_and] = ACTIONS(66),
    [anon_sym_or] = ACTIONS(68),
    [anon_sym_PLUS_PLUS] = ACTIONS(66),
    [anon_sym_STAR_STAR] = ACTIONS(66),
    [anon_sym_PLUS_EQ] = ACTIONS(66),
    [anon_sym_DASH_EQ] = ACTIONS(66),
    [anon_sym_STAR_EQ] = ACTIONS(66),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(66),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(66),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(66),
    [anon_sym_SLASH_EQ] = ACTIONS(66),
    [anon_sym_PERCENT_EQ] = ACTIONS(66),
    [anon_sym_AMP_EQ] = ACTIONS(66),
    [anon_sym_PIPE_EQ] = ACTIONS(66),
    [anon_sym_CARET_EQ] = ACTIONS(66),
    [anon_sym_LT_LT_EQ] = ACTIONS(66),
    [anon_sym_GT_GT_EQ] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(66),
    [anon_sym_BANG_EQ] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(66),
  },
  [11] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(9),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(72),
    [sym_escape_sequence] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_PLUS_PERCENT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_DASH_PERCENT] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_STAR_PERCENT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_orelse] = ACTIONS(70),
    [anon_sym_and] = ACTIONS(70),
    [anon_sym_or] = ACTIONS(70),
    [anon_sym_PLUS_PLUS] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(70),
    [anon_sym_PLUS_EQ] = ACTIONS(70),
    [anon_sym_DASH_EQ] = ACTIONS(70),
    [anon_sym_STAR_EQ] = ACTIONS(70),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(70),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(70),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(70),
    [anon_sym_SLASH_EQ] = ACTIONS(70),
    [anon_sym_PERCENT_EQ] = ACTIONS(70),
    [anon_sym_AMP_EQ] = ACTIONS(70),
    [anon_sym_PIPE_EQ] = ACTIONS(70),
    [anon_sym_CARET_EQ] = ACTIONS(70),
    [anon_sym_LT_LT_EQ] = ACTIONS(70),
    [anon_sym_GT_GT_EQ] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(70),
    [anon_sym_BANG_EQ] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_LT_EQ] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_GT_EQ] = ACTIONS(70),
  },
  [12] = {
    [sym_binary_operator] = STATE(23),
    [sym_assignment_operator] = STATE(24),
    [sym_comparison_operator] = STATE(25),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_PLUS_PERCENT] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_DASH_PERCENT] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_STAR_PERCENT] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(74),
    [anon_sym_orelse] = ACTIONS(74),
    [anon_sym_and] = ACTIONS(74),
    [anon_sym_or] = ACTIONS(76),
    [anon_sym_PLUS_PLUS] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(74),
    [anon_sym_PLUS_EQ] = ACTIONS(74),
    [anon_sym_DASH_EQ] = ACTIONS(74),
    [anon_sym_STAR_EQ] = ACTIONS(74),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(74),
    [anon_sym_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_AMP_EQ] = ACTIONS(74),
    [anon_sym_PIPE_EQ] = ACTIONS(74),
    [anon_sym_CARET_EQ] = ACTIONS(74),
    [anon_sym_LT_LT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(74),
    [anon_sym_BANG_EQ] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_LT_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_GT_EQ] = ACTIONS(74),
  },
  [13] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_PLUS_PERCENT] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_DASH_PERCENT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_STAR_PERCENT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(78),
    [anon_sym_orelse] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(78),
    [anon_sym_or] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [anon_sym_PLUS_EQ] = ACTIONS(78),
    [anon_sym_DASH_EQ] = ACTIONS(78),
    [anon_sym_STAR_EQ] = ACTIONS(78),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(78),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(78),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [anon_sym_PERCENT_EQ] = ACTIONS(78),
    [anon_sym_AMP_EQ] = ACTIONS(78),
    [anon_sym_PIPE_EQ] = ACTIONS(78),
    [anon_sym_CARET_EQ] = ACTIONS(78),
    [anon_sym_LT_LT_EQ] = ACTIONS(78),
    [anon_sym_GT_GT_EQ] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_GT_EQ] = ACTIONS(78),
  },
  [14] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_PLUS_PERCENT] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_DASH_PERCENT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_STAR_PERCENT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_orelse] = ACTIONS(82),
    [anon_sym_and] = ACTIONS(82),
    [anon_sym_or] = ACTIONS(84),
    [anon_sym_PLUS_PLUS] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(82),
    [anon_sym_DASH_EQ] = ACTIONS(82),
    [anon_sym_STAR_EQ] = ACTIONS(82),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(82),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(82),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [anon_sym_PERCENT_EQ] = ACTIONS(82),
    [anon_sym_AMP_EQ] = ACTIONS(82),
    [anon_sym_PIPE_EQ] = ACTIONS(82),
    [anon_sym_CARET_EQ] = ACTIONS(82),
    [anon_sym_LT_LT_EQ] = ACTIONS(82),
    [anon_sym_GT_GT_EQ] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(82),
  },
  [15] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_PLUS_PERCENT] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_DASH_PERCENT] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_STAR_PERCENT] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_LT_LT] = ACTIONS(88),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_orelse] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(86),
    [anon_sym_or] = ACTIONS(88),
    [anon_sym_PLUS_PLUS] = ACTIONS(86),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [anon_sym_PLUS_EQ] = ACTIONS(86),
    [anon_sym_DASH_EQ] = ACTIONS(86),
    [anon_sym_STAR_EQ] = ACTIONS(86),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [anon_sym_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_AMP_EQ] = ACTIONS(86),
    [anon_sym_PIPE_EQ] = ACTIONS(86),
    [anon_sym_CARET_EQ] = ACTIONS(86),
    [anon_sym_LT_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_GT_EQ] = ACTIONS(86),
  },
  [16] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_PLUS_PERCENT] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_DASH_PERCENT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_STAR_PERCENT] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_LT_LT] = ACTIONS(92),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(90),
    [anon_sym_orelse] = ACTIONS(90),
    [anon_sym_and] = ACTIONS(90),
    [anon_sym_or] = ACTIONS(92),
    [anon_sym_PLUS_PLUS] = ACTIONS(90),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(90),
  },
  [17] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_PLUS_PERCENT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_DASH_PERCENT] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_STAR_PERCENT] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_LT_LT] = ACTIONS(96),
    [anon_sym_GT_GT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(94),
    [anon_sym_orelse] = ACTIONS(94),
    [anon_sym_and] = ACTIONS(94),
    [anon_sym_or] = ACTIONS(96),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_PLUS_EQ] = ACTIONS(94),
    [anon_sym_DASH_EQ] = ACTIONS(94),
    [anon_sym_STAR_EQ] = ACTIONS(94),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [anon_sym_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_AMP_EQ] = ACTIONS(94),
    [anon_sym_PIPE_EQ] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(94),
    [anon_sym_LT_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(94),
  },
  [18] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(18),
    [sym__declaration_statement] = STATE(18),
    [sym__expression] = STATE(6),
    [sym_empty_statement] = STATE(18),
    [sym_assignment_statement] = STATE(18),
    [sym_assignment_expression] = STATE(6),
    [sym_compound_assignment_expr] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_comparison_expression] = STATE(6),
    [sym__literals] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_string_literal] = STATE(6),
    [sym_multiline_string_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_const] = ACTIONS(103),
    [anon_sym_var] = ACTIONS(103),
    [sym_integer_literal] = ACTIONS(106),
    [sym_float_literal] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_c_DQUOTE] = ACTIONS(112),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(115),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [sym_null_literal] = ACTIONS(106),
    [sym_undefined_literal] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_DASH_PERCENT] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_identifier] = ACTIONS(106),
  },
  [19] = {
    [sym__statement] = STATE(18),
    [sym__expression_statement] = STATE(18),
    [sym__declaration_statement] = STATE(18),
    [sym__expression] = STATE(6),
    [sym_empty_statement] = STATE(18),
    [sym_assignment_statement] = STATE(18),
    [sym_assignment_expression] = STATE(6),
    [sym_compound_assignment_expr] = STATE(6),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_comparison_expression] = STATE(6),
    [sym__literals] = STATE(6),
    [sym_char_literal] = STATE(6),
    [sym_string_literal] = STATE(6),
    [sym_multiline_string_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_unary_operator] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(13),
    [sym_undefined_literal] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(13),
  },
  [20] = {
    [sym__type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(129),
    [anon_sym_u8] = ACTIONS(129),
    [anon_sym_i16] = ACTIONS(129),
    [anon_sym_u16] = ACTIONS(129),
    [anon_sym_i32] = ACTIONS(129),
    [anon_sym_u32] = ACTIONS(129),
    [anon_sym_i64] = ACTIONS(129),
    [anon_sym_u64] = ACTIONS(129),
    [anon_sym_i128] = ACTIONS(129),
    [anon_sym_u128] = ACTIONS(129),
    [anon_sym_isize] = ACTIONS(129),
    [anon_sym_usize] = ACTIONS(129),
    [anon_sym_c_short] = ACTIONS(129),
    [anon_sym_c_ushort] = ACTIONS(129),
    [anon_sym_c_int] = ACTIONS(129),
    [anon_sym_c_uint] = ACTIONS(129),
    [anon_sym_c_long] = ACTIONS(129),
    [anon_sym_c_ulong] = ACTIONS(129),
    [anon_sym_c_longlong] = ACTIONS(129),
    [anon_sym_c_ulonglong] = ACTIONS(129),
    [anon_sym_c_longdouble] = ACTIONS(129),
    [anon_sym_f16] = ACTIONS(129),
    [anon_sym_f32] = ACTIONS(129),
    [anon_sym_f64] = ACTIONS(129),
    [anon_sym_f128] = ACTIONS(129),
    [anon_sym_comptime_int] = ACTIONS(129),
    [anon_sym_comptime_float] = ACTIONS(129),
    [anon_sym_bool] = ACTIONS(129),
    [anon_sym_void] = ACTIONS(129),
    [anon_sym_noreturn] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_anyerror] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
  },
  [21] = {
    [sym__expression] = STATE(3),
    [sym_assignment_expression] = STATE(3),
    [sym_compound_assignment_expr] = STATE(3),
    [sym_unary_expression] = STATE(3),
    [sym_binary_expression] = STATE(3),
    [sym_comparison_expression] = STATE(3),
    [sym__literals] = STATE(3),
    [sym_char_literal] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym_multiline_string_literal] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(133),
    [sym_float_literal] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(133),
    [sym_undefined_literal] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(133),
  },
  [22] = {
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_compound_assignment_expr] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_comparison_expression] = STATE(12),
    [sym__literals] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_string_literal] = STATE(12),
    [sym_multiline_string_literal] = STATE(12),
    [sym_boolean_literal] = STATE(12),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(135),
    [sym_undefined_literal] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(135),
  },
  [23] = {
    [sym__expression] = STATE(10),
    [sym_assignment_expression] = STATE(10),
    [sym_compound_assignment_expr] = STATE(10),
    [sym_unary_expression] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_comparison_expression] = STATE(10),
    [sym__literals] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_string_literal] = STATE(10),
    [sym_multiline_string_literal] = STATE(10),
    [sym_boolean_literal] = STATE(10),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(137),
    [sym_float_literal] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(137),
    [sym_undefined_literal] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(137),
  },
  [24] = {
    [sym__expression] = STATE(2),
    [sym_assignment_expression] = STATE(2),
    [sym_compound_assignment_expr] = STATE(2),
    [sym_unary_expression] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym_comparison_expression] = STATE(2),
    [sym__literals] = STATE(2),
    [sym_char_literal] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym_multiline_string_literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(139),
    [sym_float_literal] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(139),
    [sym_undefined_literal] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(139),
  },
  [25] = {
    [sym__expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_compound_assignment_expr] = STATE(8),
    [sym_unary_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_comparison_expression] = STATE(8),
    [sym__literals] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_string_literal] = STATE(8),
    [sym_multiline_string_literal] = STATE(8),
    [sym_boolean_literal] = STATE(8),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(141),
    [sym_undefined_literal] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(141),
  },
  [26] = {
    [sym__expression] = STATE(7),
    [sym_assignment_expression] = STATE(7),
    [sym_compound_assignment_expr] = STATE(7),
    [sym_unary_expression] = STATE(7),
    [sym_binary_expression] = STATE(7),
    [sym_comparison_expression] = STATE(7),
    [sym__literals] = STATE(7),
    [sym_char_literal] = STATE(7),
    [sym_string_literal] = STATE(7),
    [sym_multiline_string_literal] = STATE(7),
    [sym_boolean_literal] = STATE(7),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(143),
    [sym_undefined_literal] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(143),
  },
  [27] = {
    [sym__expression] = STATE(5),
    [sym_assignment_expression] = STATE(5),
    [sym_compound_assignment_expr] = STATE(5),
    [sym_unary_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_comparison_expression] = STATE(5),
    [sym__literals] = STATE(5),
    [sym_char_literal] = STATE(5),
    [sym_string_literal] = STATE(5),
    [sym_multiline_string_literal] = STATE(5),
    [sym_boolean_literal] = STATE(5),
    [sym_unary_operator] = STATE(26),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(145),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_c_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_null_literal] = ACTIONS(145),
    [sym_undefined_literal] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_DASH_PERCENT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [sym_identifier] = ACTIONS(145),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [sym_integer_literal] = ACTIONS(149),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_c_DQUOTE] = ACTIONS(147),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(147),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [sym_null_literal] = ACTIONS(149),
    [sym_undefined_literal] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_DASH_PERCENT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(153),
    [anon_sym_var] = ACTIONS(153),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_c_DQUOTE] = ACTIONS(151),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(151),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [sym_null_literal] = ACTIONS(153),
    [sym_undefined_literal] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_DASH_PERCENT] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(157),
    [anon_sym_var] = ACTIONS(157),
    [sym_integer_literal] = ACTIONS(157),
    [sym_float_literal] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_c_DQUOTE] = ACTIONS(155),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(155),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [sym_null_literal] = ACTIONS(157),
    [sym_undefined_literal] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_DASH_PERCENT] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [sym_integer_literal] = ACTIONS(161),
    [sym_float_literal] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_c_DQUOTE] = ACTIONS(159),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(159),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [sym_null_literal] = ACTIONS(161),
    [sym_undefined_literal] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_DASH_PERCENT] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [32] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_c_DQUOTE] = ACTIONS(165),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(165),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [sym_null_literal] = ACTIONS(163),
    [sym_undefined_literal] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_DASH_PERCENT] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [sym_identifier] = ACTIONS(163),
  },
  [33] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(167),
    [sym_float_literal] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_c_DQUOTE] = ACTIONS(169),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(169),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [sym_null_literal] = ACTIONS(167),
    [sym_undefined_literal] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DASH_PERCENT] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [sym_identifier] = ACTIONS(167),
  },
  [34] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(171),
    [sym_float_literal] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_c_DQUOTE] = ACTIONS(173),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(173),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [sym_null_literal] = ACTIONS(171),
    [sym_undefined_literal] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_DASH_PERCENT] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym_identifier] = ACTIONS(171),
  },
  [35] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(175),
    [sym_float_literal] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_c_DQUOTE] = ACTIONS(177),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(177),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [sym_null_literal] = ACTIONS(175),
    [sym_undefined_literal] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_DASH_PERCENT] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [sym_identifier] = ACTIONS(175),
  },
  [36] = {
    [aux_sym_string_literal_repeat1] = STATE(36),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(179),
    [anon_sym_DQUOTE2] = ACTIONS(182),
    [sym_escape_sequence] = ACTIONS(184),
  },
  [37] = {
    [aux_sym_string_literal_repeat1] = STATE(36),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(187),
    [anon_sym_DQUOTE2] = ACTIONS(189),
    [sym_escape_sequence] = ACTIONS(191),
  },
  [38] = {
    [aux_sym_string_literal_repeat1] = STATE(37),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(193),
    [anon_sym_DQUOTE2] = ACTIONS(195),
    [sym_escape_sequence] = ACTIONS(197),
  },
  [39] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [aux_sym_char_literal_token1] = ACTIONS(201),
    [sym_escape_sequence] = ACTIONS(203),
  },
  [40] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
  },
  [41] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(209),
  },
  [42] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(211),
  },
  [43] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(213),
  },
  [44] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(215),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(217),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(29),
  [11] = {.count = 1, .reusable = false}, SHIFT(41),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(39),
  [17] = {.count = 1, .reusable = true}, SHIFT(38),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = false}, SHIFT(13),
  [23] = {.count = 1, .reusable = false}, SHIFT(35),
  [25] = {.count = 1, .reusable = true}, SHIFT(35),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 3),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 3),
  [31] = {.count = 1, .reusable = true}, SHIFT(31),
  [33] = {.count = 1, .reusable = false}, SHIFT(22),
  [35] = {.count = 1, .reusable = false}, SHIFT(34),
  [37] = {.count = 1, .reusable = true}, SHIFT(34),
  [39] = {.count = 1, .reusable = true}, SHIFT(32),
  [41] = {.count = 1, .reusable = true}, SHIFT(33),
  [43] = {.count = 1, .reusable = false}, SHIFT(33),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(11),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, SHIFT(28),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_expression, 3, .production_id = 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_expression, 3, .production_id = 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(9),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [72] = {.count = 1, .reusable = false}, SHIFT(9),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [129] = {.count = 1, .reusable = false}, SHIFT(43),
  [131] = {.count = 1, .reusable = false}, SHIFT(44),
  [133] = {.count = 1, .reusable = false}, SHIFT(3),
  [135] = {.count = 1, .reusable = false}, SHIFT(12),
  [137] = {.count = 1, .reusable = false}, SHIFT(10),
  [139] = {.count = 1, .reusable = false}, SHIFT(2),
  [141] = {.count = 1, .reusable = false}, SHIFT(8),
  [143] = {.count = 1, .reusable = false}, SHIFT(7),
  [145] = {.count = 1, .reusable = false}, SHIFT(5),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 5, .production_id = 4),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 5, .production_id = 4),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 7, .production_id = 5),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 7, .production_id = 5),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_operator, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_operator, 1),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_comparison_operator, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_comparison_operator, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_binary_operator, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 1),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(36),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(36),
  [187] = {.count = 1, .reusable = false}, SHIFT(36),
  [189] = {.count = 1, .reusable = true}, SHIFT(14),
  [191] = {.count = 1, .reusable = true}, SHIFT(36),
  [193] = {.count = 1, .reusable = false}, SHIFT(37),
  [195] = {.count = 1, .reusable = true}, SHIFT(16),
  [197] = {.count = 1, .reusable = true}, SHIFT(37),
  [199] = {.count = 1, .reusable = false}, SHIFT(15),
  [201] = {.count = 1, .reusable = false}, SHIFT(42),
  [203] = {.count = 1, .reusable = true}, SHIFT(42),
  [205] = {.count = 1, .reusable = true}, SHIFT(20),
  [207] = {.count = 1, .reusable = true}, SHIFT(27),
  [209] = {.count = 1, .reusable = true}, SHIFT(40),
  [211] = {.count = 1, .reusable = true}, SHIFT(17),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(21),
  [217] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
