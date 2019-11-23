
module.exports = grammar({
  name: 'zig',

  externals: $ => [],

  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: $ => [/\s/, $.line_comment, $.doc_comment],

  conflicts: $ => [],

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
      $.assignment,
    ),

    // Everything is a expression, except functions
    _expression: $ => choice(
      // $.assignment,
      $._literals,
    ),

    // Statements
    empty_statement: $ => ';',

    // Incomplete
    assignment: $ => seq(
      choice('const', 'var'),
      field('name', $.identifier),
      '=',
      field('expression', $._expression),
      ';'
    ),

    // Expressions


    _literals: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.boolean_literal,
      $.char_literal,
      $.string_literal,
      $.multiline_string_literal
    ),

    integer_literal: $ => token(seq(
      optional('-'),
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
        optional('-'),
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
      optional('c'),
      '"',
      repeat(choice(
        $.escape_sequence,
        /[^"\\]+/,
      )),
      token.immediate('"'),
    ),

    multiline_string_literal: $ => seq(
      optional('c'),
      '\\\\',
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

    identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
