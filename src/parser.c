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
#define STATE_COUNT 284
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 2
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
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
  anon_sym_STAR = 44,
  anon_sym_RBRACK = 45,
  anon_sym_volatile = 46,
  anon_sym_allowzero = 47,
  anon_sym_align = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_promise = 51,
  anon_sym_DASH = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  anon_sym_AMP = 55,
  anon_sym_DOT_STAR = 56,
  anon_sym_DOT_LBRACE = 57,
  anon_sym_COMMA = 58,
  anon_sym_and = 59,
  anon_sym_or = 60,
  anon_sym_PIPE = 61,
  anon_sym_CARET = 62,
  anon_sym_EQ_EQ = 63,
  anon_sym_BANG_EQ = 64,
  anon_sym_LT = 65,
  anon_sym_LT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_GT_EQ = 68,
  anon_sym_LT_LT = 69,
  anon_sym_GT_GT = 70,
  anon_sym_PLUS = 71,
  anon_sym_PLUS_PLUS = 72,
  anon_sym_PLUS_PERCENT = 73,
  anon_sym_DASH_PERCENT = 74,
  anon_sym_SLASH = 75,
  anon_sym_PERCENT = 76,
  anon_sym_STAR_STAR = 77,
  anon_sym_STAR_PERCENT = 78,
  anon_sym_PIPE_PIPE = 79,
  anon_sym_orelse = 80,
  anon_sym_catch = 81,
  sym_integer_literal = 82,
  sym_float_literal = 83,
  anon_sym_SQUOTE = 84,
  aux_sym_char_literal_token1 = 85,
  anon_sym_DQUOTE = 86,
  anon_sym_c_DQUOTE = 87,
  aux_sym_string_literal_token1 = 88,
  anon_sym_DQUOTE2 = 89,
  anon_sym_BSLASH_BSLASH = 90,
  anon_sym_c_BSLASH_BSLASH = 91,
  aux_sym_multiline_string_literal_token1 = 92,
  sym_escape_sequence = 93,
  anon_sym_true = 94,
  anon_sym_false = 95,
  sym_null_literal = 96,
  sym_undefined_literal = 97,
  anon_sym_PLUS_EQ = 98,
  anon_sym_DASH_EQ = 99,
  anon_sym_STAR_EQ = 100,
  anon_sym_PLUS_PERCENT_EQ = 101,
  anon_sym_DASH_PERCENT_EQ = 102,
  anon_sym_STAR_PERCENT_EQ = 103,
  anon_sym_SLASH_EQ = 104,
  anon_sym_PERCENT_EQ = 105,
  anon_sym_AMP_EQ = 106,
  anon_sym_PIPE_EQ = 107,
  anon_sym_CARET_EQ = 108,
  anon_sym_LT_LT_EQ = 109,
  anon_sym_GT_GT_EQ = 110,
  anon_sym_TILDE = 111,
  anon_sym_BANG = 112,
  sym_identifier = 113,
  sym_source_file = 114,
  sym__statement = 115,
  sym__expression_statement = 116,
  sym__declaration_statement = 117,
  sym__expression = 118,
  sym_empty_statement = 119,
  sym_assignment_statement = 120,
  sym__type = 121,
  sym_primitive_type = 122,
  sym_optional_type = 123,
  sym_array_type = 124,
  sym_pointer_type = 125,
  sym_type_prefix = 126,
  sym_comptime_block = 127,
  sym_block = 128,
  sym_reference_expression = 129,
  sym_dereference_expression = 130,
  sym_array_expression = 131,
  sym_anonymous_array_expr = 132,
  sym_array_values = 133,
  sym_assignment_expression = 134,
  sym_compound_assignment_expr = 135,
  sym_unary_expression = 136,
  sym_binary_expression = 137,
  sym__literals = 138,
  sym_char_literal = 139,
  sym_string_literal = 140,
  sym_multiline_string_literal = 141,
  sym_boolean_literal = 142,
  sym_assignment_operator = 143,
  sym_unary_operator = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_array_type_repeat1 = 146,
  aux_sym_array_type_repeat2 = 147,
  aux_sym_array_expression_repeat1 = 148,
  aux_sym_anonymous_array_expr_repeat1 = 149,
  aux_sym_string_literal_repeat1 = 150,
  aux_sym_multiline_string_literal_repeat1 = 151,
  alias_sym_binary_operator = 152,
  alias_sym_pointer = 153,
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
  [anon_sym_STAR] = "*",
  [anon_sym_RBRACK] = "]",
  [anon_sym_volatile] = "volatile",
  [anon_sym_allowzero] = "allowzero",
  [anon_sym_align] = "align",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_promise] = "promise",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_DOT_LBRACE] = ".{",
  [anon_sym_COMMA] = ",",
  [anon_sym_and] = "binary_operator",
  [anon_sym_or] = "binary_operator",
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
  [anon_sym_PLUS_PLUS] = "binary_operator",
  [anon_sym_PLUS_PERCENT] = "binary_operator",
  [anon_sym_DASH_PERCENT] = "-%",
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
  [sym_pointer_type] = "pointer_type",
  [sym_type_prefix] = "type_prefix",
  [sym_comptime_block] = "comptime_block",
  [sym_block] = "block",
  [sym_reference_expression] = "reference_expression",
  [sym_dereference_expression] = "dereference_expression",
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
  [aux_sym_array_type_repeat2] = "array_type_repeat2",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_anonymous_array_expr_repeat1] = "anonymous_array_expr_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_multiline_string_literal_repeat1] = "multiline_string_literal_repeat1",
  [alias_sym_binary_operator] = "binary_operator",
  [alias_sym_pointer] = "pointer",
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allowzero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
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
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_prefix] = {
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
  [sym_reference_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dereference_expression] = {
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
  [aux_sym_array_type_repeat2] = {
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
  [alias_sym_pointer] = {
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
  field_value = 8,
  field_values = 9,
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
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 13, .length = 3},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 3},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 3},
  [19] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_value, 0},
  [2] =
    {field_type, 0},
    {field_values, 1},
  [4] =
    {field_expression, 1},
    {field_operator, 0},
  [6] =
    {field_size, 0, .inherited = true},
  [7] =
    {field_size, 0, .inherited = true},
    {field_size, 1, .inherited = true},
  [9] =
    {field_size, 1},
  [10] =
    {field_values, 1},
  [11] =
    {field_left, 0},
    {field_right, 2},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_size, 0, .inherited = true},
    {field_type, 1},
    {field_values, 2},
  [19] =
    {field_values, 1},
    {field_values, 2},
  [21] =
    {field_expression, 3},
    {field_name, 1},
  [23] =
    {field_values, 1},
    {field_values, 2},
    {field_values, 3},
  [26] =
    {field_expression, 4},
    {field_name, 2},
  [28] =
    {field_expression, 5},
    {field_name, 1},
    {field_type, 3},
  [31] =
    {field_expression, 6},
    {field_name, 2},
    {field_type, 4},
};

