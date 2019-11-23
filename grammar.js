const PREC = {
  call: 14,
  errorset: 13,
  unary: 12,
  postfix: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  special: 1,
  assign: 0,
}

const numeric_types = [
  'i8',
  'u8',
  'i16',
  'u16',
  'i32',
  'u32',
  'i64',
  'u64',
  'i128',
  'u128',
  'isize',
  'usize',
  'c_short',
  'c_ushort',
  'c_int',
  'c_uint',
  'c_long',
  'c_ulong',
  'c_longlong',
  'c_ulonglong',
  'c_longdouble',
  'f16',
  'f32',
  'f64',
  'f128',
  'comptime_int',
  'comptime_float',
]

const primitive_types = numeric_types.concat(['bool', 'void', 'noreturn', 'type', 'anyerror'])

module.exports = grammar({
  name: 'zig',

  externals: $ => [],

  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: $ => [/\s/, $.line_comment, $.doc_comment],

  conflicts: $ => [
    [$.optional_type, $.unary_operator],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    doc_comment: $ => token(seq('///', /.*/)),
    line_comment: $ => token(seq('//', /.*/)),

    _any: $ => choice($._statement, $._expression),

    _statement: $ => choice(
      $._expression_statement,
      $._declaration_statement,
    ),

    _expression_statement: $ => choice(
      seq($._expression, ';'),
    ),

    _declaration_statement: $ => choice(
      $.empty_statement,
      $.assignment_statement,
    ),

    // Everything is a expression, except functions
    _expression: $ => choice(
      $.assignment_expression,
      $.array_expression,
      $.anonymous_array_expr,
      $.compound_assignment_expr,
      $.unary_expression,
      $.binary_expression,
      $.identifier,
      $.comptime_block,
      $.block,
      $._literals,
    ),

    // Statements
    empty_statement: $ => ';',

    // Incomplete
    assignment_statement: $ => seq(
      optional(choice('threadlocal', 'comptime')),
      choice('const', 'var'),
      field('name', $.identifier),
      optional(seq(
        ':',
        field('type', $._type),
      )),
      '=',
      field('expression', $._expression),
      ';'
    ),

    _type: $ => choice(
      $.primitive_type,
      $.optional_type,
      $.identifier,
    ),

    primitive_type: $ => choice(...primitive_types),

    optional_type: $ => seq(
      '?',
      $._type,
    ),

    // Expressions
    comptime_block: $ => seq(
      'comptime',
      $.block,
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      optional($._expression),
      '}'
    ),

    array_expression: $ => seq(
      repeat(seq(
        '[',
        field('size', choice($.integer_literal, $.identifier)),
        ']',
      )),
      field('type', $._type),
      field('values', $.array_values),
    ),

    anonymous_array_expr: $ => seq(
      '.{',
      field('values', alias(sepBy(',', $._expression), $.array_values)),
      '}',
    ),

    array_values: $ => seq(
      '{',
      sepBy(',', $._expression),
      '}',
    ),

    assignment_expression: $ => prec.left(PREC.assign, seq(
      field('left', $._expression),
      '=',
      field('right', $._expression),
    )),

    compound_assignment_expr: $ => prec.left(PREC.assign, seq(
      field('left', $._expression),
      field('operator', $.assignment_operator),
      field('right', $._expression)
    )),

    unary_expression: $ => prec.left(PREC.unary, seq(
      field('operator', $.unary_operator),
      field('expression', $._expression),
    )),

    binary_expression: $ => {
      const table = [
        [PREC.and, 'and'],
        [PREC.or, 'or'],
        [PREC.bitand, '&'],
        [PREC.bitor, '|'],
        [PREC.bitxor, '^'],
        [PREC.comparative,  choice('==', '!=', '<', '<=', '>', '>=')],
        [PREC.shift, choice('<<', '>>')],
        [PREC.additive, choice('+', '-', '++', '+%', '-%')],
        [PREC.multiplicative, choice('*', '/', '%', '**', '*%', '||')],
        [PREC.special, choice('orelse', 'catch')],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', alias(operator, $.binary_operator)),
        field('right', $._expression),
      ))));
    },

    _literals: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.boolean_literal,
      $.null_literal,
      $.undefined_literal,
      $.char_literal,
      $.string_literal,
      $.multiline_string_literal
    ),

    integer_literal: $ => token(seq(
      choice(
        /[0-9]+/,
        /0x[0-9a-fA-F]+/,
        /0b[01]+/,
        /0o[0-7]+/
      ),
    )),

    float_literal: $ => {
      const decimal = /[0-9][0-9_]*/;
      const hexadecimal = /[0-9a-fA-F][0-9a-fA-F_]*/;
      return token(seq(
        choice(
          seq(/0[xX]/, hexadecimal, optional('.'), optional(hexadecimal)),
          seq(decimal, optional('.'), optional(decimal)),
        ),
        optional(/[eEpP][+-]?\d+/),
      ))
    },

    char_literal: $ => seq(
      '\'',
      optional(choice(
        $.escape_sequence,
        /./,
      )),
      '\'',
    ),

    string_literal: $ => seq(
      choice('"', 'c"'),
      repeat(choice(
        $.escape_sequence,
        /[^"\\]+/,
      )),
      token.immediate('"'),
    ),

    multiline_string_literal: $ => seq(
      choice('\\\\', 'c\\\\'),
      repeat(choice(
        $.escape_sequence,
        /.+/,
      )),
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu]/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/,
        /x[0-9a-fA-F]{2}/
      )
    )),

    boolean_literal: $ => choice('true', 'false'),

    null_literal: $ => 'null',

    undefined_literal: $ => 'undefined',

    assignment_operator: $ => choice('+=', '-=', '*=', '+%=', '-%=', '*%=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>='),
    unary_operator: $ => choice('~', '!', '-', '-%', '&', '?'),

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
