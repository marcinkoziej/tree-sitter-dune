const ATOM_CHAR = /[^;()"%\x00-\x20\x7f-\xff]/
const VAR_CHAR = /[^;()"\x00-\x20\x7f-\xff:{}]/

module.exports = grammar({
  name: 'dune',

  extras: $ => [
    /\s/,
    $.comment
  ],

  inline: $ => [
    $._value,
    $._variable_trail
  ],

  rules: {
    configuration: $ => repeat($._value),

    _value: $ => choice(
      $.atom,
      $.quoted_string,
      $.block_string,
      $.raw_string,
      $.list
    ),

    atom: $ => seq(
      choice(
        token(choice(repeat1(ATOM_CHAR), '%')),
        $.variable
      ),
      repeat(choice(
        token.immediate(choice(repeat1(ATOM_CHAR), '%')),
        alias($._immediate_variable, $.variable)
      ))
    ),

    quoted_string: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        alias($._immediate_variable, $.variable),
        token.immediate(prec(1, /[^\\"%]+/)),
        token.immediate('%')
      )),
      '"'
    ),

    block_string: $ => seq(
      '"\\|',
      repeat(choice(
        $.escape_sequence,
        alias($._immediate_variable, $.variable),
        token.immediate(prec(1, /[^\\"%\n\r]+/)),
        token.immediate('%')
      ))
    ),

    raw_string: $ => seq(
      '"\\>',
      token.immediate(prec(1, /.*/))
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /\n\s*/,
        '%{',
        /[\\'"ntbr]/,
        /[0-9][0-9][0-9]/,
        /x[A-Fa-f0-9][A-Fa-f0-9]/
      )
    )),

    variable: $ => seq(
      '%{',
      $._variable_trail
    ),

    _immediate_variable: $ => seq(
      token.immediate('%{'),
      $._variable_trail
    ),

    _variable_trail: $ => seq(
      $.variable_name,
      optional(seq(
        ':',
        optional($.variable_value)
      )),
      '}'
    ),

    variable_name: $ => token(repeat1(VAR_CHAR)),

    variable_value: $ => token(repeat1(choice(VAR_CHAR, ':'))),

    list: $ => seq(
      '(',
      repeat($._value),
      ')'
    ),

    comment: $ => /;.*/
  }
})