static TSSymbol ts_alias_sequences[20][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = alias_sym_pointer,
  },
  [9] = {
    [1] = sym_array_values,
  },
  [11] = {
    [1] = alias_sym_binary_operator,
  },
  [14] = {
    [1] = sym_array_values,
    [2] = sym_array_values,
  },
  [16] = {
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
      if (eof) ADVANCE(185);
      if (lookahead == '!') ADVANCE(443);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '~') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(381);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(381);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == ')') ADVANCE(283);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(381);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == ')') ADVANCE(283);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(381);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '&') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 'f') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead == 'v') ADVANCE(544);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '~') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(293);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(295);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '{') ADVANCE(297);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(352);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead == 'f') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead == 'v') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == '8') ADVANCE(205);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == '6') ADVANCE(247);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(249);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(215);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == '6') ADVANCE(209);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == '6') ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(251);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(217);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 32:
      if (lookahead == '8') ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '8') ADVANCE(221);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 36:
      if (lookahead == '\\') ADVANCE(379);
      END_STATE();
    case 37:
      if (lookahead == '\\') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 38:
      if (lookahead == '\\') ADVANCE(380);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 166:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 167:
      if (lookahead == 'z') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'z') ADVANCE(69);
      END_STATE();
    case 169:
      if (lookahead == '{') ADVANCE(297);
      END_STATE();
    case 170:
      if (lookahead == '{') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 171:
      if (lookahead == '}') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 172:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(353);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 183:
      if (eof) ADVANCE(185);
      if (lookahead == '!') ADVANCE(443);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(41);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '~') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '&') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(347);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(444);
      if (lookahead == 'f') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead == 'v') ADVANCE(464);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '~') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(187);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(191);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(191);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_threadlocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (lookahead == '_') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_c_short);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_c_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_c_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_c_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_c_uint);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_c_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_c_long);
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_c_ulong);
      if (lookahead == 'l') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_c_longlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_c_ulonglong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_c_longdouble);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_f128);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_f128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_comptime_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_comptime_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_noreturn);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_noreturn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_anyerror);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_anyerror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '=') ADVANCE(419);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(340);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead == '=') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_allowzero);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_allowzero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_align);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_promise);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_promise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '=') ADVANCE(417);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(330);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(332);
      if (lookahead == '=') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(431);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DOT_LBRACE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(433);
      if (lookahead == '|') ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(434);
      if (lookahead == '|') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(320);
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '>') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(437);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(439);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(328);
      if (lookahead == '+') ADVANCE(326);
      if (lookahead == '=') ADVANCE(415);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == '=') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT);
      if (lookahead == '=') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT);
      if (lookahead == '=') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(427);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == '=') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(425);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT);
      if (lookahead == '=') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_orelse);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_orelse);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == 'X') ADVANCE(177);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(190);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_c_DQUOTE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_c_BSLASH_BSLASH);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == ')') ADVANCE(283);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == '&') ADVANCE(294);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead == '+') ADVANCE(325);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(313);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '^') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '{') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead == '}') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_multiline_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_undefined_literal);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_undefined_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_PLUS_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_STAR_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '_') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(450);
      if (lookahead == '3') ADVANCE(451);
      if (lookahead == '6') ADVANCE(456);
      if (lookahead == 'a') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(450);
      if (lookahead == '3') ADVANCE(451);
      if (lookahead == '6') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(454);
      if (lookahead == '3') ADVANCE(452);
      if (lookahead == '6') ADVANCE(457);
      if (lookahead == '8') ADVANCE(206);
      if (lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(455);
      if (lookahead == '3') ADVANCE(453);
      if (lookahead == '6') ADVANCE(458);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(455);
      if (lookahead == '3') ADVANCE(453);
      if (lookahead == '6') ADVANCE(458);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(459);
      if (lookahead == '6') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(460);
      if (lookahead == '6') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(461);
      if (lookahead == '6') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'o') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 'y') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'l') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == 's') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(555);
      if (lookahead == 'n') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 'y') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(593);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 184},
  [2] = {.lex_state = 184},
  [3] = {.lex_state = 184},
  [4] = {.lex_state = 184},
  [5] = {.lex_state = 184},
  [6] = {.lex_state = 184},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 184},
  [89] = {.lex_state = 184},
  [90] = {.lex_state = 184},
  [91] = {.lex_state = 184},
  [92] = {.lex_state = 184},
  [93] = {.lex_state = 184},
  [94] = {.lex_state = 184},
  [95] = {.lex_state = 184},
  [96] = {.lex_state = 184},
  [97] = {.lex_state = 184},
  [98] = {.lex_state = 184},
  [99] = {.lex_state = 184},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 17},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 17},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 17},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_allowzero] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_promise] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_DOT_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT] = ACTIONS(1),
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
    [sym_source_file] = STATE(269),
    [sym__statement] = STATE(4),
    [sym__expression_statement] = STATE(4),
    [sym__declaration_statement] = STATE(4),
    [sym__expression] = STATE(201),
    [sym_empty_statement] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(201),
    [sym_empty_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_threadlocal] = ACTIONS(60),
    [anon_sym_comptime] = ACTIONS(63),
    [anon_sym_const] = ACTIONS(66),
    [anon_sym_var] = ACTIONS(69),
    [anon_sym_i8] = ACTIONS(72),
    [anon_sym_u8] = ACTIONS(72),
    [anon_sym_i16] = ACTIONS(72),
    [anon_sym_u16] = ACTIONS(72),
    [anon_sym_i32] = ACTIONS(72),
    [anon_sym_u32] = ACTIONS(72),
    [anon_sym_i64] = ACTIONS(72),
    [anon_sym_u64] = ACTIONS(72),
    [anon_sym_i128] = ACTIONS(72),
    [anon_sym_u128] = ACTIONS(72),
    [anon_sym_isize] = ACTIONS(72),
    [anon_sym_usize] = ACTIONS(72),
    [anon_sym_c_short] = ACTIONS(72),
    [anon_sym_c_ushort] = ACTIONS(72),
    [anon_sym_c_int] = ACTIONS(72),
    [anon_sym_c_uint] = ACTIONS(72),
    [anon_sym_c_long] = ACTIONS(72),
    [anon_sym_c_ulong] = ACTIONS(72),
    [anon_sym_c_longlong] = ACTIONS(72),
    [anon_sym_c_ulonglong] = ACTIONS(72),
    [anon_sym_c_longdouble] = ACTIONS(72),
    [anon_sym_f16] = ACTIONS(72),
    [anon_sym_f32] = ACTIONS(72),
    [anon_sym_f64] = ACTIONS(72),
    [anon_sym_f128] = ACTIONS(72),
    [anon_sym_comptime_int] = ACTIONS(72),
    [anon_sym_comptime_float] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_void] = ACTIONS(72),
    [anon_sym_noreturn] = ACTIONS(72),
    [anon_sym_type] = ACTIONS(72),
    [anon_sym_anyerror] = ACTIONS(72),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_volatile] = ACTIONS(84),
    [anon_sym_allowzero] = ACTIONS(84),
    [anon_sym_align] = ACTIONS(87),
    [anon_sym_promise] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_DOT_LBRACE] = ACTIONS(102),
    [anon_sym_DASH_PERCENT] = ACTIONS(105),
    [sym_integer_literal] = ACTIONS(108),
    [sym_float_literal] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_c_DQUOTE] = ACTIONS(114),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(117),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [sym_null_literal] = ACTIONS(108),
    [sym_undefined_literal] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [sym_identifier] = ACTIONS(123),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(207),
    [sym_empty_statement] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_threadlocal] = ACTIONS(129),
    [anon_sym_comptime] = ACTIONS(132),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(138),
    [anon_sym_i8] = ACTIONS(72),
    [anon_sym_u8] = ACTIONS(72),
    [anon_sym_i16] = ACTIONS(72),
    [anon_sym_u16] = ACTIONS(72),
    [anon_sym_i32] = ACTIONS(72),
    [anon_sym_u32] = ACTIONS(72),
    [anon_sym_i64] = ACTIONS(72),
    [anon_sym_u64] = ACTIONS(72),
    [anon_sym_i128] = ACTIONS(72),
    [anon_sym_u128] = ACTIONS(72),
    [anon_sym_isize] = ACTIONS(72),
    [anon_sym_usize] = ACTIONS(72),
    [anon_sym_c_short] = ACTIONS(72),
    [anon_sym_c_ushort] = ACTIONS(72),
    [anon_sym_c_int] = ACTIONS(72),
    [anon_sym_c_uint] = ACTIONS(72),
    [anon_sym_c_long] = ACTIONS(72),
    [anon_sym_c_ulong] = ACTIONS(72),
    [anon_sym_c_longlong] = ACTIONS(72),
    [anon_sym_c_ulonglong] = ACTIONS(72),
    [anon_sym_c_longdouble] = ACTIONS(72),
    [anon_sym_f16] = ACTIONS(72),
    [anon_sym_f32] = ACTIONS(72),
    [anon_sym_f64] = ACTIONS(72),
    [anon_sym_f128] = ACTIONS(72),
    [anon_sym_comptime_int] = ACTIONS(72),
    [anon_sym_comptime_float] = ACTIONS(72),
    [anon_sym_bool] = ACTIONS(72),
    [anon_sym_void] = ACTIONS(72),
    [anon_sym_noreturn] = ACTIONS(72),
    [anon_sym_type] = ACTIONS(72),
    [anon_sym_anyerror] = ACTIONS(72),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_volatile] = ACTIONS(84),
    [anon_sym_allowzero] = ACTIONS(84),
    [anon_sym_align] = ACTIONS(87),
    [anon_sym_promise] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_DOT_LBRACE] = ACTIONS(102),
    [anon_sym_DASH_PERCENT] = ACTIONS(105),
    [sym_integer_literal] = ACTIONS(108),
    [sym_float_literal] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_c_DQUOTE] = ACTIONS(114),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(117),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [sym_null_literal] = ACTIONS(108),
    [sym_undefined_literal] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_BANG] = ACTIONS(105),
    [sym_identifier] = ACTIONS(123),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__declaration_statement] = STATE(2),
    [sym__expression] = STATE(201),
    [sym_empty_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_threadlocal] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__declaration_statement] = STATE(6),
    [sym__expression] = STATE(189),
    [sym_empty_statement] = STATE(6),
    [sym_assignment_statement] = STATE(6),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_threadlocal] = ACTIONS(145),
    [anon_sym_comptime] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [6] = {
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym__expression] = STATE(190),
    [sym_empty_statement] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_threadlocal] = ACTIONS(145),
    [anon_sym_comptime] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [7] = {
    [sym__expression] = STATE(163),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [8] = {
    [sym__expression] = STATE(163),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [9] = {
    [sym__expression] = STATE(163),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [10] = {
    [sym__expression] = STATE(163),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [11] = {
    [sym__expression] = STATE(134),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [12] = {
    [sym__expression] = STATE(149),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [13] = {
    [sym__expression] = STATE(163),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [14] = {
    [sym__expression] = STATE(235),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [15] = {
    [sym__expression] = STATE(159),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [16] = {
    [sym__expression] = STATE(157),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [17] = {
    [sym__expression] = STATE(183),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [18] = {
    [sym__expression] = STATE(203),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [19] = {
    [sym__expression] = STATE(196),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [20] = {
    [sym__expression] = STATE(182),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [21] = {
    [sym__expression] = STATE(206),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [22] = {
    [sym__expression] = STATE(204),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [23] = {
    [sym__expression] = STATE(195),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [24] = {
    [sym__expression] = STATE(185),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [25] = {
    [sym__expression] = STATE(181),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [26] = {
    [sym__expression] = STATE(180),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [27] = {
    [sym__expression] = STATE(199),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [28] = {
    [sym__expression] = STATE(179),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [29] = {
    [sym__expression] = STATE(178),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [30] = {
    [sym__expression] = STATE(177),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [31] = {
    [sym__expression] = STATE(176),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [32] = {
    [sym__expression] = STATE(175),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [33] = {
    [sym__expression] = STATE(158),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [34] = {
    [sym__expression] = STATE(173),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [35] = {
    [sym__expression] = STATE(186),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [36] = {
    [sym__expression] = STATE(172),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [37] = {
    [sym__expression] = STATE(188),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [38] = {
    [sym__expression] = STATE(187),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [39] = {
    [sym__expression] = STATE(168),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [40] = {
    [sym__expression] = STATE(184),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [41] = {
    [sym__expression] = STATE(162),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [42] = {
    [sym__expression] = STATE(205),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [43] = {
    [sym__expression] = STATE(171),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [44] = {
    [sym__expression] = STATE(170),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [45] = {
    [sym__expression] = STATE(169),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [46] = {
    [sym__expression] = STATE(227),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [47] = {
    [sym__expression] = STATE(202),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [48] = {
    [sym__expression] = STATE(167),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [49] = {
    [sym__expression] = STATE(174),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [50] = {
    [sym__expression] = STATE(160),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [51] = {
    [sym__expression] = STATE(191),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(37),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [52] = {
    [sym__expression] = STATE(161),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [53] = {
    [sym__expression] = STATE(165),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [54] = {
    [sym__expression] = STATE(164),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [55] = {
    [sym__expression] = STATE(166),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(16),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [56] = {
    [sym__expression] = STATE(200),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [57] = {
    [sym__expression] = STATE(209),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [58] = {
    [sym__expression] = STATE(198),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [59] = {
    [sym__expression] = STATE(234),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [60] = {
    [sym__expression] = STATE(224),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [61] = {
    [sym__expression] = STATE(223),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [62] = {
    [sym__expression] = STATE(222),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [63] = {
    [sym__expression] = STATE(221),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [64] = {
    [sym__expression] = STATE(197),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [65] = {
    [sym__expression] = STATE(220),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [66] = {
    [sym__expression] = STATE(219),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [67] = {
    [sym__expression] = STATE(218),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [68] = {
    [sym__expression] = STATE(217),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [69] = {
    [sym__expression] = STATE(216),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [70] = {
    [sym__expression] = STATE(215),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [71] = {
    [sym__expression] = STATE(214),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [72] = {
    [sym__expression] = STATE(213),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [73] = {
    [sym__expression] = STATE(212),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [74] = {
    [sym__expression] = STATE(193),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [75] = {
    [sym__expression] = STATE(211),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [76] = {
    [sym__expression] = STATE(233),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [77] = {
    [sym__expression] = STATE(210),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [78] = {
    [sym__expression] = STATE(232),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [79] = {
    [sym__expression] = STATE(194),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [80] = {
    [sym__expression] = STATE(231),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [81] = {
    [sym__expression] = STATE(230),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [82] = {
    [sym__expression] = STATE(225),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [83] = {
    [sym__expression] = STATE(226),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [84] = {
    [sym__expression] = STATE(228),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [85] = {
    [sym__expression] = STATE(229),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(58),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [86] = {
    [sym__expression] = STATE(208),
    [sym__type] = STATE(111),
    [sym_primitive_type] = STATE(111),
    [sym_optional_type] = STATE(111),
    [sym_array_type] = STATE(111),
    [sym_pointer_type] = STATE(111),
    [sym_type_prefix] = STATE(156),
    [sym_comptime_block] = STATE(155),
    [sym_block] = STATE(155),
    [sym_reference_expression] = STATE(155),
    [sym_dereference_expression] = STATE(155),
    [sym_array_expression] = STATE(155),
    [sym_anonymous_array_expr] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_compound_assignment_expr] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym__literals] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_multiline_string_literal] = STATE(155),
    [sym_boolean_literal] = STATE(155),
    [sym_unary_operator] = STATE(14),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_DOT_LBRACE] = ACTIONS(39),
    [anon_sym_DASH_PERCENT] = ACTIONS(41),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_c_DQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_null_literal] = ACTIONS(43),
    [sym_undefined_literal] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [sym_identifier] = ACTIONS(53),
  },
  [87] = {
    [sym__type] = STATE(117),
    [sym_primitive_type] = STATE(117),
    [sym_optional_type] = STATE(117),
    [sym_array_type] = STATE(117),
    [sym_pointer_type] = STATE(117),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(183),
    [anon_sym_const] = ACTIONS(183),
    [anon_sym_i8] = ACTIONS(183),
    [anon_sym_u8] = ACTIONS(183),
    [anon_sym_i16] = ACTIONS(183),
    [anon_sym_u16] = ACTIONS(183),
    [anon_sym_i32] = ACTIONS(183),
    [anon_sym_u32] = ACTIONS(183),
    [anon_sym_i64] = ACTIONS(183),
    [anon_sym_u64] = ACTIONS(183),
    [anon_sym_i128] = ACTIONS(183),
    [anon_sym_u128] = ACTIONS(183),
    [anon_sym_isize] = ACTIONS(183),
    [anon_sym_usize] = ACTIONS(183),
    [anon_sym_c_short] = ACTIONS(183),
    [anon_sym_c_ushort] = ACTIONS(183),
    [anon_sym_c_int] = ACTIONS(183),
    [anon_sym_c_uint] = ACTIONS(183),
    [anon_sym_c_long] = ACTIONS(183),
    [anon_sym_c_ulong] = ACTIONS(183),
    [anon_sym_c_longlong] = ACTIONS(183),
    [anon_sym_c_ulonglong] = ACTIONS(183),
    [anon_sym_c_longdouble] = ACTIONS(183),
    [anon_sym_f16] = ACTIONS(183),
    [anon_sym_f32] = ACTIONS(183),
    [anon_sym_f64] = ACTIONS(183),
    [anon_sym_f128] = ACTIONS(183),
    [anon_sym_comptime_int] = ACTIONS(183),
    [anon_sym_comptime_float] = ACTIONS(183),
    [anon_sym_bool] = ACTIONS(183),
    [anon_sym_void] = ACTIONS(183),
    [anon_sym_noreturn] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [anon_sym_anyerror] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_volatile] = ACTIONS(183),
    [anon_sym_allowzero] = ACTIONS(183),
    [anon_sym_align] = ACTIONS(183),
    [anon_sym_promise] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_DOT_LBRACE] = ACTIONS(185),
    [anon_sym_DASH_PERCENT] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(183),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_c_DQUOTE] = ACTIONS(185),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(185),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [sym_null_literal] = ACTIONS(183),
    [sym_undefined_literal] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym_identifier] = ACTIONS(183),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_threadlocal] = ACTIONS(189),
    [anon_sym_comptime] = ACTIONS(189),
    [anon_sym_const] = ACTIONS(189),
    [anon_sym_var] = ACTIONS(189),
    [anon_sym_i8] = ACTIONS(189),
    [anon_sym_u8] = ACTIONS(189),
    [anon_sym_i16] = ACTIONS(189),
    [anon_sym_u16] = ACTIONS(189),
    [anon_sym_i32] = ACTIONS(189),
    [anon_sym_u32] = ACTIONS(189),
    [anon_sym_i64] = ACTIONS(189),
    [anon_sym_u64] = ACTIONS(189),
    [anon_sym_i128] = ACTIONS(189),
    [anon_sym_u128] = ACTIONS(189),
    [anon_sym_isize] = ACTIONS(189),
    [anon_sym_usize] = ACTIONS(189),
    [anon_sym_c_short] = ACTIONS(189),
    [anon_sym_c_ushort] = ACTIONS(189),
    [anon_sym_c_int] = ACTIONS(189),
    [anon_sym_c_uint] = ACTIONS(189),
    [anon_sym_c_long] = ACTIONS(189),
    [anon_sym_c_ulong] = ACTIONS(189),
    [anon_sym_c_longlong] = ACTIONS(189),
    [anon_sym_c_ulonglong] = ACTIONS(189),
    [anon_sym_c_longdouble] = ACTIONS(189),
    [anon_sym_f16] = ACTIONS(189),
    [anon_sym_f32] = ACTIONS(189),
    [anon_sym_f64] = ACTIONS(189),
    [anon_sym_f128] = ACTIONS(189),
    [anon_sym_comptime_int] = ACTIONS(189),
    [anon_sym_comptime_float] = ACTIONS(189),
    [anon_sym_bool] = ACTIONS(189),
    [anon_sym_void] = ACTIONS(189),
    [anon_sym_noreturn] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_anyerror] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_volatile] = ACTIONS(189),
    [anon_sym_allowzero] = ACTIONS(189),
    [anon_sym_align] = ACTIONS(189),
    [anon_sym_promise] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_DOT_LBRACE] = ACTIONS(187),
    [anon_sym_DASH_PERCENT] = ACTIONS(187),
    [sym_integer_literal] = ACTIONS(189),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_c_DQUOTE] = ACTIONS(187),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(187),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [sym_null_literal] = ACTIONS(189),
    [sym_undefined_literal] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_threadlocal] = ACTIONS(193),
    [anon_sym_comptime] = ACTIONS(193),
    [anon_sym_const] = ACTIONS(193),
    [anon_sym_var] = ACTIONS(193),
    [anon_sym_i8] = ACTIONS(193),
    [anon_sym_u8] = ACTIONS(193),
    [anon_sym_i16] = ACTIONS(193),
    [anon_sym_u16] = ACTIONS(193),
    [anon_sym_i32] = ACTIONS(193),
    [anon_sym_u32] = ACTIONS(193),
    [anon_sym_i64] = ACTIONS(193),
    [anon_sym_u64] = ACTIONS(193),
    [anon_sym_i128] = ACTIONS(193),
    [anon_sym_u128] = ACTIONS(193),
    [anon_sym_isize] = ACTIONS(193),
    [anon_sym_usize] = ACTIONS(193),
    [anon_sym_c_short] = ACTIONS(193),
    [anon_sym_c_ushort] = ACTIONS(193),
    [anon_sym_c_int] = ACTIONS(193),
    [anon_sym_c_uint] = ACTIONS(193),
    [anon_sym_c_long] = ACTIONS(193),
    [anon_sym_c_ulong] = ACTIONS(193),
    [anon_sym_c_longlong] = ACTIONS(193),
    [anon_sym_c_ulonglong] = ACTIONS(193),
    [anon_sym_c_longdouble] = ACTIONS(193),
    [anon_sym_f16] = ACTIONS(193),
    [anon_sym_f32] = ACTIONS(193),
    [anon_sym_f64] = ACTIONS(193),
    [anon_sym_f128] = ACTIONS(193),
    [anon_sym_comptime_int] = ACTIONS(193),
    [anon_sym_comptime_float] = ACTIONS(193),
    [anon_sym_bool] = ACTIONS(193),
    [anon_sym_void] = ACTIONS(193),
    [anon_sym_noreturn] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_anyerror] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_volatile] = ACTIONS(193),
    [anon_sym_allowzero] = ACTIONS(193),
    [anon_sym_align] = ACTIONS(193),
    [anon_sym_promise] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_DOT_LBRACE] = ACTIONS(191),
    [anon_sym_DASH_PERCENT] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_c_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(191),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [sym_null_literal] = ACTIONS(193),
    [sym_undefined_literal] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_threadlocal] = ACTIONS(197),
    [anon_sym_comptime] = ACTIONS(197),
    [anon_sym_const] = ACTIONS(197),
    [anon_sym_var] = ACTIONS(197),
    [anon_sym_i8] = ACTIONS(197),
    [anon_sym_u8] = ACTIONS(197),
    [anon_sym_i16] = ACTIONS(197),
    [anon_sym_u16] = ACTIONS(197),
    [anon_sym_i32] = ACTIONS(197),
    [anon_sym_u32] = ACTIONS(197),
    [anon_sym_i64] = ACTIONS(197),
    [anon_sym_u64] = ACTIONS(197),
    [anon_sym_i128] = ACTIONS(197),
    [anon_sym_u128] = ACTIONS(197),
    [anon_sym_isize] = ACTIONS(197),
    [anon_sym_usize] = ACTIONS(197),
    [anon_sym_c_short] = ACTIONS(197),
    [anon_sym_c_ushort] = ACTIONS(197),
    [anon_sym_c_int] = ACTIONS(197),
    [anon_sym_c_uint] = ACTIONS(197),
    [anon_sym_c_long] = ACTIONS(197),
    [anon_sym_c_ulong] = ACTIONS(197),
    [anon_sym_c_longlong] = ACTIONS(197),
    [anon_sym_c_ulonglong] = ACTIONS(197),
    [anon_sym_c_longdouble] = ACTIONS(197),
    [anon_sym_f16] = ACTIONS(197),
    [anon_sym_f32] = ACTIONS(197),
    [anon_sym_f64] = ACTIONS(197),
    [anon_sym_f128] = ACTIONS(197),
    [anon_sym_comptime_int] = ACTIONS(197),
    [anon_sym_comptime_float] = ACTIONS(197),
    [anon_sym_bool] = ACTIONS(197),
    [anon_sym_void] = ACTIONS(197),
    [anon_sym_noreturn] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_anyerror] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_volatile] = ACTIONS(197),
    [anon_sym_allowzero] = ACTIONS(197),
    [anon_sym_align] = ACTIONS(197),
    [anon_sym_promise] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_DOT_LBRACE] = ACTIONS(195),
    [anon_sym_DASH_PERCENT] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(197),
    [sym_float_literal] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_c_DQUOTE] = ACTIONS(195),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(195),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [sym_null_literal] = ACTIONS(197),
    [sym_undefined_literal] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
  },
  [91] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_threadlocal] = ACTIONS(201),
    [anon_sym_comptime] = ACTIONS(201),
    [anon_sym_const] = ACTIONS(201),
    [anon_sym_var] = ACTIONS(201),
    [anon_sym_i8] = ACTIONS(201),
    [anon_sym_u8] = ACTIONS(201),
    [anon_sym_i16] = ACTIONS(201),
    [anon_sym_u16] = ACTIONS(201),
    [anon_sym_i32] = ACTIONS(201),
    [anon_sym_u32] = ACTIONS(201),
    [anon_sym_i64] = ACTIONS(201),
    [anon_sym_u64] = ACTIONS(201),
    [anon_sym_i128] = ACTIONS(201),
    [anon_sym_u128] = ACTIONS(201),
    [anon_sym_isize] = ACTIONS(201),
    [anon_sym_usize] = ACTIONS(201),
    [anon_sym_c_short] = ACTIONS(201),
    [anon_sym_c_ushort] = ACTIONS(201),
    [anon_sym_c_int] = ACTIONS(201),
    [anon_sym_c_uint] = ACTIONS(201),
    [anon_sym_c_long] = ACTIONS(201),
    [anon_sym_c_ulong] = ACTIONS(201),
    [anon_sym_c_longlong] = ACTIONS(201),
    [anon_sym_c_ulonglong] = ACTIONS(201),
    [anon_sym_c_longdouble] = ACTIONS(201),
    [anon_sym_f16] = ACTIONS(201),
    [anon_sym_f32] = ACTIONS(201),
    [anon_sym_f64] = ACTIONS(201),
    [anon_sym_f128] = ACTIONS(201),
    [anon_sym_comptime_int] = ACTIONS(201),
    [anon_sym_comptime_float] = ACTIONS(201),
    [anon_sym_bool] = ACTIONS(201),
    [anon_sym_void] = ACTIONS(201),
    [anon_sym_noreturn] = ACTIONS(201),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_anyerror] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_volatile] = ACTIONS(201),
    [anon_sym_allowzero] = ACTIONS(201),
    [anon_sym_align] = ACTIONS(201),
    [anon_sym_promise] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_DOT_LBRACE] = ACTIONS(199),
    [anon_sym_DASH_PERCENT] = ACTIONS(199),
    [sym_integer_literal] = ACTIONS(201),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_c_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(199),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [sym_null_literal] = ACTIONS(201),
    [sym_undefined_literal] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
  },
  [92] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_threadlocal] = ACTIONS(193),
    [anon_sym_comptime] = ACTIONS(193),
    [anon_sym_const] = ACTIONS(193),
    [anon_sym_var] = ACTIONS(193),
    [anon_sym_i8] = ACTIONS(193),
    [anon_sym_u8] = ACTIONS(193),
    [anon_sym_i16] = ACTIONS(193),
    [anon_sym_u16] = ACTIONS(193),
    [anon_sym_i32] = ACTIONS(193),
    [anon_sym_u32] = ACTIONS(193),
    [anon_sym_i64] = ACTIONS(193),
    [anon_sym_u64] = ACTIONS(193),
    [anon_sym_i128] = ACTIONS(193),
    [anon_sym_u128] = ACTIONS(193),
    [anon_sym_isize] = ACTIONS(193),
    [anon_sym_usize] = ACTIONS(193),
    [anon_sym_c_short] = ACTIONS(193),
    [anon_sym_c_ushort] = ACTIONS(193),
    [anon_sym_c_int] = ACTIONS(193),
    [anon_sym_c_uint] = ACTIONS(193),
    [anon_sym_c_long] = ACTIONS(193),
    [anon_sym_c_ulong] = ACTIONS(193),
    [anon_sym_c_longlong] = ACTIONS(193),
    [anon_sym_c_ulonglong] = ACTIONS(193),
    [anon_sym_c_longdouble] = ACTIONS(193),
    [anon_sym_f16] = ACTIONS(193),
    [anon_sym_f32] = ACTIONS(193),
    [anon_sym_f64] = ACTIONS(193),
    [anon_sym_f128] = ACTIONS(193),
    [anon_sym_comptime_int] = ACTIONS(193),
    [anon_sym_comptime_float] = ACTIONS(193),
    [anon_sym_bool] = ACTIONS(193),
    [anon_sym_void] = ACTIONS(193),
    [anon_sym_noreturn] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_anyerror] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_volatile] = ACTIONS(193),
    [anon_sym_allowzero] = ACTIONS(193),
    [anon_sym_align] = ACTIONS(193),
    [anon_sym_promise] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_DOT_LBRACE] = ACTIONS(191),
    [anon_sym_DASH_PERCENT] = ACTIONS(191),
    [sym_integer_literal] = ACTIONS(193),
    [sym_float_literal] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_c_DQUOTE] = ACTIONS(191),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(191),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [sym_null_literal] = ACTIONS(193),
    [sym_undefined_literal] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
  },
  [93] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_threadlocal] = ACTIONS(205),
    [anon_sym_comptime] = ACTIONS(205),
    [anon_sym_const] = ACTIONS(205),
    [anon_sym_var] = ACTIONS(205),
    [anon_sym_i8] = ACTIONS(205),
    [anon_sym_u8] = ACTIONS(205),
    [anon_sym_i16] = ACTIONS(205),
    [anon_sym_u16] = ACTIONS(205),
    [anon_sym_i32] = ACTIONS(205),
    [anon_sym_u32] = ACTIONS(205),
    [anon_sym_i64] = ACTIONS(205),
    [anon_sym_u64] = ACTIONS(205),
    [anon_sym_i128] = ACTIONS(205),
    [anon_sym_u128] = ACTIONS(205),
    [anon_sym_isize] = ACTIONS(205),
    [anon_sym_usize] = ACTIONS(205),
    [anon_sym_c_short] = ACTIONS(205),
    [anon_sym_c_ushort] = ACTIONS(205),
    [anon_sym_c_int] = ACTIONS(205),
    [anon_sym_c_uint] = ACTIONS(205),
    [anon_sym_c_long] = ACTIONS(205),
    [anon_sym_c_ulong] = ACTIONS(205),
    [anon_sym_c_longlong] = ACTIONS(205),
    [anon_sym_c_ulonglong] = ACTIONS(205),
    [anon_sym_c_longdouble] = ACTIONS(205),
    [anon_sym_f16] = ACTIONS(205),
    [anon_sym_f32] = ACTIONS(205),
    [anon_sym_f64] = ACTIONS(205),
    [anon_sym_f128] = ACTIONS(205),
    [anon_sym_comptime_int] = ACTIONS(205),
    [anon_sym_comptime_float] = ACTIONS(205),
    [anon_sym_bool] = ACTIONS(205),
    [anon_sym_void] = ACTIONS(205),
    [anon_sym_noreturn] = ACTIONS(205),
    [anon_sym_type] = ACTIONS(205),
    [anon_sym_anyerror] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_volatile] = ACTIONS(205),
    [anon_sym_allowzero] = ACTIONS(205),
    [anon_sym_align] = ACTIONS(205),
    [anon_sym_promise] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_DOT_LBRACE] = ACTIONS(203),
    [anon_sym_DASH_PERCENT] = ACTIONS(203),
    [sym_integer_literal] = ACTIONS(205),
    [sym_float_literal] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_c_DQUOTE] = ACTIONS(203),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(203),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [sym_null_literal] = ACTIONS(205),
    [sym_undefined_literal] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_threadlocal] = ACTIONS(205),
    [anon_sym_comptime] = ACTIONS(205),
    [anon_sym_const] = ACTIONS(205),
    [anon_sym_var] = ACTIONS(205),
    [anon_sym_i8] = ACTIONS(205),
    [anon_sym_u8] = ACTIONS(205),
    [anon_sym_i16] = ACTIONS(205),
    [anon_sym_u16] = ACTIONS(205),
    [anon_sym_i32] = ACTIONS(205),
    [anon_sym_u32] = ACTIONS(205),
    [anon_sym_i64] = ACTIONS(205),
    [anon_sym_u64] = ACTIONS(205),
    [anon_sym_i128] = ACTIONS(205),
    [anon_sym_u128] = ACTIONS(205),
    [anon_sym_isize] = ACTIONS(205),
    [anon_sym_usize] = ACTIONS(205),
    [anon_sym_c_short] = ACTIONS(205),
    [anon_sym_c_ushort] = ACTIONS(205),
    [anon_sym_c_int] = ACTIONS(205),
    [anon_sym_c_uint] = ACTIONS(205),
    [anon_sym_c_long] = ACTIONS(205),
    [anon_sym_c_ulong] = ACTIONS(205),
    [anon_sym_c_longlong] = ACTIONS(205),
    [anon_sym_c_ulonglong] = ACTIONS(205),
    [anon_sym_c_longdouble] = ACTIONS(205),
    [anon_sym_f16] = ACTIONS(205),
    [anon_sym_f32] = ACTIONS(205),
    [anon_sym_f64] = ACTIONS(205),
    [anon_sym_f128] = ACTIONS(205),
    [anon_sym_comptime_int] = ACTIONS(205),
    [anon_sym_comptime_float] = ACTIONS(205),
    [anon_sym_bool] = ACTIONS(205),
    [anon_sym_void] = ACTIONS(205),
    [anon_sym_noreturn] = ACTIONS(205),
    [anon_sym_type] = ACTIONS(205),
    [anon_sym_anyerror] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_volatile] = ACTIONS(205),
    [anon_sym_allowzero] = ACTIONS(205),
    [anon_sym_align] = ACTIONS(205),
    [anon_sym_promise] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_DOT_LBRACE] = ACTIONS(203),
    [anon_sym_DASH_PERCENT] = ACTIONS(203),
    [sym_integer_literal] = ACTIONS(205),
    [sym_float_literal] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_c_DQUOTE] = ACTIONS(203),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(203),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [sym_null_literal] = ACTIONS(205),
    [sym_undefined_literal] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_threadlocal] = ACTIONS(201),
    [anon_sym_comptime] = ACTIONS(201),
    [anon_sym_const] = ACTIONS(201),
    [anon_sym_var] = ACTIONS(201),
    [anon_sym_i8] = ACTIONS(201),
    [anon_sym_u8] = ACTIONS(201),
    [anon_sym_i16] = ACTIONS(201),
    [anon_sym_u16] = ACTIONS(201),
    [anon_sym_i32] = ACTIONS(201),
    [anon_sym_u32] = ACTIONS(201),
    [anon_sym_i64] = ACTIONS(201),
    [anon_sym_u64] = ACTIONS(201),
    [anon_sym_i128] = ACTIONS(201),
    [anon_sym_u128] = ACTIONS(201),
    [anon_sym_isize] = ACTIONS(201),
    [anon_sym_usize] = ACTIONS(201),
    [anon_sym_c_short] = ACTIONS(201),
    [anon_sym_c_ushort] = ACTIONS(201),
    [anon_sym_c_int] = ACTIONS(201),
    [anon_sym_c_uint] = ACTIONS(201),
    [anon_sym_c_long] = ACTIONS(201),
    [anon_sym_c_ulong] = ACTIONS(201),
    [anon_sym_c_longlong] = ACTIONS(201),
    [anon_sym_c_ulonglong] = ACTIONS(201),
    [anon_sym_c_longdouble] = ACTIONS(201),
    [anon_sym_f16] = ACTIONS(201),
    [anon_sym_f32] = ACTIONS(201),
    [anon_sym_f64] = ACTIONS(201),
    [anon_sym_f128] = ACTIONS(201),
    [anon_sym_comptime_int] = ACTIONS(201),
    [anon_sym_comptime_float] = ACTIONS(201),
    [anon_sym_bool] = ACTIONS(201),
    [anon_sym_void] = ACTIONS(201),
    [anon_sym_noreturn] = ACTIONS(201),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_anyerror] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_volatile] = ACTIONS(201),
    [anon_sym_allowzero] = ACTIONS(201),
    [anon_sym_align] = ACTIONS(201),
    [anon_sym_promise] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_DOT_LBRACE] = ACTIONS(199),
    [anon_sym_DASH_PERCENT] = ACTIONS(199),
    [sym_integer_literal] = ACTIONS(201),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_c_DQUOTE] = ACTIONS(199),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(199),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [sym_null_literal] = ACTIONS(201),
    [sym_undefined_literal] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
  },
  [96] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_threadlocal] = ACTIONS(189),
    [anon_sym_comptime] = ACTIONS(189),
    [anon_sym_const] = ACTIONS(189),
    [anon_sym_var] = ACTIONS(189),
    [anon_sym_i8] = ACTIONS(189),
    [anon_sym_u8] = ACTIONS(189),
    [anon_sym_i16] = ACTIONS(189),
    [anon_sym_u16] = ACTIONS(189),
    [anon_sym_i32] = ACTIONS(189),
    [anon_sym_u32] = ACTIONS(189),
    [anon_sym_i64] = ACTIONS(189),
    [anon_sym_u64] = ACTIONS(189),
    [anon_sym_i128] = ACTIONS(189),
    [anon_sym_u128] = ACTIONS(189),
    [anon_sym_isize] = ACTIONS(189),
    [anon_sym_usize] = ACTIONS(189),
    [anon_sym_c_short] = ACTIONS(189),
    [anon_sym_c_ushort] = ACTIONS(189),
    [anon_sym_c_int] = ACTIONS(189),
    [anon_sym_c_uint] = ACTIONS(189),
    [anon_sym_c_long] = ACTIONS(189),
    [anon_sym_c_ulong] = ACTIONS(189),
    [anon_sym_c_longlong] = ACTIONS(189),
    [anon_sym_c_ulonglong] = ACTIONS(189),
    [anon_sym_c_longdouble] = ACTIONS(189),
    [anon_sym_f16] = ACTIONS(189),
    [anon_sym_f32] = ACTIONS(189),
    [anon_sym_f64] = ACTIONS(189),
    [anon_sym_f128] = ACTIONS(189),
    [anon_sym_comptime_int] = ACTIONS(189),
    [anon_sym_comptime_float] = ACTIONS(189),
    [anon_sym_bool] = ACTIONS(189),
    [anon_sym_void] = ACTIONS(189),
    [anon_sym_noreturn] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_anyerror] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_volatile] = ACTIONS(189),
    [anon_sym_allowzero] = ACTIONS(189),
    [anon_sym_align] = ACTIONS(189),
    [anon_sym_promise] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_DOT_LBRACE] = ACTIONS(187),
    [anon_sym_DASH_PERCENT] = ACTIONS(187),
    [sym_integer_literal] = ACTIONS(189),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_c_DQUOTE] = ACTIONS(187),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(187),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [sym_null_literal] = ACTIONS(189),
    [sym_undefined_literal] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_threadlocal] = ACTIONS(209),
    [anon_sym_comptime] = ACTIONS(209),
    [anon_sym_const] = ACTIONS(209),
    [anon_sym_var] = ACTIONS(209),
    [anon_sym_i8] = ACTIONS(209),
    [anon_sym_u8] = ACTIONS(209),
    [anon_sym_i16] = ACTIONS(209),
    [anon_sym_u16] = ACTIONS(209),
    [anon_sym_i32] = ACTIONS(209),
    [anon_sym_u32] = ACTIONS(209),
    [anon_sym_i64] = ACTIONS(209),
    [anon_sym_u64] = ACTIONS(209),
    [anon_sym_i128] = ACTIONS(209),
    [anon_sym_u128] = ACTIONS(209),
    [anon_sym_isize] = ACTIONS(209),
    [anon_sym_usize] = ACTIONS(209),
    [anon_sym_c_short] = ACTIONS(209),
    [anon_sym_c_ushort] = ACTIONS(209),
    [anon_sym_c_int] = ACTIONS(209),
    [anon_sym_c_uint] = ACTIONS(209),
    [anon_sym_c_long] = ACTIONS(209),
    [anon_sym_c_ulong] = ACTIONS(209),
    [anon_sym_c_longlong] = ACTIONS(209),
    [anon_sym_c_ulonglong] = ACTIONS(209),
    [anon_sym_c_longdouble] = ACTIONS(209),
    [anon_sym_f16] = ACTIONS(209),
    [anon_sym_f32] = ACTIONS(209),
    [anon_sym_f64] = ACTIONS(209),
    [anon_sym_f128] = ACTIONS(209),
    [anon_sym_comptime_int] = ACTIONS(209),
    [anon_sym_comptime_float] = ACTIONS(209),
    [anon_sym_bool] = ACTIONS(209),
    [anon_sym_void] = ACTIONS(209),
    [anon_sym_noreturn] = ACTIONS(209),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_anyerror] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_volatile] = ACTIONS(209),
    [anon_sym_allowzero] = ACTIONS(209),
    [anon_sym_align] = ACTIONS(209),
    [anon_sym_promise] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_DOT_LBRACE] = ACTIONS(207),
    [anon_sym_DASH_PERCENT] = ACTIONS(207),
    [sym_integer_literal] = ACTIONS(209),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_c_DQUOTE] = ACTIONS(207),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(207),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [sym_null_literal] = ACTIONS(209),
    [sym_undefined_literal] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
  },
  [98] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_threadlocal] = ACTIONS(197),
    [anon_sym_comptime] = ACTIONS(197),
    [anon_sym_const] = ACTIONS(197),
    [anon_sym_var] = ACTIONS(197),
    [anon_sym_i8] = ACTIONS(197),
    [anon_sym_u8] = ACTIONS(197),
    [anon_sym_i16] = ACTIONS(197),
    [anon_sym_u16] = ACTIONS(197),
    [anon_sym_i32] = ACTIONS(197),
    [anon_sym_u32] = ACTIONS(197),
    [anon_sym_i64] = ACTIONS(197),
    [anon_sym_u64] = ACTIONS(197),
    [anon_sym_i128] = ACTIONS(197),
    [anon_sym_u128] = ACTIONS(197),
    [anon_sym_isize] = ACTIONS(197),
    [anon_sym_usize] = ACTIONS(197),
    [anon_sym_c_short] = ACTIONS(197),
    [anon_sym_c_ushort] = ACTIONS(197),
    [anon_sym_c_int] = ACTIONS(197),
    [anon_sym_c_uint] = ACTIONS(197),
    [anon_sym_c_long] = ACTIONS(197),
    [anon_sym_c_ulong] = ACTIONS(197),
    [anon_sym_c_longlong] = ACTIONS(197),
    [anon_sym_c_ulonglong] = ACTIONS(197),
    [anon_sym_c_longdouble] = ACTIONS(197),
    [anon_sym_f16] = ACTIONS(197),
    [anon_sym_f32] = ACTIONS(197),
    [anon_sym_f64] = ACTIONS(197),
    [anon_sym_f128] = ACTIONS(197),
    [anon_sym_comptime_int] = ACTIONS(197),
    [anon_sym_comptime_float] = ACTIONS(197),
    [anon_sym_bool] = ACTIONS(197),
    [anon_sym_void] = ACTIONS(197),
    [anon_sym_noreturn] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_anyerror] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_volatile] = ACTIONS(197),
    [anon_sym_allowzero] = ACTIONS(197),
    [anon_sym_align] = ACTIONS(197),
    [anon_sym_promise] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_DOT_LBRACE] = ACTIONS(195),
    [anon_sym_DASH_PERCENT] = ACTIONS(195),
    [sym_integer_literal] = ACTIONS(197),
    [sym_float_literal] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_c_DQUOTE] = ACTIONS(195),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(195),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [sym_null_literal] = ACTIONS(197),
    [sym_undefined_literal] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [sym_identifier] = ACTIONS(197),
  },
  [99] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_threadlocal] = ACTIONS(209),
    [anon_sym_comptime] = ACTIONS(209),
    [anon_sym_const] = ACTIONS(209),
    [anon_sym_var] = ACTIONS(209),
    [anon_sym_i8] = ACTIONS(209),
    [anon_sym_u8] = ACTIONS(209),
    [anon_sym_i16] = ACTIONS(209),
    [anon_sym_u16] = ACTIONS(209),
    [anon_sym_i32] = ACTIONS(209),
    [anon_sym_u32] = ACTIONS(209),
    [anon_sym_i64] = ACTIONS(209),
    [anon_sym_u64] = ACTIONS(209),
    [anon_sym_i128] = ACTIONS(209),
    [anon_sym_u128] = ACTIONS(209),
    [anon_sym_isize] = ACTIONS(209),
    [anon_sym_usize] = ACTIONS(209),
    [anon_sym_c_short] = ACTIONS(209),
    [anon_sym_c_ushort] = ACTIONS(209),
    [anon_sym_c_int] = ACTIONS(209),
    [anon_sym_c_uint] = ACTIONS(209),
    [anon_sym_c_long] = ACTIONS(209),
    [anon_sym_c_ulong] = ACTIONS(209),
    [anon_sym_c_longlong] = ACTIONS(209),
    [anon_sym_c_ulonglong] = ACTIONS(209),
    [anon_sym_c_longdouble] = ACTIONS(209),
    [anon_sym_f16] = ACTIONS(209),
    [anon_sym_f32] = ACTIONS(209),
    [anon_sym_f64] = ACTIONS(209),
    [anon_sym_f128] = ACTIONS(209),
    [anon_sym_comptime_int] = ACTIONS(209),
    [anon_sym_comptime_float] = ACTIONS(209),
    [anon_sym_bool] = ACTIONS(209),
    [anon_sym_void] = ACTIONS(209),
    [anon_sym_noreturn] = ACTIONS(209),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_anyerror] = ACTIONS(209),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_volatile] = ACTIONS(209),
    [anon_sym_allowzero] = ACTIONS(209),
    [anon_sym_align] = ACTIONS(209),
    [anon_sym_promise] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_DOT_LBRACE] = ACTIONS(207),
    [anon_sym_DASH_PERCENT] = ACTIONS(207),
    [sym_integer_literal] = ACTIONS(209),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_c_DQUOTE] = ACTIONS(207),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(207),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [sym_null_literal] = ACTIONS(209),
    [sym_undefined_literal] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
  },
  [100] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(211),
    [anon_sym_const] = ACTIONS(211),
    [anon_sym_i8] = ACTIONS(211),
    [anon_sym_u8] = ACTIONS(211),
    [anon_sym_i16] = ACTIONS(211),
    [anon_sym_u16] = ACTIONS(211),
    [anon_sym_i32] = ACTIONS(211),
    [anon_sym_u32] = ACTIONS(211),
    [anon_sym_i64] = ACTIONS(211),
    [anon_sym_u64] = ACTIONS(211),
    [anon_sym_i128] = ACTIONS(211),
    [anon_sym_u128] = ACTIONS(211),
    [anon_sym_isize] = ACTIONS(211),
    [anon_sym_usize] = ACTIONS(211),
    [anon_sym_c_short] = ACTIONS(211),
    [anon_sym_c_ushort] = ACTIONS(211),
    [anon_sym_c_int] = ACTIONS(211),
    [anon_sym_c_uint] = ACTIONS(211),
    [anon_sym_c_long] = ACTIONS(211),
    [anon_sym_c_ulong] = ACTIONS(211),
    [anon_sym_c_longlong] = ACTIONS(211),
    [anon_sym_c_ulonglong] = ACTIONS(211),
    [anon_sym_c_longdouble] = ACTIONS(211),
    [anon_sym_f16] = ACTIONS(211),
    [anon_sym_f32] = ACTIONS(211),
    [anon_sym_f64] = ACTIONS(211),
    [anon_sym_f128] = ACTIONS(211),
    [anon_sym_comptime_int] = ACTIONS(211),
    [anon_sym_comptime_float] = ACTIONS(211),
    [anon_sym_bool] = ACTIONS(211),
    [anon_sym_void] = ACTIONS(211),
    [anon_sym_noreturn] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(211),
    [anon_sym_anyerror] = ACTIONS(211),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_volatile] = ACTIONS(211),
    [anon_sym_allowzero] = ACTIONS(211),
    [anon_sym_align] = ACTIONS(211),
    [anon_sym_promise] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
    [anon_sym_DOT_LBRACE] = ACTIONS(213),
    [anon_sym_DASH_PERCENT] = ACTIONS(213),
    [sym_integer_literal] = ACTIONS(211),
    [sym_float_literal] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_c_DQUOTE] = ACTIONS(213),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(213),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [sym_null_literal] = ACTIONS(211),
    [sym_undefined_literal] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(213),
    [sym_identifier] = ACTIONS(211),
  },
  [101] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_comptime] = ACTIONS(183),
    [anon_sym_const] = ACTIONS(183),
    [anon_sym_i8] = ACTIONS(183),
    [anon_sym_u8] = ACTIONS(183),
    [anon_sym_i16] = ACTIONS(183),
    [anon_sym_u16] = ACTIONS(183),
    [anon_sym_i32] = ACTIONS(183),
    [anon_sym_u32] = ACTIONS(183),
    [anon_sym_i64] = ACTIONS(183),
    [anon_sym_u64] = ACTIONS(183),
    [anon_sym_i128] = ACTIONS(183),
    [anon_sym_u128] = ACTIONS(183),
    [anon_sym_isize] = ACTIONS(183),
    [anon_sym_usize] = ACTIONS(183),
    [anon_sym_c_short] = ACTIONS(183),
    [anon_sym_c_ushort] = ACTIONS(183),
    [anon_sym_c_int] = ACTIONS(183),
    [anon_sym_c_uint] = ACTIONS(183),
    [anon_sym_c_long] = ACTIONS(183),
    [anon_sym_c_ulong] = ACTIONS(183),
    [anon_sym_c_longlong] = ACTIONS(183),
    [anon_sym_c_ulonglong] = ACTIONS(183),
    [anon_sym_c_longdouble] = ACTIONS(183),
    [anon_sym_f16] = ACTIONS(183),
    [anon_sym_f32] = ACTIONS(183),
    [anon_sym_f64] = ACTIONS(183),
    [anon_sym_f128] = ACTIONS(183),
    [anon_sym_comptime_int] = ACTIONS(183),
    [anon_sym_comptime_float] = ACTIONS(183),
    [anon_sym_bool] = ACTIONS(183),
    [anon_sym_void] = ACTIONS(183),
    [anon_sym_noreturn] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [anon_sym_anyerror] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_volatile] = ACTIONS(183),
    [anon_sym_allowzero] = ACTIONS(183),
    [anon_sym_align] = ACTIONS(183),
    [anon_sym_promise] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_DOT_LBRACE] = ACTIONS(185),
    [anon_sym_DASH_PERCENT] = ACTIONS(185),
    [sym_integer_literal] = ACTIONS(183),
    [sym_float_literal] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_c_DQUOTE] = ACTIONS(185),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(185),
    [anon_sym_c_BSLASH_BSLASH] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [sym_null_literal] = ACTIONS(183),
    [sym_undefined_literal] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym_identifier] = ACTIONS(183),
  },
  [102] = {
    [sym__type] = STATE(267),
    [sym_primitive_type] = STATE(267),
    [sym_optional_type] = STATE(267),
    [sym_array_type] = STATE(267),
    [sym_pointer_type] = STATE(267),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [aux_sym_array_expression_repeat1] = STATE(237),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(217),
  },
  [103] = {
    [sym__type] = STATE(117),
    [sym_primitive_type] = STATE(117),
    [sym_optional_type] = STATE(117),
    [sym_array_type] = STATE(117),
    [sym_pointer_type] = STATE(117),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(221),
  },
  [104] = {
    [sym__type] = STATE(275),
    [sym_primitive_type] = STATE(275),
    [sym_optional_type] = STATE(275),
    [sym_array_type] = STATE(275),
    [sym_pointer_type] = STATE(275),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(223),
  },
  [105] = {
    [sym__type] = STATE(268),
    [sym_primitive_type] = STATE(268),
    [sym_optional_type] = STATE(268),
    [sym_array_type] = STATE(268),
    [sym_pointer_type] = STATE(268),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(225),
  },
  [106] = {
    [sym__type] = STATE(114),
    [sym_primitive_type] = STATE(114),
    [sym_optional_type] = STATE(114),
    [sym_array_type] = STATE(114),
    [sym_pointer_type] = STATE(114),
    [sym_type_prefix] = STATE(119),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(119),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(227),
  },
  [107] = {
    [sym__type] = STATE(271),
    [sym_primitive_type] = STATE(271),
    [sym_optional_type] = STATE(271),
    [sym_array_type] = STATE(271),
    [sym_pointer_type] = STATE(271),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(229),
  },
  [108] = {
    [sym__type] = STATE(120),
    [sym_primitive_type] = STATE(120),
    [sym_optional_type] = STATE(120),
    [sym_array_type] = STATE(120),
    [sym_pointer_type] = STATE(120),
    [sym_type_prefix] = STATE(106),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(106),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(231),
  },
  [109] = {
    [sym__type] = STATE(276),
    [sym_primitive_type] = STATE(276),
    [sym_optional_type] = STATE(276),
    [sym_array_type] = STATE(276),
    [sym_pointer_type] = STATE(276),
    [sym_type_prefix] = STATE(156),
    [aux_sym_array_type_repeat1] = STATE(110),
    [aux_sym_array_type_repeat2] = STATE(156),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(233),
  },
  [110] = {
    [sym_primitive_type] = STATE(113),
    [sym_optional_type] = STATE(113),
    [sym_pointer_type] = STATE(113),
    [sym_type_prefix] = STATE(140),
    [aux_sym_array_type_repeat1] = STATE(236),
    [aux_sym_array_type_repeat2] = STATE(140),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(235),
  },
  [111] = {
    [sym_array_values] = STATE(137),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_DOT_STAR] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT] = ACTIONS(239),
    [anon_sym_DASH_PERCENT] = ACTIONS(239),
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
  [112] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_DOT_STAR] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_PLUS_PERCENT] = ACTIONS(245),
    [anon_sym_DASH_PERCENT] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_STAR_STAR] = ACTIONS(243),
    [anon_sym_STAR_PERCENT] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_orelse] = ACTIONS(243),
    [anon_sym_catch] = ACTIONS(243),
    [anon_sym_PLUS_EQ] = ACTIONS(243),
    [anon_sym_DASH_EQ] = ACTIONS(243),
    [anon_sym_STAR_EQ] = ACTIONS(243),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(243),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(243),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(243),
    [anon_sym_SLASH_EQ] = ACTIONS(243),
    [anon_sym_PERCENT_EQ] = ACTIONS(243),
    [anon_sym_AMP_EQ] = ACTIONS(243),
    [anon_sym_PIPE_EQ] = ACTIONS(243),
    [anon_sym_CARET_EQ] = ACTIONS(243),
    [anon_sym_LT_LT_EQ] = ACTIONS(243),
    [anon_sym_GT_GT_EQ] = ACTIONS(243),
  },
  [113] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_DOT_STAR] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_PLUS_PLUS] = ACTIONS(247),
    [anon_sym_PLUS_PERCENT] = ACTIONS(249),
    [anon_sym_DASH_PERCENT] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_STAR_STAR] = ACTIONS(247),
    [anon_sym_STAR_PERCENT] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_orelse] = ACTIONS(247),
    [anon_sym_catch] = ACTIONS(247),
    [anon_sym_PLUS_EQ] = ACTIONS(247),
    [anon_sym_DASH_EQ] = ACTIONS(247),
    [anon_sym_STAR_EQ] = ACTIONS(247),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(247),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(247),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(247),
    [anon_sym_SLASH_EQ] = ACTIONS(247),
    [anon_sym_PERCENT_EQ] = ACTIONS(247),
    [anon_sym_AMP_EQ] = ACTIONS(247),
    [anon_sym_PIPE_EQ] = ACTIONS(247),
    [anon_sym_CARET_EQ] = ACTIONS(247),
    [anon_sym_LT_LT_EQ] = ACTIONS(247),
    [anon_sym_GT_GT_EQ] = ACTIONS(247),
  },
  [114] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_DOT_STAR] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_PLUS_PLUS] = ACTIONS(251),
    [anon_sym_PLUS_PERCENT] = ACTIONS(253),
    [anon_sym_DASH_PERCENT] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_STAR_STAR] = ACTIONS(251),
    [anon_sym_STAR_PERCENT] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_orelse] = ACTIONS(251),
    [anon_sym_catch] = ACTIONS(251),
    [anon_sym_PLUS_EQ] = ACTIONS(251),
    [anon_sym_DASH_EQ] = ACTIONS(251),
    [anon_sym_STAR_EQ] = ACTIONS(251),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(251),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(251),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(251),
    [anon_sym_SLASH_EQ] = ACTIONS(251),
    [anon_sym_PERCENT_EQ] = ACTIONS(251),
    [anon_sym_AMP_EQ] = ACTIONS(251),
    [anon_sym_PIPE_EQ] = ACTIONS(251),
    [anon_sym_CARET_EQ] = ACTIONS(251),
    [anon_sym_LT_LT_EQ] = ACTIONS(251),
    [anon_sym_GT_GT_EQ] = ACTIONS(251),
  },
  [115] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(116),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_DOT_STAR] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT] = ACTIONS(255),
    [anon_sym_DASH_PERCENT] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_STAR_PERCENT] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_orelse] = ACTIONS(255),
    [anon_sym_catch] = ACTIONS(255),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(257),
    [sym_escape_sequence] = ACTIONS(257),
    [anon_sym_PLUS_EQ] = ACTIONS(255),
    [anon_sym_DASH_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_SLASH_EQ] = ACTIONS(255),
    [anon_sym_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_AMP_EQ] = ACTIONS(255),
    [anon_sym_PIPE_EQ] = ACTIONS(255),
    [anon_sym_CARET_EQ] = ACTIONS(255),
    [anon_sym_LT_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_GT_EQ] = ACTIONS(255),
  },
  [116] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(123),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
    [anon_sym_DOT_STAR] = ACTIONS(259),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT] = ACTIONS(259),
    [anon_sym_DASH_PERCENT] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_PERCENT] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_STAR_PERCENT] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_orelse] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(261),
    [sym_escape_sequence] = ACTIONS(261),
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
  [117] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_DOT_STAR] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_or] = ACTIONS(265),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(263),
    [anon_sym_PLUS_PERCENT] = ACTIONS(265),
    [anon_sym_DASH_PERCENT] = ACTIONS(265),
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
  [118] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_DOT_STAR] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_EQ] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_PLUS_PLUS] = ACTIONS(267),
    [anon_sym_PLUS_PERCENT] = ACTIONS(269),
    [anon_sym_DASH_PERCENT] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [anon_sym_STAR_PERCENT] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_orelse] = ACTIONS(267),
    [anon_sym_catch] = ACTIONS(267),
    [anon_sym_PLUS_EQ] = ACTIONS(267),
    [anon_sym_DASH_EQ] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(267),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(267),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(267),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(267),
    [anon_sym_SLASH_EQ] = ACTIONS(267),
    [anon_sym_PERCENT_EQ] = ACTIONS(267),
    [anon_sym_AMP_EQ] = ACTIONS(267),
    [anon_sym_PIPE_EQ] = ACTIONS(267),
    [anon_sym_CARET_EQ] = ACTIONS(267),
    [anon_sym_LT_LT_EQ] = ACTIONS(267),
    [anon_sym_GT_GT_EQ] = ACTIONS(267),
  },
  [119] = {
    [sym_primitive_type] = STATE(113),
    [sym_optional_type] = STATE(113),
    [sym_pointer_type] = STATE(113),
    [sym_type_prefix] = STATE(192),
    [aux_sym_array_type_repeat2] = STATE(192),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(271),
    [anon_sym_i8] = ACTIONS(274),
    [anon_sym_u8] = ACTIONS(274),
    [anon_sym_i16] = ACTIONS(274),
    [anon_sym_u16] = ACTIONS(274),
    [anon_sym_i32] = ACTIONS(274),
    [anon_sym_u32] = ACTIONS(274),
    [anon_sym_i64] = ACTIONS(274),
    [anon_sym_u64] = ACTIONS(274),
    [anon_sym_i128] = ACTIONS(274),
    [anon_sym_u128] = ACTIONS(274),
    [anon_sym_isize] = ACTIONS(274),
    [anon_sym_usize] = ACTIONS(274),
    [anon_sym_c_short] = ACTIONS(274),
    [anon_sym_c_ushort] = ACTIONS(274),
    [anon_sym_c_int] = ACTIONS(274),
    [anon_sym_c_uint] = ACTIONS(274),
    [anon_sym_c_long] = ACTIONS(274),
    [anon_sym_c_ulong] = ACTIONS(274),
    [anon_sym_c_longlong] = ACTIONS(274),
    [anon_sym_c_ulonglong] = ACTIONS(274),
    [anon_sym_c_longdouble] = ACTIONS(274),
    [anon_sym_f16] = ACTIONS(274),
    [anon_sym_f32] = ACTIONS(274),
    [anon_sym_f64] = ACTIONS(274),
    [anon_sym_f128] = ACTIONS(274),
    [anon_sym_comptime_int] = ACTIONS(274),
    [anon_sym_comptime_float] = ACTIONS(274),
    [anon_sym_bool] = ACTIONS(274),
    [anon_sym_void] = ACTIONS(274),
    [anon_sym_noreturn] = ACTIONS(274),
    [anon_sym_type] = ACTIONS(274),
    [anon_sym_anyerror] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_volatile] = ACTIONS(271),
    [anon_sym_allowzero] = ACTIONS(271),
    [anon_sym_align] = ACTIONS(278),
    [anon_sym_promise] = ACTIONS(281),
    [sym_identifier] = ACTIONS(274),
  },
  [120] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_DOT_STAR] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_and] = ACTIONS(284),
    [anon_sym_or] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [anon_sym_BANG_EQ] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(284),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(286),
    [anon_sym_GT_GT] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_PLUS_PLUS] = ACTIONS(284),
    [anon_sym_PLUS_PERCENT] = ACTIONS(286),
    [anon_sym_DASH_PERCENT] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(284),
    [anon_sym_STAR_PERCENT] = ACTIONS(286),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_orelse] = ACTIONS(284),
    [anon_sym_catch] = ACTIONS(284),
    [anon_sym_PLUS_EQ] = ACTIONS(284),
    [anon_sym_DASH_EQ] = ACTIONS(284),
    [anon_sym_STAR_EQ] = ACTIONS(284),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(284),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(284),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(284),
    [anon_sym_SLASH_EQ] = ACTIONS(284),
    [anon_sym_PERCENT_EQ] = ACTIONS(284),
    [anon_sym_AMP_EQ] = ACTIONS(284),
    [anon_sym_PIPE_EQ] = ACTIONS(284),
    [anon_sym_CARET_EQ] = ACTIONS(284),
    [anon_sym_LT_LT_EQ] = ACTIONS(284),
    [anon_sym_GT_GT_EQ] = ACTIONS(284),
  },
  [121] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(125),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
    [anon_sym_DOT_STAR] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT] = ACTIONS(259),
    [anon_sym_DASH_PERCENT] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_PERCENT] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_STAR_PERCENT] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_orelse] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(288),
    [sym_escape_sequence] = ACTIONS(288),
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
  [122] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(121),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_DOT_STAR] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT] = ACTIONS(255),
    [anon_sym_DASH_PERCENT] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_STAR_PERCENT] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_orelse] = ACTIONS(255),
    [anon_sym_catch] = ACTIONS(255),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(290),
    [sym_escape_sequence] = ACTIONS(290),
    [anon_sym_PLUS_EQ] = ACTIONS(255),
    [anon_sym_DASH_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_SLASH_EQ] = ACTIONS(255),
    [anon_sym_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_AMP_EQ] = ACTIONS(255),
    [anon_sym_PIPE_EQ] = ACTIONS(255),
    [anon_sym_CARET_EQ] = ACTIONS(255),
    [anon_sym_LT_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_GT_EQ] = ACTIONS(255),
  },
  [123] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(123),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_DOT_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT] = ACTIONS(292),
    [anon_sym_DASH_PERCENT] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym_STAR_PERCENT] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_orelse] = ACTIONS(292),
    [anon_sym_catch] = ACTIONS(292),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(294),
    [sym_escape_sequence] = ACTIONS(294),
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
  [124] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_DOT_STAR] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT] = ACTIONS(239),
    [anon_sym_DASH_PERCENT] = ACTIONS(239),
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
  [125] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(125),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_DOT_STAR] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT] = ACTIONS(292),
    [anon_sym_DASH_PERCENT] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym_STAR_PERCENT] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_orelse] = ACTIONS(292),
    [anon_sym_catch] = ACTIONS(292),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(299),
    [sym_escape_sequence] = ACTIONS(299),
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
  [126] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_DOT_STAR] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_and] = ACTIONS(302),
    [anon_sym_or] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_PLUS_PLUS] = ACTIONS(302),
    [anon_sym_PLUS_PERCENT] = ACTIONS(304),
    [anon_sym_DASH_PERCENT] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(302),
    [anon_sym_STAR_PERCENT] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [anon_sym_orelse] = ACTIONS(302),
    [anon_sym_catch] = ACTIONS(302),
    [anon_sym_PLUS_EQ] = ACTIONS(302),
    [anon_sym_DASH_EQ] = ACTIONS(302),
    [anon_sym_STAR_EQ] = ACTIONS(302),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(302),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(302),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(302),
    [anon_sym_PERCENT_EQ] = ACTIONS(302),
    [anon_sym_AMP_EQ] = ACTIONS(302),
    [anon_sym_PIPE_EQ] = ACTIONS(302),
    [anon_sym_CARET_EQ] = ACTIONS(302),
    [anon_sym_LT_LT_EQ] = ACTIONS(302),
    [anon_sym_GT_GT_EQ] = ACTIONS(302),
  },
  [127] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_DOT_STAR] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_and] = ACTIONS(306),
    [anon_sym_or] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_GT_GT] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_PLUS_PLUS] = ACTIONS(306),
    [anon_sym_PLUS_PERCENT] = ACTIONS(308),
    [anon_sym_DASH_PERCENT] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [anon_sym_STAR_PERCENT] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_orelse] = ACTIONS(306),
    [anon_sym_catch] = ACTIONS(306),
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
  [128] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(128),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_DOT_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT] = ACTIONS(292),
    [anon_sym_DASH_PERCENT] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym_STAR_PERCENT] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_orelse] = ACTIONS(292),
    [anon_sym_catch] = ACTIONS(292),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(310),
    [sym_escape_sequence] = ACTIONS(310),
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
  [129] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_DOT_STAR] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(313),
    [anon_sym_or] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_GT_GT] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_PLUS_PLUS] = ACTIONS(313),
    [anon_sym_PLUS_PERCENT] = ACTIONS(315),
    [anon_sym_DASH_PERCENT] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(313),
    [anon_sym_STAR_PERCENT] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_orelse] = ACTIONS(313),
    [anon_sym_catch] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
  },
  [130] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(319),
    [anon_sym_DOT_STAR] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_PLUS_PLUS] = ACTIONS(317),
    [anon_sym_PLUS_PERCENT] = ACTIONS(319),
    [anon_sym_DASH_PERCENT] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(319),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [anon_sym_STAR_PERCENT] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_orelse] = ACTIONS(317),
    [anon_sym_catch] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(317),
    [anon_sym_DASH_EQ] = ACTIONS(317),
    [anon_sym_STAR_EQ] = ACTIONS(317),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(317),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(317),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(317),
    [anon_sym_SLASH_EQ] = ACTIONS(317),
    [anon_sym_PERCENT_EQ] = ACTIONS(317),
    [anon_sym_AMP_EQ] = ACTIONS(317),
    [anon_sym_PIPE_EQ] = ACTIONS(317),
    [anon_sym_CARET_EQ] = ACTIONS(317),
    [anon_sym_LT_LT_EQ] = ACTIONS(317),
    [anon_sym_GT_GT_EQ] = ACTIONS(317),
  },
  [131] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_DOT_STAR] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_and] = ACTIONS(321),
    [anon_sym_or] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(321),
    [anon_sym_PLUS_PERCENT] = ACTIONS(323),
    [anon_sym_DASH_PERCENT] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(321),
    [anon_sym_STAR_PERCENT] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_orelse] = ACTIONS(321),
    [anon_sym_catch] = ACTIONS(321),
    [anon_sym_PLUS_EQ] = ACTIONS(321),
    [anon_sym_DASH_EQ] = ACTIONS(321),
    [anon_sym_STAR_EQ] = ACTIONS(321),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_SLASH_EQ] = ACTIONS(321),
    [anon_sym_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_AMP_EQ] = ACTIONS(321),
    [anon_sym_PIPE_EQ] = ACTIONS(321),
    [anon_sym_CARET_EQ] = ACTIONS(321),
    [anon_sym_LT_LT_EQ] = ACTIONS(321),
    [anon_sym_GT_GT_EQ] = ACTIONS(321),
  },
  [132] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_DOT_STAR] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_and] = ACTIONS(325),
    [anon_sym_or] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_CARET] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_PLUS_PLUS] = ACTIONS(325),
    [anon_sym_PLUS_PERCENT] = ACTIONS(327),
    [anon_sym_DASH_PERCENT] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [anon_sym_STAR_PERCENT] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_orelse] = ACTIONS(325),
    [anon_sym_catch] = ACTIONS(325),
    [anon_sym_PLUS_EQ] = ACTIONS(325),
    [anon_sym_DASH_EQ] = ACTIONS(325),
    [anon_sym_STAR_EQ] = ACTIONS(325),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(325),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(325),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(325),
    [anon_sym_SLASH_EQ] = ACTIONS(325),
    [anon_sym_PERCENT_EQ] = ACTIONS(325),
    [anon_sym_AMP_EQ] = ACTIONS(325),
    [anon_sym_PIPE_EQ] = ACTIONS(325),
    [anon_sym_CARET_EQ] = ACTIONS(325),
    [anon_sym_LT_LT_EQ] = ACTIONS(325),
    [anon_sym_GT_GT_EQ] = ACTIONS(325),
  },
  [133] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(331),
    [anon_sym_DOT_STAR] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_and] = ACTIONS(329),
    [anon_sym_or] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [anon_sym_BANG_EQ] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_PLUS_PLUS] = ACTIONS(329),
    [anon_sym_PLUS_PERCENT] = ACTIONS(331),
    [anon_sym_DASH_PERCENT] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_STAR_STAR] = ACTIONS(329),
    [anon_sym_STAR_PERCENT] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(329),
    [anon_sym_orelse] = ACTIONS(329),
    [anon_sym_catch] = ACTIONS(329),
    [anon_sym_PLUS_EQ] = ACTIONS(329),
    [anon_sym_DASH_EQ] = ACTIONS(329),
    [anon_sym_STAR_EQ] = ACTIONS(329),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(329),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(329),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(329),
    [anon_sym_SLASH_EQ] = ACTIONS(329),
    [anon_sym_PERCENT_EQ] = ACTIONS(329),
    [anon_sym_AMP_EQ] = ACTIONS(329),
    [anon_sym_PIPE_EQ] = ACTIONS(329),
    [anon_sym_CARET_EQ] = ACTIONS(329),
    [anon_sym_LT_LT_EQ] = ACTIONS(329),
    [anon_sym_GT_GT_EQ] = ACTIONS(329),
  },
  [134] = {
    [sym_assignment_operator] = STATE(55),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(256),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [135] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_DOT_STAR] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_and] = ACTIONS(373),
    [anon_sym_or] = ACTIONS(375),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(373),
    [anon_sym_PLUS_PERCENT] = ACTIONS(375),
    [anon_sym_DASH_PERCENT] = ACTIONS(375),
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
  [136] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(379),
    [anon_sym_DOT_STAR] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [anon_sym_or] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(379),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_BANG_EQ] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_LT_EQ] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_EQ] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_PLUS_PLUS] = ACTIONS(377),
    [anon_sym_PLUS_PERCENT] = ACTIONS(379),
    [anon_sym_DASH_PERCENT] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_STAR_STAR] = ACTIONS(377),
    [anon_sym_STAR_PERCENT] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_orelse] = ACTIONS(377),
    [anon_sym_catch] = ACTIONS(377),
    [anon_sym_PLUS_EQ] = ACTIONS(377),
    [anon_sym_DASH_EQ] = ACTIONS(377),
    [anon_sym_STAR_EQ] = ACTIONS(377),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(377),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(377),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(377),
    [anon_sym_SLASH_EQ] = ACTIONS(377),
    [anon_sym_PERCENT_EQ] = ACTIONS(377),
    [anon_sym_AMP_EQ] = ACTIONS(377),
    [anon_sym_PIPE_EQ] = ACTIONS(377),
    [anon_sym_CARET_EQ] = ACTIONS(377),
    [anon_sym_LT_LT_EQ] = ACTIONS(377),
    [anon_sym_GT_GT_EQ] = ACTIONS(377),
  },
  [137] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_DOT_STAR] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_and] = ACTIONS(381),
    [anon_sym_or] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_GT_EQ] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT] = ACTIONS(383),
    [anon_sym_DASH_PERCENT] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_STAR_STAR] = ACTIONS(381),
    [anon_sym_STAR_PERCENT] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_orelse] = ACTIONS(381),
    [anon_sym_catch] = ACTIONS(381),
    [anon_sym_PLUS_EQ] = ACTIONS(381),
    [anon_sym_DASH_EQ] = ACTIONS(381),
    [anon_sym_STAR_EQ] = ACTIONS(381),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_PERCENT_EQ] = ACTIONS(381),
    [anon_sym_AMP_EQ] = ACTIONS(381),
    [anon_sym_PIPE_EQ] = ACTIONS(381),
    [anon_sym_CARET_EQ] = ACTIONS(381),
    [anon_sym_LT_LT_EQ] = ACTIONS(381),
    [anon_sym_GT_GT_EQ] = ACTIONS(381),
  },
  [138] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_EQ] = ACTIONS(387),
    [anon_sym_STAR] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_DOT_STAR] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_and] = ACTIONS(385),
    [anon_sym_or] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_PLUS_PLUS] = ACTIONS(385),
    [anon_sym_PLUS_PERCENT] = ACTIONS(387),
    [anon_sym_DASH_PERCENT] = ACTIONS(387),
    [anon_sym_SLASH] = ACTIONS(387),
    [anon_sym_PERCENT] = ACTIONS(387),
    [anon_sym_STAR_STAR] = ACTIONS(385),
    [anon_sym_STAR_PERCENT] = ACTIONS(387),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_orelse] = ACTIONS(385),
    [anon_sym_catch] = ACTIONS(385),
    [anon_sym_PLUS_EQ] = ACTIONS(385),
    [anon_sym_DASH_EQ] = ACTIONS(385),
    [anon_sym_STAR_EQ] = ACTIONS(385),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(385),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(385),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(385),
    [anon_sym_SLASH_EQ] = ACTIONS(385),
    [anon_sym_PERCENT_EQ] = ACTIONS(385),
    [anon_sym_AMP_EQ] = ACTIONS(385),
    [anon_sym_PIPE_EQ] = ACTIONS(385),
    [anon_sym_CARET_EQ] = ACTIONS(385),
    [anon_sym_LT_LT_EQ] = ACTIONS(385),
    [anon_sym_GT_GT_EQ] = ACTIONS(385),
  },
  [139] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_DOT_STAR] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_and] = ACTIONS(389),
    [anon_sym_or] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(391),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [anon_sym_BANG_EQ] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_LT_EQ] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_GT_EQ] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_PLUS_PLUS] = ACTIONS(389),
    [anon_sym_PLUS_PERCENT] = ACTIONS(391),
    [anon_sym_DASH_PERCENT] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(391),
    [anon_sym_PERCENT] = ACTIONS(391),
    [anon_sym_STAR_STAR] = ACTIONS(389),
    [anon_sym_STAR_PERCENT] = ACTIONS(391),
    [anon_sym_PIPE_PIPE] = ACTIONS(389),
    [anon_sym_orelse] = ACTIONS(389),
    [anon_sym_catch] = ACTIONS(389),
    [anon_sym_PLUS_EQ] = ACTIONS(389),
    [anon_sym_DASH_EQ] = ACTIONS(389),
    [anon_sym_STAR_EQ] = ACTIONS(389),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(389),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(389),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(389),
    [anon_sym_SLASH_EQ] = ACTIONS(389),
    [anon_sym_PERCENT_EQ] = ACTIONS(389),
    [anon_sym_AMP_EQ] = ACTIONS(389),
    [anon_sym_PIPE_EQ] = ACTIONS(389),
    [anon_sym_CARET_EQ] = ACTIONS(389),
    [anon_sym_LT_LT_EQ] = ACTIONS(389),
    [anon_sym_GT_GT_EQ] = ACTIONS(389),
  },
  [140] = {
    [sym_primitive_type] = STATE(118),
    [sym_optional_type] = STATE(118),
    [sym_pointer_type] = STATE(118),
    [sym_type_prefix] = STATE(192),
    [aux_sym_array_type_repeat2] = STATE(192),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(393),
  },
  [141] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_DOT_STAR] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_and] = ACTIONS(395),
    [anon_sym_or] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_PLUS_PERCENT] = ACTIONS(397),
    [anon_sym_DASH_PERCENT] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_STAR_STAR] = ACTIONS(395),
    [anon_sym_STAR_PERCENT] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_orelse] = ACTIONS(395),
    [anon_sym_catch] = ACTIONS(395),
    [anon_sym_PLUS_EQ] = ACTIONS(395),
    [anon_sym_DASH_EQ] = ACTIONS(395),
    [anon_sym_STAR_EQ] = ACTIONS(395),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [anon_sym_PERCENT_EQ] = ACTIONS(395),
    [anon_sym_AMP_EQ] = ACTIONS(395),
    [anon_sym_PIPE_EQ] = ACTIONS(395),
    [anon_sym_CARET_EQ] = ACTIONS(395),
    [anon_sym_LT_LT_EQ] = ACTIONS(395),
    [anon_sym_GT_GT_EQ] = ACTIONS(395),
  },
  [142] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_DOT_STAR] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_and] = ACTIONS(399),
    [anon_sym_or] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(399),
    [anon_sym_BANG_EQ] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_LT_EQ] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_EQ] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_PLUS_PLUS] = ACTIONS(399),
    [anon_sym_PLUS_PERCENT] = ACTIONS(401),
    [anon_sym_DASH_PERCENT] = ACTIONS(401),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_STAR_STAR] = ACTIONS(399),
    [anon_sym_STAR_PERCENT] = ACTIONS(401),
    [anon_sym_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_orelse] = ACTIONS(399),
    [anon_sym_catch] = ACTIONS(399),
    [anon_sym_PLUS_EQ] = ACTIONS(399),
    [anon_sym_DASH_EQ] = ACTIONS(399),
    [anon_sym_STAR_EQ] = ACTIONS(399),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(399),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(399),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(399),
    [anon_sym_SLASH_EQ] = ACTIONS(399),
    [anon_sym_PERCENT_EQ] = ACTIONS(399),
    [anon_sym_AMP_EQ] = ACTIONS(399),
    [anon_sym_PIPE_EQ] = ACTIONS(399),
    [anon_sym_CARET_EQ] = ACTIONS(399),
    [anon_sym_LT_LT_EQ] = ACTIONS(399),
    [anon_sym_GT_GT_EQ] = ACTIONS(399),
  },
  [143] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_DOT_STAR] = ACTIONS(403),
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_and] = ACTIONS(403),
    [anon_sym_or] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(405),
    [anon_sym_EQ_EQ] = ACTIONS(403),
    [anon_sym_BANG_EQ] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_LT_EQ] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_EQ] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_PLUS_PLUS] = ACTIONS(403),
    [anon_sym_PLUS_PERCENT] = ACTIONS(405),
    [anon_sym_DASH_PERCENT] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
    [anon_sym_STAR_STAR] = ACTIONS(403),
    [anon_sym_STAR_PERCENT] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_orelse] = ACTIONS(403),
    [anon_sym_catch] = ACTIONS(403),
    [anon_sym_PLUS_EQ] = ACTIONS(403),
    [anon_sym_DASH_EQ] = ACTIONS(403),
    [anon_sym_STAR_EQ] = ACTIONS(403),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(403),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(403),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(403),
    [anon_sym_SLASH_EQ] = ACTIONS(403),
    [anon_sym_PERCENT_EQ] = ACTIONS(403),
    [anon_sym_AMP_EQ] = ACTIONS(403),
    [anon_sym_PIPE_EQ] = ACTIONS(403),
    [anon_sym_CARET_EQ] = ACTIONS(403),
    [anon_sym_LT_LT_EQ] = ACTIONS(403),
    [anon_sym_GT_GT_EQ] = ACTIONS(403),
  },
  [144] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(144),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_DOT_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_GT_GT] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_PLUS_PERCENT] = ACTIONS(292),
    [anon_sym_DASH_PERCENT] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym_STAR_PERCENT] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_orelse] = ACTIONS(292),
    [anon_sym_catch] = ACTIONS(292),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(407),
    [sym_escape_sequence] = ACTIONS(407),
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
  [145] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_AMP] = ACTIONS(412),
    [anon_sym_DOT_STAR] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_and] = ACTIONS(410),
    [anon_sym_or] = ACTIONS(412),
    [anon_sym_PIPE] = ACTIONS(412),
    [anon_sym_CARET] = ACTIONS(412),
    [anon_sym_EQ_EQ] = ACTIONS(410),
    [anon_sym_BANG_EQ] = ACTIONS(410),
    [anon_sym_LT] = ACTIONS(412),
    [anon_sym_LT_EQ] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_GT_EQ] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_PLUS_PLUS] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT] = ACTIONS(412),
    [anon_sym_DASH_PERCENT] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(410),
    [anon_sym_STAR_PERCENT] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(410),
    [anon_sym_orelse] = ACTIONS(410),
    [anon_sym_catch] = ACTIONS(410),
    [anon_sym_PLUS_EQ] = ACTIONS(410),
    [anon_sym_DASH_EQ] = ACTIONS(410),
    [anon_sym_STAR_EQ] = ACTIONS(410),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(410),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(410),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(410),
    [anon_sym_SLASH_EQ] = ACTIONS(410),
    [anon_sym_PERCENT_EQ] = ACTIONS(410),
    [anon_sym_AMP_EQ] = ACTIONS(410),
    [anon_sym_PIPE_EQ] = ACTIONS(410),
    [anon_sym_CARET_EQ] = ACTIONS(410),
    [anon_sym_LT_LT_EQ] = ACTIONS(410),
    [anon_sym_GT_GT_EQ] = ACTIONS(410),
  },
  [146] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(128),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
    [anon_sym_DOT_STAR] = ACTIONS(259),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT] = ACTIONS(259),
    [anon_sym_DASH_PERCENT] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_PERCENT] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_STAR_PERCENT] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_orelse] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(414),
    [sym_escape_sequence] = ACTIONS(414),
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
  [147] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(416),
    [anon_sym_EQ] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(418),
    [anon_sym_DOT_STAR] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_and] = ACTIONS(416),
    [anon_sym_or] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(418),
    [anon_sym_CARET] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_LT_LT] = ACTIONS(418),
    [anon_sym_GT_GT] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_PLUS_PLUS] = ACTIONS(416),
    [anon_sym_PLUS_PERCENT] = ACTIONS(418),
    [anon_sym_DASH_PERCENT] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(418),
    [anon_sym_PERCENT] = ACTIONS(418),
    [anon_sym_STAR_STAR] = ACTIONS(416),
    [anon_sym_STAR_PERCENT] = ACTIONS(418),
    [anon_sym_PIPE_PIPE] = ACTIONS(416),
    [anon_sym_orelse] = ACTIONS(416),
    [anon_sym_catch] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(416),
    [anon_sym_DASH_EQ] = ACTIONS(416),
    [anon_sym_STAR_EQ] = ACTIONS(416),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(416),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(416),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(416),
    [anon_sym_SLASH_EQ] = ACTIONS(416),
    [anon_sym_PERCENT_EQ] = ACTIONS(416),
    [anon_sym_AMP_EQ] = ACTIONS(416),
    [anon_sym_PIPE_EQ] = ACTIONS(416),
    [anon_sym_CARET_EQ] = ACTIONS(416),
    [anon_sym_LT_LT_EQ] = ACTIONS(416),
    [anon_sym_GT_GT_EQ] = ACTIONS(416),
  },
  [148] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(422),
    [anon_sym_STAR] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(422),
    [anon_sym_DOT_STAR] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_and] = ACTIONS(420),
    [anon_sym_or] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_CARET] = ACTIONS(422),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [anon_sym_LT_LT] = ACTIONS(422),
    [anon_sym_GT_GT] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_PLUS_PLUS] = ACTIONS(420),
    [anon_sym_PLUS_PERCENT] = ACTIONS(422),
    [anon_sym_DASH_PERCENT] = ACTIONS(422),
    [anon_sym_SLASH] = ACTIONS(422),
    [anon_sym_PERCENT] = ACTIONS(422),
    [anon_sym_STAR_STAR] = ACTIONS(420),
    [anon_sym_STAR_PERCENT] = ACTIONS(422),
    [anon_sym_PIPE_PIPE] = ACTIONS(420),
    [anon_sym_orelse] = ACTIONS(420),
    [anon_sym_catch] = ACTIONS(420),
    [anon_sym_PLUS_EQ] = ACTIONS(420),
    [anon_sym_DASH_EQ] = ACTIONS(420),
    [anon_sym_STAR_EQ] = ACTIONS(420),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(420),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(420),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(420),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [anon_sym_PERCENT_EQ] = ACTIONS(420),
    [anon_sym_AMP_EQ] = ACTIONS(420),
    [anon_sym_PIPE_EQ] = ACTIONS(420),
    [anon_sym_CARET_EQ] = ACTIONS(420),
    [anon_sym_LT_LT_EQ] = ACTIONS(420),
    [anon_sym_GT_GT_EQ] = ACTIONS(420),
  },
  [149] = {
    [sym_assignment_operator] = STATE(55),
    [aux_sym_anonymous_array_expr_repeat1] = STATE(257),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [150] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(430),
    [anon_sym_DOT_STAR] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_and] = ACTIONS(428),
    [anon_sym_or] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_CARET] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_LT_LT] = ACTIONS(430),
    [anon_sym_GT_GT] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(428),
    [anon_sym_PLUS_PERCENT] = ACTIONS(430),
    [anon_sym_DASH_PERCENT] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_STAR_PERCENT] = ACTIONS(430),
    [anon_sym_PIPE_PIPE] = ACTIONS(428),
    [anon_sym_orelse] = ACTIONS(428),
    [anon_sym_catch] = ACTIONS(428),
    [anon_sym_PLUS_EQ] = ACTIONS(428),
    [anon_sym_DASH_EQ] = ACTIONS(428),
    [anon_sym_STAR_EQ] = ACTIONS(428),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(428),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(428),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(428),
    [anon_sym_SLASH_EQ] = ACTIONS(428),
    [anon_sym_PERCENT_EQ] = ACTIONS(428),
    [anon_sym_AMP_EQ] = ACTIONS(428),
    [anon_sym_PIPE_EQ] = ACTIONS(428),
    [anon_sym_CARET_EQ] = ACTIONS(428),
    [anon_sym_LT_LT_EQ] = ACTIONS(428),
    [anon_sym_GT_GT_EQ] = ACTIONS(428),
  },
  [151] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(144),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
    [anon_sym_DOT_STAR] = ACTIONS(259),
    [anon_sym_and] = ACTIONS(259),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_CARET] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_PLUS_PERCENT] = ACTIONS(259),
    [anon_sym_DASH_PERCENT] = ACTIONS(259),
    [anon_sym_SLASH] = ACTIONS(259),
    [anon_sym_PERCENT] = ACTIONS(259),
    [anon_sym_STAR_STAR] = ACTIONS(259),
    [anon_sym_STAR_PERCENT] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_orelse] = ACTIONS(259),
    [anon_sym_catch] = ACTIONS(259),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(432),
    [sym_escape_sequence] = ACTIONS(432),
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
  [152] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(146),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_DOT_STAR] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT] = ACTIONS(255),
    [anon_sym_DASH_PERCENT] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_STAR_PERCENT] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_orelse] = ACTIONS(255),
    [anon_sym_catch] = ACTIONS(255),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(434),
    [sym_escape_sequence] = ACTIONS(434),
    [anon_sym_PLUS_EQ] = ACTIONS(255),
    [anon_sym_DASH_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_SLASH_EQ] = ACTIONS(255),
    [anon_sym_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_AMP_EQ] = ACTIONS(255),
    [anon_sym_PIPE_EQ] = ACTIONS(255),
    [anon_sym_CARET_EQ] = ACTIONS(255),
    [anon_sym_LT_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_GT_EQ] = ACTIONS(255),
  },
  [153] = {
    [aux_sym_multiline_string_literal_repeat1] = STATE(151),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_DOT_STAR] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_CARET] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_BANG_EQ] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PLUS] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT] = ACTIONS(255),
    [anon_sym_DASH_PERCENT] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [anon_sym_STAR_PERCENT] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_orelse] = ACTIONS(255),
    [anon_sym_catch] = ACTIONS(255),
    [aux_sym_multiline_string_literal_token1] = ACTIONS(436),
    [sym_escape_sequence] = ACTIONS(436),
    [anon_sym_PLUS_EQ] = ACTIONS(255),
    [anon_sym_DASH_EQ] = ACTIONS(255),
    [anon_sym_STAR_EQ] = ACTIONS(255),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_SLASH_EQ] = ACTIONS(255),
    [anon_sym_PERCENT_EQ] = ACTIONS(255),
    [anon_sym_AMP_EQ] = ACTIONS(255),
    [anon_sym_PIPE_EQ] = ACTIONS(255),
    [anon_sym_CARET_EQ] = ACTIONS(255),
    [anon_sym_LT_LT_EQ] = ACTIONS(255),
    [anon_sym_GT_GT_EQ] = ACTIONS(255),
  },
  [154] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_STAR] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_DOT_STAR] = ACTIONS(438),
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_or] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(438),
    [anon_sym_BANG_EQ] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_LT_EQ] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_GT_EQ] = ACTIONS(438),
    [anon_sym_LT_LT] = ACTIONS(440),
    [anon_sym_GT_GT] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_PLUS_PLUS] = ACTIONS(438),
    [anon_sym_PLUS_PERCENT] = ACTIONS(440),
    [anon_sym_DASH_PERCENT] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_STAR_STAR] = ACTIONS(438),
    [anon_sym_STAR_PERCENT] = ACTIONS(440),
    [anon_sym_PIPE_PIPE] = ACTIONS(438),
    [anon_sym_orelse] = ACTIONS(438),
    [anon_sym_catch] = ACTIONS(438),
    [anon_sym_PLUS_EQ] = ACTIONS(438),
    [anon_sym_DASH_EQ] = ACTIONS(438),
    [anon_sym_STAR_EQ] = ACTIONS(438),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(438),
    [anon_sym_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_AMP_EQ] = ACTIONS(438),
    [anon_sym_PIPE_EQ] = ACTIONS(438),
    [anon_sym_CARET_EQ] = ACTIONS(438),
    [anon_sym_LT_LT_EQ] = ACTIONS(438),
    [anon_sym_GT_GT_EQ] = ACTIONS(438),
  },
  [155] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_DOT_STAR] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(239),
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
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_PLUS_PERCENT] = ACTIONS(239),
    [anon_sym_DASH_PERCENT] = ACTIONS(239),
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
  [156] = {
    [sym_primitive_type] = STATE(113),
    [sym_optional_type] = STATE(113),
    [sym_pointer_type] = STATE(113),
    [sym_type_prefix] = STATE(192),
    [aux_sym_array_type_repeat2] = STATE(192),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_c_short] = ACTIONS(19),
    [anon_sym_c_ushort] = ACTIONS(19),
    [anon_sym_c_int] = ACTIONS(19),
    [anon_sym_c_uint] = ACTIONS(19),
    [anon_sym_c_long] = ACTIONS(19),
    [anon_sym_c_ulong] = ACTIONS(19),
    [anon_sym_c_longlong] = ACTIONS(19),
    [anon_sym_c_ulonglong] = ACTIONS(19),
    [anon_sym_c_longdouble] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_f128] = ACTIONS(19),
    [anon_sym_comptime_int] = ACTIONS(19),
    [anon_sym_comptime_float] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_noreturn] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_anyerror] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_volatile] = ACTIONS(27),
    [anon_sym_allowzero] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(29),
    [anon_sym_promise] = ACTIONS(31),
    [sym_identifier] = ACTIONS(235),
  },
  [157] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_DOT_STAR] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_or] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT] = ACTIONS(442),
    [anon_sym_DASH_PERCENT] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(444),
    [anon_sym_STAR_PERCENT] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_orelse] = ACTIONS(444),
    [anon_sym_catch] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_AMP_EQ] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(444),
  },
  [158] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [159] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [anon_sym_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_AMP_EQ] = ACTIONS(466),
    [anon_sym_PIPE_EQ] = ACTIONS(466),
    [anon_sym_CARET_EQ] = ACTIONS(466),
    [anon_sym_LT_LT_EQ] = ACTIONS(466),
    [anon_sym_GT_GT_EQ] = ACTIONS(466),
  },
  [160] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [161] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [162] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_STAR_STAR] = ACTIONS(446),
    [anon_sym_STAR_PERCENT] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [163] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [164] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [165] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_STAR_STAR] = ACTIONS(470),
    [anon_sym_STAR_PERCENT] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [166] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(369),
    [anon_sym_catch] = ACTIONS(369),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_AMP_EQ] = ACTIONS(476),
    [anon_sym_PIPE_EQ] = ACTIONS(476),
    [anon_sym_CARET_EQ] = ACTIONS(476),
    [anon_sym_LT_LT_EQ] = ACTIONS(476),
    [anon_sym_GT_GT_EQ] = ACTIONS(476),
  },
  [167] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [168] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_DOT_STAR] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_and] = ACTIONS(480),
    [anon_sym_or] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(480),
    [anon_sym_BANG_EQ] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_LT_EQ] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_GT_EQ] = ACTIONS(480),
    [anon_sym_LT_LT] = ACTIONS(478),
    [anon_sym_GT_GT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_PLUS_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT] = ACTIONS(478),
    [anon_sym_DASH_PERCENT] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_STAR_STAR] = ACTIONS(480),
    [anon_sym_STAR_PERCENT] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_orelse] = ACTIONS(480),
    [anon_sym_catch] = ACTIONS(480),
    [anon_sym_PLUS_EQ] = ACTIONS(480),
    [anon_sym_DASH_EQ] = ACTIONS(480),
    [anon_sym_STAR_EQ] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_SLASH_EQ] = ACTIONS(480),
    [anon_sym_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_AMP_EQ] = ACTIONS(480),
    [anon_sym_PIPE_EQ] = ACTIONS(480),
    [anon_sym_CARET_EQ] = ACTIONS(480),
    [anon_sym_LT_LT_EQ] = ACTIONS(480),
    [anon_sym_GT_GT_EQ] = ACTIONS(480),
  },
  [169] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [170] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [171] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [172] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(466),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(496),
    [anon_sym_catch] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [anon_sym_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_AMP_EQ] = ACTIONS(466),
    [anon_sym_PIPE_EQ] = ACTIONS(466),
    [anon_sym_CARET_EQ] = ACTIONS(466),
    [anon_sym_LT_LT_EQ] = ACTIONS(466),
    [anon_sym_GT_GT_EQ] = ACTIONS(466),
  },
  [173] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [174] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [175] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [176] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [177] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [178] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [179] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [180] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [181] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [182] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [183] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(476),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(496),
    [anon_sym_catch] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_AMP_EQ] = ACTIONS(476),
    [anon_sym_PIPE_EQ] = ACTIONS(476),
    [anon_sym_CARET_EQ] = ACTIONS(476),
    [anon_sym_LT_LT_EQ] = ACTIONS(476),
    [anon_sym_GT_GT_EQ] = ACTIONS(476),
  },
  [184] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_PLUS_PERCENT] = ACTIONS(361),
    [anon_sym_DASH_PERCENT] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [185] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_STAR_STAR] = ACTIONS(470),
    [anon_sym_STAR_PERCENT] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [186] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_STAR_STAR] = ACTIONS(446),
    [anon_sym_STAR_PERCENT] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [187] = {
    [sym_assignment_operator] = STATE(55),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_STAR_STAR] = ACTIONS(367),
    [anon_sym_STAR_PERCENT] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [188] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_DOT_STAR] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_or] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT] = ACTIONS(442),
    [anon_sym_DASH_PERCENT] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(444),
    [anon_sym_STAR_PERCENT] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_orelse] = ACTIONS(444),
    [anon_sym_catch] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_AMP_EQ] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(444),
  },
  [189] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(496),
    [anon_sym_catch] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [190] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(484),
    [anon_sym_or] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(458),
    [anon_sym_PLUS_PERCENT] = ACTIONS(456),
    [anon_sym_DASH_PERCENT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_STAR_STAR] = ACTIONS(462),
    [anon_sym_STAR_PERCENT] = ACTIONS(460),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_orelse] = ACTIONS(496),
    [anon_sym_catch] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [191] = {
    [sym_assignment_operator] = STATE(17),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_DOT_STAR] = ACTIONS(480),
    [anon_sym_and] = ACTIONS(480),
    [anon_sym_or] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(480),
    [anon_sym_BANG_EQ] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_LT_EQ] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_GT_EQ] = ACTIONS(480),
    [anon_sym_LT_LT] = ACTIONS(478),
    [anon_sym_GT_GT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_PLUS_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT] = ACTIONS(478),
    [anon_sym_DASH_PERCENT] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_STAR_STAR] = ACTIONS(480),
    [anon_sym_STAR_PERCENT] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_orelse] = ACTIONS(480),
    [anon_sym_catch] = ACTIONS(480),
    [anon_sym_PLUS_EQ] = ACTIONS(480),
    [anon_sym_DASH_EQ] = ACTIONS(480),
    [anon_sym_STAR_EQ] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_SLASH_EQ] = ACTIONS(480),
    [anon_sym_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_AMP_EQ] = ACTIONS(480),
    [anon_sym_PIPE_EQ] = ACTIONS(480),
    [anon_sym_CARET_EQ] = ACTIONS(480),
    [anon_sym_LT_LT_EQ] = ACTIONS(480),
    [anon_sym_GT_GT_EQ] = ACTIONS(480),
  },
  [192] = {
    [sym_type_prefix] = STATE(192),
    [aux_sym_array_type_repeat2] = STATE(192),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(271),
    [anon_sym_i8] = ACTIONS(274),
    [anon_sym_u8] = ACTIONS(274),
    [anon_sym_i16] = ACTIONS(274),
    [anon_sym_u16] = ACTIONS(274),
    [anon_sym_i32] = ACTIONS(274),
    [anon_sym_u32] = ACTIONS(274),
    [anon_sym_i64] = ACTIONS(274),
    [anon_sym_u64] = ACTIONS(274),
    [anon_sym_i128] = ACTIONS(274),
    [anon_sym_u128] = ACTIONS(274),
    [anon_sym_isize] = ACTIONS(274),
    [anon_sym_usize] = ACTIONS(274),
    [anon_sym_c_short] = ACTIONS(274),
    [anon_sym_c_ushort] = ACTIONS(274),
    [anon_sym_c_int] = ACTIONS(274),
    [anon_sym_c_uint] = ACTIONS(274),
    [anon_sym_c_long] = ACTIONS(274),
    [anon_sym_c_ulong] = ACTIONS(274),
    [anon_sym_c_longlong] = ACTIONS(274),
    [anon_sym_c_ulonglong] = ACTIONS(274),
    [anon_sym_c_longdouble] = ACTIONS(274),
    [anon_sym_f16] = ACTIONS(274),
    [anon_sym_f32] = ACTIONS(274),
    [anon_sym_f64] = ACTIONS(274),
    [anon_sym_f128] = ACTIONS(274),
    [anon_sym_comptime_int] = ACTIONS(274),
    [anon_sym_comptime_float] = ACTIONS(274),
    [anon_sym_bool] = ACTIONS(274),
    [anon_sym_void] = ACTIONS(274),
    [anon_sym_noreturn] = ACTIONS(274),
    [anon_sym_type] = ACTIONS(274),
    [anon_sym_anyerror] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_volatile] = ACTIONS(271),
    [anon_sym_allowzero] = ACTIONS(271),
    [anon_sym_align] = ACTIONS(278),
    [anon_sym_promise] = ACTIONS(281),
    [sym_identifier] = ACTIONS(274),
  },
  [193] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [194] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_STAR_STAR] = ACTIONS(470),
    [anon_sym_STAR_PERCENT] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [195] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [196] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(544),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [197] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_STAR_STAR] = ACTIONS(446),
    [anon_sym_STAR_PERCENT] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [198] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_DOT_STAR] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_or] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT] = ACTIONS(442),
    [anon_sym_DASH_PERCENT] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(444),
    [anon_sym_STAR_PERCENT] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_orelse] = ACTIONS(444),
    [anon_sym_catch] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_AMP_EQ] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(444),
  },
  [199] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_DOT_STAR] = ACTIONS(480),
    [anon_sym_and] = ACTIONS(480),
    [anon_sym_or] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(480),
    [anon_sym_BANG_EQ] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_LT_EQ] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_GT_EQ] = ACTIONS(480),
    [anon_sym_LT_LT] = ACTIONS(478),
    [anon_sym_GT_GT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_PLUS_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT] = ACTIONS(478),
    [anon_sym_DASH_PERCENT] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_STAR_STAR] = ACTIONS(480),
    [anon_sym_STAR_PERCENT] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_orelse] = ACTIONS(480),
    [anon_sym_catch] = ACTIONS(480),
    [anon_sym_PLUS_EQ] = ACTIONS(480),
    [anon_sym_DASH_EQ] = ACTIONS(480),
    [anon_sym_STAR_EQ] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_SLASH_EQ] = ACTIONS(480),
    [anon_sym_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_AMP_EQ] = ACTIONS(480),
    [anon_sym_PIPE_EQ] = ACTIONS(480),
    [anon_sym_CARET_EQ] = ACTIONS(480),
    [anon_sym_LT_LT_EQ] = ACTIONS(480),
    [anon_sym_GT_GT_EQ] = ACTIONS(480),
  },
  [200] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [201] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [202] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [203] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(552),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [204] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [205] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [206] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_STAR] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_DOT_STAR] = ACTIONS(480),
    [anon_sym_and] = ACTIONS(480),
    [anon_sym_or] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_EQ_EQ] = ACTIONS(480),
    [anon_sym_BANG_EQ] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_LT_EQ] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_GT_EQ] = ACTIONS(480),
    [anon_sym_LT_LT] = ACTIONS(478),
    [anon_sym_GT_GT] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_PLUS_PLUS] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT] = ACTIONS(478),
    [anon_sym_DASH_PERCENT] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_STAR_STAR] = ACTIONS(480),
    [anon_sym_STAR_PERCENT] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_orelse] = ACTIONS(480),
    [anon_sym_catch] = ACTIONS(480),
    [anon_sym_PLUS_EQ] = ACTIONS(480),
    [anon_sym_DASH_EQ] = ACTIONS(480),
    [anon_sym_STAR_EQ] = ACTIONS(480),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_SLASH_EQ] = ACTIONS(480),
    [anon_sym_PERCENT_EQ] = ACTIONS(480),
    [anon_sym_AMP_EQ] = ACTIONS(480),
    [anon_sym_PIPE_EQ] = ACTIONS(480),
    [anon_sym_CARET_EQ] = ACTIONS(480),
    [anon_sym_LT_LT_EQ] = ACTIONS(480),
    [anon_sym_GT_GT_EQ] = ACTIONS(480),
  },
  [207] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [208] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [209] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(476),
    [anon_sym_and] = ACTIONS(564),
    [anon_sym_or] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(582),
    [anon_sym_catch] = ACTIONS(582),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_AMP_EQ] = ACTIONS(476),
    [anon_sym_PIPE_EQ] = ACTIONS(476),
    [anon_sym_CARET_EQ] = ACTIONS(476),
    [anon_sym_LT_LT_EQ] = ACTIONS(476),
    [anon_sym_GT_GT_EQ] = ACTIONS(476),
  },
  [210] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(564),
    [anon_sym_or] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [211] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(476),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_AMP_EQ] = ACTIONS(476),
    [anon_sym_PIPE_EQ] = ACTIONS(476),
    [anon_sym_CARET_EQ] = ACTIONS(476),
    [anon_sym_LT_LT_EQ] = ACTIONS(476),
    [anon_sym_GT_GT_EQ] = ACTIONS(476),
  },
  [212] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [213] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_STAR_STAR] = ACTIONS(470),
    [anon_sym_STAR_PERCENT] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [214] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [215] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [216] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [217] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [218] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [219] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [220] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [221] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [222] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [223] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(448),
    [anon_sym_DASH] = ACTIONS(448),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_PLUS_PLUS] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT] = ACTIONS(448),
    [anon_sym_DASH_PERCENT] = ACTIONS(448),
    [anon_sym_SLASH] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_STAR_STAR] = ACTIONS(446),
    [anon_sym_STAR_PERCENT] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(446),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [224] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_DOT_STAR] = ACTIONS(466),
    [anon_sym_and] = ACTIONS(520),
    [anon_sym_or] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(532),
    [anon_sym_GT_GT] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_PLUS_PLUS] = ACTIONS(536),
    [anon_sym_PLUS_PERCENT] = ACTIONS(534),
    [anon_sym_DASH_PERCENT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_STAR_STAR] = ACTIONS(540),
    [anon_sym_STAR_PERCENT] = ACTIONS(538),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_orelse] = ACTIONS(542),
    [anon_sym_catch] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [anon_sym_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_AMP_EQ] = ACTIONS(466),
    [anon_sym_PIPE_EQ] = ACTIONS(466),
    [anon_sym_CARET_EQ] = ACTIONS(466),
    [anon_sym_LT_LT_EQ] = ACTIONS(466),
    [anon_sym_GT_GT_EQ] = ACTIONS(466),
  },
  [225] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT] = ACTIONS(468),
    [anon_sym_DASH_PERCENT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [226] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(468),
    [anon_sym_GT_GT] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [227] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(586),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(564),
    [anon_sym_or] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(582),
    [anon_sym_catch] = ACTIONS(582),
    [anon_sym_PLUS_EQ] = ACTIONS(371),
    [anon_sym_DASH_EQ] = ACTIONS(371),
    [anon_sym_STAR_EQ] = ACTIONS(371),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_SLASH_EQ] = ACTIONS(371),
    [anon_sym_PERCENT_EQ] = ACTIONS(371),
    [anon_sym_AMP_EQ] = ACTIONS(371),
    [anon_sym_PIPE_EQ] = ACTIONS(371),
    [anon_sym_CARET_EQ] = ACTIONS(371),
    [anon_sym_LT_LT_EQ] = ACTIONS(371),
    [anon_sym_GT_GT_EQ] = ACTIONS(371),
  },
  [228] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [229] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [230] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(470),
    [anon_sym_BANG_EQ] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [231] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(564),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [232] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(470),
    [anon_sym_and] = ACTIONS(470),
    [anon_sym_or] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(470),
    [anon_sym_catch] = ACTIONS(470),
    [anon_sym_PLUS_EQ] = ACTIONS(470),
    [anon_sym_DASH_EQ] = ACTIONS(470),
    [anon_sym_STAR_EQ] = ACTIONS(470),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(470),
    [anon_sym_PERCENT_EQ] = ACTIONS(470),
    [anon_sym_AMP_EQ] = ACTIONS(470),
    [anon_sym_PIPE_EQ] = ACTIONS(470),
    [anon_sym_CARET_EQ] = ACTIONS(470),
    [anon_sym_LT_LT_EQ] = ACTIONS(470),
    [anon_sym_GT_GT_EQ] = ACTIONS(470),
  },
  [233] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(448),
    [anon_sym_DOT_STAR] = ACTIONS(446),
    [anon_sym_and] = ACTIONS(446),
    [anon_sym_or] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_CARET] = ACTIONS(448),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [anon_sym_BANG_EQ] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(446),
    [anon_sym_catch] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
  },
  [234] = {
    [sym_assignment_operator] = STATE(57),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_DOT_STAR] = ACTIONS(466),
    [anon_sym_and] = ACTIONS(564),
    [anon_sym_or] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_PLUS_PLUS] = ACTIONS(580),
    [anon_sym_PLUS_PERCENT] = ACTIONS(578),
    [anon_sym_DASH_PERCENT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_STAR_PERCENT] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_orelse] = ACTIONS(582),
    [anon_sym_catch] = ACTIONS(582),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [anon_sym_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_AMP_EQ] = ACTIONS(466),
    [anon_sym_PIPE_EQ] = ACTIONS(466),
    [anon_sym_CARET_EQ] = ACTIONS(466),
    [anon_sym_LT_LT_EQ] = ACTIONS(466),
    [anon_sym_GT_GT_EQ] = ACTIONS(466),
  },
  [235] = {
    [sym_assignment_operator] = STATE(75),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_DOT_STAR] = ACTIONS(444),
    [anon_sym_and] = ACTIONS(444),
    [anon_sym_or] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT] = ACTIONS(442),
    [anon_sym_DASH_PERCENT] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(444),
    [anon_sym_STAR_PERCENT] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_orelse] = ACTIONS(444),
    [anon_sym_catch] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_PLUS_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_DASH_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_STAR_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_AMP_EQ] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(444),
  },
  [236] = {
    [aux_sym_array_type_repeat1] = STATE(236),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(588),
    [anon_sym_i8] = ACTIONS(588),
    [anon_sym_u8] = ACTIONS(588),
    [anon_sym_i16] = ACTIONS(588),
    [anon_sym_u16] = ACTIONS(588),
    [anon_sym_i32] = ACTIONS(588),
    [anon_sym_u32] = ACTIONS(588),
    [anon_sym_i64] = ACTIONS(588),
    [anon_sym_u64] = ACTIONS(588),
    [anon_sym_i128] = ACTIONS(588),
    [anon_sym_u128] = ACTIONS(588),
    [anon_sym_isize] = ACTIONS(588),
    [anon_sym_usize] = ACTIONS(588),
    [anon_sym_c_short] = ACTIONS(588),
    [anon_sym_c_ushort] = ACTIONS(588),
    [anon_sym_c_int] = ACTIONS(588),
    [anon_sym_c_uint] = ACTIONS(588),
    [anon_sym_c_long] = ACTIONS(588),
    [anon_sym_c_ulong] = ACTIONS(588),
    [anon_sym_c_longlong] = ACTIONS(588),
    [anon_sym_c_ulonglong] = ACTIONS(588),
    [anon_sym_c_longdouble] = ACTIONS(588),
    [anon_sym_f16] = ACTIONS(588),
    [anon_sym_f32] = ACTIONS(588),
    [anon_sym_f64] = ACTIONS(588),
    [anon_sym_f128] = ACTIONS(588),
    [anon_sym_comptime_int] = ACTIONS(588),
    [anon_sym_comptime_float] = ACTIONS(588),
    [anon_sym_bool] = ACTIONS(588),
    [anon_sym_void] = ACTIONS(588),
    [anon_sym_noreturn] = ACTIONS(588),
    [anon_sym_type] = ACTIONS(588),
    [anon_sym_anyerror] = ACTIONS(588),
    [anon_sym_QMARK] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_STAR] = ACTIONS(590),
    [anon_sym_volatile] = ACTIONS(588),
    [anon_sym_allowzero] = ACTIONS(588),
    [anon_sym_align] = ACTIONS(588),
    [anon_sym_promise] = ACTIONS(588),
    [sym_identifier] = ACTIONS(588),
  },
  [237] = {
    [aux_sym_array_expression_repeat1] = STATE(237),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(595),
    [anon_sym_i8] = ACTIONS(595),
    [anon_sym_u8] = ACTIONS(595),
    [anon_sym_i16] = ACTIONS(595),
    [anon_sym_u16] = ACTIONS(595),
    [anon_sym_i32] = ACTIONS(595),
    [anon_sym_u32] = ACTIONS(595),
    [anon_sym_i64] = ACTIONS(595),
    [anon_sym_u64] = ACTIONS(595),
    [anon_sym_i128] = ACTIONS(595),
    [anon_sym_u128] = ACTIONS(595),
    [anon_sym_isize] = ACTIONS(595),
    [anon_sym_usize] = ACTIONS(595),
    [anon_sym_c_short] = ACTIONS(595),
    [anon_sym_c_ushort] = ACTIONS(595),
    [anon_sym_c_int] = ACTIONS(595),
    [anon_sym_c_uint] = ACTIONS(595),
    [anon_sym_c_long] = ACTIONS(595),
    [anon_sym_c_ulong] = ACTIONS(595),
    [anon_sym_c_longlong] = ACTIONS(595),
    [anon_sym_c_ulonglong] = ACTIONS(595),
    [anon_sym_c_longdouble] = ACTIONS(595),
    [anon_sym_f16] = ACTIONS(595),
    [anon_sym_f32] = ACTIONS(595),
    [anon_sym_f64] = ACTIONS(595),
    [anon_sym_f128] = ACTIONS(595),
    [anon_sym_comptime_int] = ACTIONS(595),
    [anon_sym_comptime_float] = ACTIONS(595),
    [anon_sym_bool] = ACTIONS(595),
    [anon_sym_void] = ACTIONS(595),
    [anon_sym_noreturn] = ACTIONS(595),
    [anon_sym_type] = ACTIONS(595),
    [anon_sym_anyerror] = ACTIONS(595),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_STAR] = ACTIONS(597),
    [anon_sym_volatile] = ACTIONS(595),
    [anon_sym_allowzero] = ACTIONS(595),
    [anon_sym_align] = ACTIONS(595),
    [anon_sym_promise] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
  },
  [238] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(602),
    [anon_sym_i8] = ACTIONS(602),
    [anon_sym_u8] = ACTIONS(602),
    [anon_sym_i16] = ACTIONS(602),
    [anon_sym_u16] = ACTIONS(602),
    [anon_sym_i32] = ACTIONS(602),
    [anon_sym_u32] = ACTIONS(602),
    [anon_sym_i64] = ACTIONS(602),
    [anon_sym_u64] = ACTIONS(602),
    [anon_sym_i128] = ACTIONS(602),
    [anon_sym_u128] = ACTIONS(602),
    [anon_sym_isize] = ACTIONS(602),
    [anon_sym_usize] = ACTIONS(602),
    [anon_sym_c_short] = ACTIONS(602),
    [anon_sym_c_ushort] = ACTIONS(602),
    [anon_sym_c_int] = ACTIONS(602),
    [anon_sym_c_uint] = ACTIONS(602),
    [anon_sym_c_long] = ACTIONS(602),
    [anon_sym_c_ulong] = ACTIONS(602),
    [anon_sym_c_longlong] = ACTIONS(602),
    [anon_sym_c_ulonglong] = ACTIONS(602),
    [anon_sym_c_longdouble] = ACTIONS(602),
    [anon_sym_f16] = ACTIONS(602),
    [anon_sym_f32] = ACTIONS(602),
    [anon_sym_f64] = ACTIONS(602),
    [anon_sym_f128] = ACTIONS(602),
    [anon_sym_comptime_int] = ACTIONS(602),
    [anon_sym_comptime_float] = ACTIONS(602),
    [anon_sym_bool] = ACTIONS(602),
    [anon_sym_void] = ACTIONS(602),
    [anon_sym_noreturn] = ACTIONS(602),
    [anon_sym_type] = ACTIONS(602),
    [anon_sym_anyerror] = ACTIONS(602),
    [anon_sym_QMARK] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_STAR] = ACTIONS(604),
    [anon_sym_volatile] = ACTIONS(602),
    [anon_sym_allowzero] = ACTIONS(602),
    [anon_sym_align] = ACTIONS(602),
    [anon_sym_promise] = ACTIONS(602),
    [sym_identifier] = ACTIONS(602),
  },
  [239] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(606),
    [anon_sym_i8] = ACTIONS(606),
    [anon_sym_u8] = ACTIONS(606),
    [anon_sym_i16] = ACTIONS(606),
    [anon_sym_u16] = ACTIONS(606),
    [anon_sym_i32] = ACTIONS(606),
    [anon_sym_u32] = ACTIONS(606),
    [anon_sym_i64] = ACTIONS(606),
    [anon_sym_u64] = ACTIONS(606),
    [anon_sym_i128] = ACTIONS(606),
    [anon_sym_u128] = ACTIONS(606),
    [anon_sym_isize] = ACTIONS(606),
    [anon_sym_usize] = ACTIONS(606),
    [anon_sym_c_short] = ACTIONS(606),
    [anon_sym_c_ushort] = ACTIONS(606),
    [anon_sym_c_int] = ACTIONS(606),
    [anon_sym_c_uint] = ACTIONS(606),
    [anon_sym_c_long] = ACTIONS(606),
    [anon_sym_c_ulong] = ACTIONS(606),
    [anon_sym_c_longlong] = ACTIONS(606),
    [anon_sym_c_ulonglong] = ACTIONS(606),
    [anon_sym_c_longdouble] = ACTIONS(606),
    [anon_sym_f16] = ACTIONS(606),
    [anon_sym_f32] = ACTIONS(606),
    [anon_sym_f64] = ACTIONS(606),
    [anon_sym_f128] = ACTIONS(606),
    [anon_sym_comptime_int] = ACTIONS(606),
    [anon_sym_comptime_float] = ACTIONS(606),
    [anon_sym_bool] = ACTIONS(606),
    [anon_sym_void] = ACTIONS(606),
    [anon_sym_noreturn] = ACTIONS(606),
    [anon_sym_type] = ACTIONS(606),
    [anon_sym_anyerror] = ACTIONS(606),
    [anon_sym_QMARK] = ACTIONS(608),
    [anon_sym_LBRACK] = ACTIONS(608),
    [anon_sym_STAR] = ACTIONS(608),
    [anon_sym_volatile] = ACTIONS(606),
    [anon_sym_allowzero] = ACTIONS(606),
    [anon_sym_align] = ACTIONS(606),
    [anon_sym_promise] = ACTIONS(606),
    [sym_identifier] = ACTIONS(606),
  },
  [240] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(610),
    [anon_sym_i8] = ACTIONS(610),
    [anon_sym_u8] = ACTIONS(610),
    [anon_sym_i16] = ACTIONS(610),
    [anon_sym_u16] = ACTIONS(610),
    [anon_sym_i32] = ACTIONS(610),
    [anon_sym_u32] = ACTIONS(610),
    [anon_sym_i64] = ACTIONS(610),
    [anon_sym_u64] = ACTIONS(610),
    [anon_sym_i128] = ACTIONS(610),
    [anon_sym_u128] = ACTIONS(610),
    [anon_sym_isize] = ACTIONS(610),
    [anon_sym_usize] = ACTIONS(610),
    [anon_sym_c_short] = ACTIONS(610),
    [anon_sym_c_ushort] = ACTIONS(610),
    [anon_sym_c_int] = ACTIONS(610),
    [anon_sym_c_uint] = ACTIONS(610),
    [anon_sym_c_long] = ACTIONS(610),
    [anon_sym_c_ulong] = ACTIONS(610),
    [anon_sym_c_longlong] = ACTIONS(610),
    [anon_sym_c_ulonglong] = ACTIONS(610),
    [anon_sym_c_longdouble] = ACTIONS(610),
    [anon_sym_f16] = ACTIONS(610),
    [anon_sym_f32] = ACTIONS(610),
    [anon_sym_f64] = ACTIONS(610),
    [anon_sym_f128] = ACTIONS(610),
    [anon_sym_comptime_int] = ACTIONS(610),
    [anon_sym_comptime_float] = ACTIONS(610),
    [anon_sym_bool] = ACTIONS(610),
    [anon_sym_void] = ACTIONS(610),
    [anon_sym_noreturn] = ACTIONS(610),
    [anon_sym_type] = ACTIONS(610),
    [anon_sym_anyerror] = ACTIONS(610),
    [anon_sym_QMARK] = ACTIONS(612),
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_STAR] = ACTIONS(612),
    [anon_sym_volatile] = ACTIONS(610),
    [anon_sym_allowzero] = ACTIONS(610),
    [anon_sym_align] = ACTIONS(610),
    [anon_sym_promise] = ACTIONS(610),
    [sym_identifier] = ACTIONS(610),
  },
  [241] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(614),
    [anon_sym_i8] = ACTIONS(614),
    [anon_sym_u8] = ACTIONS(614),
    [anon_sym_i16] = ACTIONS(614),
    [anon_sym_u16] = ACTIONS(614),
    [anon_sym_i32] = ACTIONS(614),
    [anon_sym_u32] = ACTIONS(614),
    [anon_sym_i64] = ACTIONS(614),
    [anon_sym_u64] = ACTIONS(614),
    [anon_sym_i128] = ACTIONS(614),
    [anon_sym_u128] = ACTIONS(614),
    [anon_sym_isize] = ACTIONS(614),
    [anon_sym_usize] = ACTIONS(614),
    [anon_sym_c_short] = ACTIONS(614),
    [anon_sym_c_ushort] = ACTIONS(614),
    [anon_sym_c_int] = ACTIONS(614),
    [anon_sym_c_uint] = ACTIONS(614),
    [anon_sym_c_long] = ACTIONS(614),
    [anon_sym_c_ulong] = ACTIONS(614),
    [anon_sym_c_longlong] = ACTIONS(614),
    [anon_sym_c_ulonglong] = ACTIONS(614),
    [anon_sym_c_longdouble] = ACTIONS(614),
    [anon_sym_f16] = ACTIONS(614),
    [anon_sym_f32] = ACTIONS(614),
    [anon_sym_f64] = ACTIONS(614),
    [anon_sym_f128] = ACTIONS(614),
    [anon_sym_comptime_int] = ACTIONS(614),
    [anon_sym_comptime_float] = ACTIONS(614),
    [anon_sym_bool] = ACTIONS(614),
    [anon_sym_void] = ACTIONS(614),
    [anon_sym_noreturn] = ACTIONS(614),
    [anon_sym_type] = ACTIONS(614),
    [anon_sym_anyerror] = ACTIONS(614),
    [anon_sym_QMARK] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_STAR] = ACTIONS(616),
    [anon_sym_volatile] = ACTIONS(614),
    [anon_sym_allowzero] = ACTIONS(614),
    [anon_sym_align] = ACTIONS(614),
    [anon_sym_promise] = ACTIONS(614),
    [sym_identifier] = ACTIONS(614),
  },
  [242] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(618),
    [anon_sym_i8] = ACTIONS(618),
    [anon_sym_u8] = ACTIONS(618),
    [anon_sym_i16] = ACTIONS(618),
    [anon_sym_u16] = ACTIONS(618),
    [anon_sym_i32] = ACTIONS(618),
    [anon_sym_u32] = ACTIONS(618),
    [anon_sym_i64] = ACTIONS(618),
    [anon_sym_u64] = ACTIONS(618),
    [anon_sym_i128] = ACTIONS(618),
    [anon_sym_u128] = ACTIONS(618),
    [anon_sym_isize] = ACTIONS(618),
    [anon_sym_usize] = ACTIONS(618),
    [anon_sym_c_short] = ACTIONS(618),
    [anon_sym_c_ushort] = ACTIONS(618),
    [anon_sym_c_int] = ACTIONS(618),
    [anon_sym_c_uint] = ACTIONS(618),
    [anon_sym_c_long] = ACTIONS(618),
    [anon_sym_c_ulong] = ACTIONS(618),
    [anon_sym_c_longlong] = ACTIONS(618),
    [anon_sym_c_ulonglong] = ACTIONS(618),
    [anon_sym_c_longdouble] = ACTIONS(618),
    [anon_sym_f16] = ACTIONS(618),
    [anon_sym_f32] = ACTIONS(618),
    [anon_sym_f64] = ACTIONS(618),
    [anon_sym_f128] = ACTIONS(618),
    [anon_sym_comptime_int] = ACTIONS(618),
    [anon_sym_comptime_float] = ACTIONS(618),
    [anon_sym_bool] = ACTIONS(618),
    [anon_sym_void] = ACTIONS(618),
    [anon_sym_noreturn] = ACTIONS(618),
    [anon_sym_type] = ACTIONS(618),
    [anon_sym_anyerror] = ACTIONS(618),
    [anon_sym_QMARK] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_STAR] = ACTIONS(621),
    [anon_sym_volatile] = ACTIONS(618),
    [anon_sym_allowzero] = ACTIONS(618),
    [anon_sym_align] = ACTIONS(618),
    [anon_sym_promise] = ACTIONS(618),
    [sym_identifier] = ACTIONS(618),
  },
  [243] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(624),
    [anon_sym_i8] = ACTIONS(624),
    [anon_sym_u8] = ACTIONS(624),
    [anon_sym_i16] = ACTIONS(624),
    [anon_sym_u16] = ACTIONS(624),
    [anon_sym_i32] = ACTIONS(624),
    [anon_sym_u32] = ACTIONS(624),
    [anon_sym_i64] = ACTIONS(624),
    [anon_sym_u64] = ACTIONS(624),
    [anon_sym_i128] = ACTIONS(624),
    [anon_sym_u128] = ACTIONS(624),
    [anon_sym_isize] = ACTIONS(624),
    [anon_sym_usize] = ACTIONS(624),
    [anon_sym_c_short] = ACTIONS(624),
    [anon_sym_c_ushort] = ACTIONS(624),
    [anon_sym_c_int] = ACTIONS(624),
    [anon_sym_c_uint] = ACTIONS(624),
    [anon_sym_c_long] = ACTIONS(624),
    [anon_sym_c_ulong] = ACTIONS(624),
    [anon_sym_c_longlong] = ACTIONS(624),
    [anon_sym_c_ulonglong] = ACTIONS(624),
    [anon_sym_c_longdouble] = ACTIONS(624),
    [anon_sym_f16] = ACTIONS(624),
    [anon_sym_f32] = ACTIONS(624),
    [anon_sym_f64] = ACTIONS(624),
    [anon_sym_f128] = ACTIONS(624),
    [anon_sym_comptime_int] = ACTIONS(624),
    [anon_sym_comptime_float] = ACTIONS(624),
    [anon_sym_bool] = ACTIONS(624),
    [anon_sym_void] = ACTIONS(624),
    [anon_sym_noreturn] = ACTIONS(624),
    [anon_sym_type] = ACTIONS(624),
    [anon_sym_anyerror] = ACTIONS(624),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_STAR] = ACTIONS(626),
    [anon_sym_volatile] = ACTIONS(624),
    [anon_sym_allowzero] = ACTIONS(624),
    [anon_sym_align] = ACTIONS(624),
    [anon_sym_promise] = ACTIONS(624),
    [sym_identifier] = ACTIONS(624),
  },
  [244] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(628),
    [anon_sym_i8] = ACTIONS(628),
    [anon_sym_u8] = ACTIONS(628),
    [anon_sym_i16] = ACTIONS(628),
    [anon_sym_u16] = ACTIONS(628),
    [anon_sym_i32] = ACTIONS(628),
    [anon_sym_u32] = ACTIONS(628),
    [anon_sym_i64] = ACTIONS(628),
    [anon_sym_u64] = ACTIONS(628),
    [anon_sym_i128] = ACTIONS(628),
    [anon_sym_u128] = ACTIONS(628),
    [anon_sym_isize] = ACTIONS(628),
    [anon_sym_usize] = ACTIONS(628),
    [anon_sym_c_short] = ACTIONS(628),
    [anon_sym_c_ushort] = ACTIONS(628),
    [anon_sym_c_int] = ACTIONS(628),
    [anon_sym_c_uint] = ACTIONS(628),
    [anon_sym_c_long] = ACTIONS(628),
    [anon_sym_c_ulong] = ACTIONS(628),
    [anon_sym_c_longlong] = ACTIONS(628),
    [anon_sym_c_ulonglong] = ACTIONS(628),
    [anon_sym_c_longdouble] = ACTIONS(628),
    [anon_sym_f16] = ACTIONS(628),
    [anon_sym_f32] = ACTIONS(628),
    [anon_sym_f64] = ACTIONS(628),
    [anon_sym_f128] = ACTIONS(628),
    [anon_sym_comptime_int] = ACTIONS(628),
    [anon_sym_comptime_float] = ACTIONS(628),
    [anon_sym_bool] = ACTIONS(628),
    [anon_sym_void] = ACTIONS(628),
    [anon_sym_noreturn] = ACTIONS(628),
    [anon_sym_type] = ACTIONS(628),
    [anon_sym_anyerror] = ACTIONS(628),
    [anon_sym_QMARK] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_volatile] = ACTIONS(628),
    [anon_sym_allowzero] = ACTIONS(628),
    [anon_sym_align] = ACTIONS(628),
    [anon_sym_promise] = ACTIONS(628),
    [sym_identifier] = ACTIONS(628),
  },
  [245] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(632),
    [anon_sym_i8] = ACTIONS(632),
    [anon_sym_u8] = ACTIONS(632),
    [anon_sym_i16] = ACTIONS(632),
    [anon_sym_u16] = ACTIONS(632),
    [anon_sym_i32] = ACTIONS(632),
    [anon_sym_u32] = ACTIONS(632),
    [anon_sym_i64] = ACTIONS(632),
    [anon_sym_u64] = ACTIONS(632),
    [anon_sym_i128] = ACTIONS(632),
    [anon_sym_u128] = ACTIONS(632),
    [anon_sym_isize] = ACTIONS(632),
    [anon_sym_usize] = ACTIONS(632),
    [anon_sym_c_short] = ACTIONS(632),
    [anon_sym_c_ushort] = ACTIONS(632),
    [anon_sym_c_int] = ACTIONS(632),
    [anon_sym_c_uint] = ACTIONS(632),
    [anon_sym_c_long] = ACTIONS(632),
    [anon_sym_c_ulong] = ACTIONS(632),
    [anon_sym_c_longlong] = ACTIONS(632),
    [anon_sym_c_ulonglong] = ACTIONS(632),
    [anon_sym_c_longdouble] = ACTIONS(632),
    [anon_sym_f16] = ACTIONS(632),
    [anon_sym_f32] = ACTIONS(632),
    [anon_sym_f64] = ACTIONS(632),
    [anon_sym_f128] = ACTIONS(632),
    [anon_sym_comptime_int] = ACTIONS(632),
    [anon_sym_comptime_float] = ACTIONS(632),
    [anon_sym_bool] = ACTIONS(632),
    [anon_sym_void] = ACTIONS(632),
    [anon_sym_noreturn] = ACTIONS(632),
    [anon_sym_type] = ACTIONS(632),
    [anon_sym_anyerror] = ACTIONS(632),
    [anon_sym_QMARK] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_STAR] = ACTIONS(634),
    [anon_sym_volatile] = ACTIONS(632),
    [anon_sym_allowzero] = ACTIONS(632),
    [anon_sym_align] = ACTIONS(632),
    [anon_sym_promise] = ACTIONS(632),
    [sym_identifier] = ACTIONS(632),
  },
  [246] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(624),
    [anon_sym_i8] = ACTIONS(624),
    [anon_sym_u8] = ACTIONS(624),
    [anon_sym_i16] = ACTIONS(624),
    [anon_sym_u16] = ACTIONS(624),
    [anon_sym_i32] = ACTIONS(624),
    [anon_sym_u32] = ACTIONS(624),
    [anon_sym_i64] = ACTIONS(624),
    [anon_sym_u64] = ACTIONS(624),
    [anon_sym_i128] = ACTIONS(624),
    [anon_sym_u128] = ACTIONS(624),
    [anon_sym_isize] = ACTIONS(624),
    [anon_sym_usize] = ACTIONS(624),
    [anon_sym_c_short] = ACTIONS(624),
    [anon_sym_c_ushort] = ACTIONS(624),
    [anon_sym_c_int] = ACTIONS(624),
    [anon_sym_c_uint] = ACTIONS(624),
    [anon_sym_c_long] = ACTIONS(624),
    [anon_sym_c_ulong] = ACTIONS(624),
    [anon_sym_c_longlong] = ACTIONS(624),
    [anon_sym_c_ulonglong] = ACTIONS(624),
    [anon_sym_c_longdouble] = ACTIONS(624),
    [anon_sym_f16] = ACTIONS(624),
    [anon_sym_f32] = ACTIONS(624),
    [anon_sym_f64] = ACTIONS(624),
    [anon_sym_f128] = ACTIONS(624),
    [anon_sym_comptime_int] = ACTIONS(624),
    [anon_sym_comptime_float] = ACTIONS(624),
    [anon_sym_bool] = ACTIONS(624),
    [anon_sym_void] = ACTIONS(624),
    [anon_sym_noreturn] = ACTIONS(624),
    [anon_sym_type] = ACTIONS(624),
    [anon_sym_anyerror] = ACTIONS(624),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_STAR] = ACTIONS(626),
    [anon_sym_volatile] = ACTIONS(624),
    [anon_sym_allowzero] = ACTIONS(624),
    [anon_sym_align] = ACTIONS(624),
    [anon_sym_promise] = ACTIONS(624),
    [sym_identifier] = ACTIONS(636),
  },
  [247] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(624),
    [anon_sym_i8] = ACTIONS(624),
    [anon_sym_u8] = ACTIONS(624),
    [anon_sym_i16] = ACTIONS(624),
    [anon_sym_u16] = ACTIONS(624),
    [anon_sym_i32] = ACTIONS(624),
    [anon_sym_u32] = ACTIONS(624),
    [anon_sym_i64] = ACTIONS(624),
    [anon_sym_u64] = ACTIONS(624),
    [anon_sym_i128] = ACTIONS(624),
    [anon_sym_u128] = ACTIONS(624),
    [anon_sym_isize] = ACTIONS(624),
    [anon_sym_usize] = ACTIONS(624),
    [anon_sym_c_short] = ACTIONS(624),
    [anon_sym_c_ushort] = ACTIONS(624),
    [anon_sym_c_int] = ACTIONS(624),
    [anon_sym_c_uint] = ACTIONS(624),
    [anon_sym_c_long] = ACTIONS(624),
    [anon_sym_c_ulong] = ACTIONS(624),
    [anon_sym_c_longlong] = ACTIONS(624),
    [anon_sym_c_ulonglong] = ACTIONS(624),
    [anon_sym_c_longdouble] = ACTIONS(624),
    [anon_sym_f16] = ACTIONS(624),
    [anon_sym_f32] = ACTIONS(624),
    [anon_sym_f64] = ACTIONS(624),
    [anon_sym_f128] = ACTIONS(624),
    [anon_sym_comptime_int] = ACTIONS(624),
    [anon_sym_comptime_float] = ACTIONS(624),
    [anon_sym_bool] = ACTIONS(624),
    [anon_sym_void] = ACTIONS(624),
    [anon_sym_noreturn] = ACTIONS(624),
    [anon_sym_type] = ACTIONS(624),
    [anon_sym_anyerror] = ACTIONS(624),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_STAR] = ACTIONS(626),
    [anon_sym_volatile] = ACTIONS(624),
    [anon_sym_allowzero] = ACTIONS(624),
    [anon_sym_align] = ACTIONS(624),
    [anon_sym_promise] = ACTIONS(624),
    [sym_identifier] = ACTIONS(638),
  },
  [248] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_integer_literal] = ACTIONS(644),
    [sym_identifier] = ACTIONS(644),
  },
  [249] = {
    [aux_sym_string_literal_repeat1] = STATE(250),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(646),
    [anon_sym_DQUOTE2] = ACTIONS(648),
    [sym_escape_sequence] = ACTIONS(650),
  },
  [250] = {
    [aux_sym_string_literal_repeat1] = STATE(250),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(652),
    [anon_sym_DQUOTE2] = ACTIONS(655),
    [sym_escape_sequence] = ACTIONS(657),
  },
  [251] = {
    [sym_block] = STATE(127),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(660),
    [anon_sym_var] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [252] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym_integer_literal] = ACTIONS(662),
    [sym_identifier] = ACTIONS(662),
  },
  [253] = {
    [sym_block] = STATE(127),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(664),
    [anon_sym_var] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [254] = {
    [aux_sym_string_literal_repeat1] = STATE(249),
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [aux_sym_string_literal_token1] = ACTIONS(666),
    [anon_sym_DQUOTE2] = ACTIONS(668),
    [sym_escape_sequence] = ACTIONS(670),
  },
  [255] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(255),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(672),
  },
  [256] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(255),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(675),
  },
  [257] = {
    [aux_sym_anonymous_array_expr_repeat1] = STATE(255),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(677),
  },
  [258] = {
    [sym_doc_comment] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(679),
    [aux_sym_char_literal_token1] = ACTIONS(681),
    [sym_escape_sequence] = ACTIONS(683),
  },
  [259] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(685),
    [sym_identifier] = ACTIONS(685),
  },
  [260] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(660),
    [anon_sym_var] = ACTIONS(660),
  },
  [261] = {
    [sym_block] = STATE(127),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [262] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(664),
    [anon_sym_var] = ACTIONS(664),
  },
  [263] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(689),
  },
  [264] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(693),
  },
  [265] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym_EQ] = ACTIONS(697),
  },
  [266] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(699),
    [anon_sym_EQ] = ACTIONS(701),
  },
  [267] = {
    [sym_array_values] = STATE(148),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(241),
  },
  [268] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(703),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(707),
  },
  [271] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(709),
  },
  [272] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(711),
  },
  [273] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(713),
  },
  [274] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(715),
  },
  [275] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(717),
  },
  [276] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(719),
  },
  [277] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(721),
  },
  [278] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(723),
  },
  [279] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(725),
  },
  [280] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(727),
  },
  [281] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(729),
  },
  [282] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(731),
  },
  [283] = {
    [sym_doc_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(733),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(95),
  [11] = {.count = 1, .reusable = false}, SHIFT(262),
  [13] = {.count = 1, .reusable = false}, SHIFT(253),
  [15] = {.count = 1, .reusable = false}, SHIFT(246),
  [17] = {.count = 1, .reusable = false}, SHIFT(281),
  [19] = {.count = 1, .reusable = false}, SHIFT(112),
  [21] = {.count = 1, .reusable = true}, SHIFT(87),
  [23] = {.count = 1, .reusable = true}, SHIFT(252),
  [25] = {.count = 1, .reusable = true}, SHIFT(108),
  [27] = {.count = 1, .reusable = false}, SHIFT(243),
  [29] = {.count = 1, .reusable = false}, SHIFT(280),
  [31] = {.count = 1, .reusable = false}, SHIFT(272),
  [33] = {.count = 1, .reusable = false}, SHIFT(101),
  [35] = {.count = 1, .reusable = true}, SHIFT(5),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, SHIFT(11),
  [41] = {.count = 1, .reusable = true}, SHIFT(101),
  [43] = {.count = 1, .reusable = false}, SHIFT(155),
  [45] = {.count = 1, .reusable = true}, SHIFT(258),
  [47] = {.count = 1, .reusable = true}, SHIFT(254),
  [49] = {.count = 1, .reusable = true}, SHIFT(153),
  [51] = {.count = 1, .reusable = false}, SHIFT(154),
  [53] = {.count = 1, .reusable = false}, SHIFT(124),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [66] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [69] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [132] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [135] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(91),
  [145] = {.count = 1, .reusable = false}, SHIFT(260),
  [147] = {.count = 1, .reusable = false}, SHIFT(251),
  [149] = {.count = 1, .reusable = false}, SHIFT(247),
  [151] = {.count = 1, .reusable = false}, SHIFT(278),
  [153] = {.count = 1, .reusable = true}, SHIFT(138),
  [155] = {.count = 1, .reusable = true}, SHIFT(51),
  [157] = {.count = 1, .reusable = true}, SHIFT(115),
  [159] = {.count = 1, .reusable = true}, SHIFT(131),
  [161] = {.count = 1, .reusable = false}, SHIFT(261),
  [163] = {.count = 1, .reusable = true}, SHIFT(147),
  [165] = {.count = 1, .reusable = true}, SHIFT(39),
  [167] = {.count = 1, .reusable = true}, SHIFT(122),
  [169] = {.count = 1, .reusable = true}, SHIFT(142),
  [171] = {.count = 1, .reusable = true}, SHIFT(126),
  [173] = {.count = 1, .reusable = true}, SHIFT(130),
  [175] = {.count = 1, .reusable = true}, SHIFT(135),
  [177] = {.count = 1, .reusable = true}, SHIFT(150),
  [179] = {.count = 1, .reusable = true}, SHIFT(27),
  [181] = {.count = 1, .reusable = true}, SHIFT(152),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_unary_operator, 1),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_unary_operator, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 8, .production_id = 19),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 8, .production_id = 19),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__expression_statement, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__expression_statement, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 6, .production_id = 17),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 6, .production_id = 17),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_empty_statement, 1),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_empty_statement, 1),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 7, .production_id = 18),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 7, .production_id = 18),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 5, .production_id = 15),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_statement, 5, .production_id = 15),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_operator, 1),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_operator, 1),
  [215] = {.count = 1, .reusable = true}, SHIFT(103),
  [217] = {.count = 1, .reusable = false}, SHIFT(267),
  [219] = {.count = 1, .reusable = true}, SHIFT(248),
  [221] = {.count = 1, .reusable = false}, SHIFT(117),
  [223] = {.count = 1, .reusable = false}, SHIFT(275),
  [225] = {.count = 1, .reusable = false}, SHIFT(268),
  [227] = {.count = 1, .reusable = false}, SHIFT(114),
  [229] = {.count = 1, .reusable = false}, SHIFT(271),
  [231] = {.count = 1, .reusable = false}, SHIFT(120),
  [233] = {.count = 1, .reusable = false}, SHIFT(276),
  [235] = {.count = 1, .reusable = false}, SHIFT(113),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(12),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 2, .production_id = 5),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_array_type, 2, .production_id = 5),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_type, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_type, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 1),
  [257] = {.count = 1, .reusable = false}, SHIFT(116),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_multiline_string_literal, 2),
  [261] = {.count = 1, .reusable = false}, SHIFT(123),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_optional_type, 2),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_optional_type, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_array_type, 3, .production_id = 5),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_array_type, 3, .production_id = 5),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(243),
  [274] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat2, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat2, 2),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(280),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(272),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_type, 2),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_type, 2),
  [288] = {.count = 1, .reusable = false}, SHIFT(125),
  [290] = {.count = 1, .reusable = false}, SHIFT(121),
  [292] = {.count = 1, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(123),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__type, 1),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(125),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 16),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 5, .production_id = 16),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_comptime_block, 2),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_comptime_block, 2),
  [310] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(128),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 14),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 4, .production_id = 14),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 3),
  [333] = {.count = 1, .reusable = false}, SHIFT(15),
  [335] = {.count = 1, .reusable = false}, SHIFT(41),
  [337] = {.count = 1, .reusable = false}, SHIFT(38),
  [339] = {.count = 1, .reusable = true}, SHIFT(136),
  [341] = {.count = 1, .reusable = false}, SHIFT(40),
  [343] = {.count = 1, .reusable = true}, SHIFT(145),
  [345] = {.count = 1, .reusable = true}, SHIFT(10),
  [347] = {.count = 1, .reusable = true}, SHIFT(43),
  [349] = {.count = 1, .reusable = false}, SHIFT(44),
  [351] = {.count = 1, .reusable = false}, SHIFT(45),
  [353] = {.count = 1, .reusable = false}, SHIFT(48),
  [355] = {.count = 1, .reusable = true}, SHIFT(49),
  [357] = {.count = 1, .reusable = false}, SHIFT(49),
  [359] = {.count = 1, .reusable = false}, SHIFT(50),
  [361] = {.count = 1, .reusable = false}, SHIFT(52),
  [363] = {.count = 1, .reusable = true}, SHIFT(52),
  [365] = {.count = 1, .reusable = false}, SHIFT(53),
  [367] = {.count = 1, .reusable = true}, SHIFT(53),
  [369] = {.count = 1, .reusable = true}, SHIFT(54),
  [371] = {.count = 1, .reusable = true}, SHIFT(100),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 9),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_array_expr, 3, .production_id = 9),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2, .production_id = 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2, .production_id = 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 3),
  [393] = {.count = 1, .reusable = false}, SHIFT(118),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 4),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 4),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_string_literal, 2),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_string_literal, 2),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_multiline_string_literal_repeat1, 2), SHIFT_REPEAT(144),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_dereference_expression, 2, .production_id = 2),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_dereference_expression, 2, .production_id = 2),
  [414] = {.count = 1, .reusable = false}, SHIFT(128),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 5),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 5),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3, .production_id = 13),
  [424] = {.count = 1, .reusable = true}, SHIFT(133),
  [426] = {.count = 1, .reusable = true}, SHIFT(8),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_array_values, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_array_values, 2),
  [432] = {.count = 1, .reusable = false}, SHIFT(144),
  [434] = {.count = 1, .reusable = false}, SHIFT(146),
  [436] = {.count = 1, .reusable = false}, SHIFT(151),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_literal, 1),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_boolean_literal, 1),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2, .production_id = 4),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2, .production_id = 4),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [450] = {.count = 1, .reusable = false}, SHIFT(35),
  [452] = {.count = 1, .reusable = false}, SHIFT(34),
  [454] = {.count = 1, .reusable = false}, SHIFT(26),
  [456] = {.count = 1, .reusable = false}, SHIFT(25),
  [458] = {.count = 1, .reusable = true}, SHIFT(25),
  [460] = {.count = 1, .reusable = false}, SHIFT(24),
  [462] = {.count = 1, .reusable = true}, SHIFT(24),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3, .production_id = 10),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3, .production_id = 10),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [472] = {.count = 1, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 12),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_compound_assignment_expr, 3, .production_id = 12),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_reference_expression, 2, .production_id = 1),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_reference_expression, 2, .production_id = 1),
  [482] = {.count = 1, .reusable = false}, SHIFT(33),
  [484] = {.count = 1, .reusable = true}, SHIFT(32),
  [486] = {.count = 1, .reusable = false}, SHIFT(31),
  [488] = {.count = 1, .reusable = false}, SHIFT(30),
  [490] = {.count = 1, .reusable = false}, SHIFT(29),
  [492] = {.count = 1, .reusable = true}, SHIFT(28),
  [494] = {.count = 1, .reusable = false}, SHIFT(28),
  [496] = {.count = 1, .reusable = true}, SHIFT(20),
  [498] = {.count = 1, .reusable = true}, SHIFT(92),
  [500] = {.count = 1, .reusable = false}, SHIFT(36),
  [502] = {.count = 1, .reusable = true}, SHIFT(129),
  [504] = {.count = 1, .reusable = false}, SHIFT(64),
  [506] = {.count = 1, .reusable = false}, SHIFT(79),
  [508] = {.count = 1, .reusable = true}, SHIFT(79),
  [510] = {.count = 1, .reusable = true}, SHIFT(99),
  [512] = {.count = 1, .reusable = false}, SHIFT(60),
  [514] = {.count = 1, .reusable = false}, SHIFT(61),
  [516] = {.count = 1, .reusable = false}, SHIFT(62),
  [518] = {.count = 1, .reusable = false}, SHIFT(63),
  [520] = {.count = 1, .reusable = true}, SHIFT(65),
  [522] = {.count = 1, .reusable = false}, SHIFT(66),
  [524] = {.count = 1, .reusable = false}, SHIFT(67),
  [526] = {.count = 1, .reusable = false}, SHIFT(68),
  [528] = {.count = 1, .reusable = true}, SHIFT(69),
  [530] = {.count = 1, .reusable = false}, SHIFT(69),
  [532] = {.count = 1, .reusable = false}, SHIFT(70),
  [534] = {.count = 1, .reusable = false}, SHIFT(71),
  [536] = {.count = 1, .reusable = true}, SHIFT(71),
  [538] = {.count = 1, .reusable = false}, SHIFT(72),
  [540] = {.count = 1, .reusable = true}, SHIFT(72),
  [542] = {.count = 1, .reusable = true}, SHIFT(73),
  [544] = {.count = 1, .reusable = true}, SHIFT(93),
  [546] = {.count = 1, .reusable = true}, SHIFT(90),
  [548] = {.count = 1, .reusable = true}, SHIFT(89),
  [550] = {.count = 1, .reusable = true}, SHIFT(94),
  [552] = {.count = 1, .reusable = true}, SHIFT(96),
  [554] = {.count = 1, .reusable = true}, SHIFT(98),
  [556] = {.count = 1, .reusable = true}, SHIFT(88),
  [558] = {.count = 1, .reusable = true}, SHIFT(97),
  [560] = {.count = 1, .reusable = false}, SHIFT(74),
  [562] = {.count = 1, .reusable = false}, SHIFT(76),
  [564] = {.count = 1, .reusable = true}, SHIFT(78),
  [566] = {.count = 1, .reusable = false}, SHIFT(80),
  [568] = {.count = 1, .reusable = false}, SHIFT(81),
  [570] = {.count = 1, .reusable = false}, SHIFT(85),
  [572] = {.count = 1, .reusable = true}, SHIFT(84),
  [574] = {.count = 1, .reusable = false}, SHIFT(84),
  [576] = {.count = 1, .reusable = false}, SHIFT(83),
  [578] = {.count = 1, .reusable = false}, SHIFT(82),
  [580] = {.count = 1, .reusable = true}, SHIFT(82),
  [582] = {.count = 1, .reusable = true}, SHIFT(77),
  [584] = {.count = 1, .reusable = false}, SHIFT(59),
  [586] = {.count = 1, .reusable = true}, SHIFT(245),
  [588] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 6),
  [590] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 6),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 2, .production_id = 6), SHIFT_REPEAT(248),
  [595] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 6),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 6),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2, .production_id = 6), SHIFT_REPEAT(259),
  [602] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 8),
  [604] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 8),
  [606] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 8),
  [608] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 8),
  [610] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 2),
  [612] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 2),
  [614] = {.count = 1, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 7),
  [616] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 7),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 8), REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 8),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_type_repeat1, 3, .production_id = 8), REDUCE(aux_sym_array_expression_repeat1, 3, .production_id = 8),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_type_prefix, 1),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_type_prefix, 1),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym_type_prefix, 2),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_type_prefix, 2),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_type_prefix, 4),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_type_prefix, 4),
  [636] = {.count = 1, .reusable = false}, SHIFT(264),
  [638] = {.count = 1, .reusable = false}, SHIFT(265),
  [640] = {.count = 1, .reusable = true}, SHIFT(277),
  [642] = {.count = 1, .reusable = true}, SHIFT(240),
  [644] = {.count = 1, .reusable = true}, SHIFT(273),
  [646] = {.count = 1, .reusable = false}, SHIFT(250),
  [648] = {.count = 1, .reusable = true}, SHIFT(141),
  [650] = {.count = 1, .reusable = true}, SHIFT(250),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(250),
  [655] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [657] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(250),
  [660] = {.count = 1, .reusable = true}, SHIFT(279),
  [662] = {.count = 1, .reusable = true}, SHIFT(282),
  [664] = {.count = 1, .reusable = true}, SHIFT(274),
  [666] = {.count = 1, .reusable = false}, SHIFT(249),
  [668] = {.count = 1, .reusable = true}, SHIFT(143),
  [670] = {.count = 1, .reusable = true}, SHIFT(249),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_anonymous_array_expr_repeat1, 2), SHIFT_REPEAT(13),
  [675] = {.count = 1, .reusable = true}, SHIFT(9),
  [677] = {.count = 1, .reusable = true}, SHIFT(7),
  [679] = {.count = 1, .reusable = false}, SHIFT(132),
  [681] = {.count = 1, .reusable = false}, SHIFT(283),
  [683] = {.count = 1, .reusable = true}, SHIFT(283),
  [685] = {.count = 1, .reusable = true}, SHIFT(270),
  [687] = {.count = 1, .reusable = true}, SHIFT(109),
  [689] = {.count = 1, .reusable = true}, SHIFT(22),
  [691] = {.count = 1, .reusable = true}, SHIFT(105),
  [693] = {.count = 1, .reusable = true}, SHIFT(86),
  [695] = {.count = 1, .reusable = true}, SHIFT(104),
  [697] = {.count = 1, .reusable = true}, SHIFT(23),
  [699] = {.count = 1, .reusable = true}, SHIFT(107),
  [701] = {.count = 1, .reusable = true}, SHIFT(56),
  [703] = {.count = 1, .reusable = true}, SHIFT(47),
  [705] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [707] = {.count = 1, .reusable = true}, SHIFT(239),
  [709] = {.count = 1, .reusable = true}, SHIFT(42),
  [711] = {.count = 1, .reusable = true}, SHIFT(244),
  [713] = {.count = 1, .reusable = true}, SHIFT(238),
  [715] = {.count = 1, .reusable = true}, SHIFT(266),
  [717] = {.count = 1, .reusable = true}, SHIFT(19),
  [719] = {.count = 1, .reusable = true}, SHIFT(18),
  [721] = {.count = 1, .reusable = true}, SHIFT(241),
  [723] = {.count = 1, .reusable = true}, SHIFT(265),
  [725] = {.count = 1, .reusable = true}, SHIFT(263),
  [727] = {.count = 1, .reusable = true}, SHIFT(46),
  [729] = {.count = 1, .reusable = true}, SHIFT(264),
  [731] = {.count = 1, .reusable = true}, SHIFT(242),
  [733] = {.count = 1, .reusable = true}, SHIFT(139),
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
