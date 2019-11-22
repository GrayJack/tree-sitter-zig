
module.exports = grammar({
  name: 'zig',

  externals: $ => [],

  // Hey, you, writting more code to this, if you gonna put more itens here
  // it better be token, or things get messy.
  extras: $ => [/\s/, $.line_comment, $.doc_comment],

  conflicts: $ => [],

  rules: {
    doc_comment: $ => token(seq('///', /.*/)),
    line_comment: $ => token(seq('//', /.*/)),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
