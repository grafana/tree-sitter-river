module.exports = grammar({
  name: "river",
  extras: ($) => [$.comment, $._whitespace],
  rules: {
    config_file: ($) => repeat($.block),
    block: ($) => seq(field('name',$.identifier), optional($.label), $.block_body),
    label: ($) => seq('"', $.identifier, '"'),
    block_body: ($) => seq("{", repeat(choice($.attribute, $.block)), "}"),
    identifier: ($) =>
      seq($._identifier_part, repeat(seq(".", $._identifier_part))),
    _identifier_part: ($) => /(\p{ID_Start}([\p{ID_Continue}_]*))/,
    attribute_key: ($) => $._identifier_part,
    attribute: ($) => seq($.attribute_key, "=", $._expression),
    _expression: ($) =>
      choice(
        $.literal_value,
        $.array,
        $.object,
        $.identifier,
        $.function_call,
        $.operation,
        $.access,
        seq("(", $._expression, ")")
      ),
    literal_value: ($) =>
      choice($.numeric_lit, $.bool_lit, $.null_lit, $.string_lit),

    operation: ($) => choice($.unary_operation, $.binary_operation),
    unary_operation: ($) => prec.left(1, seq(choice("-", "!"), $._expression)),

    binary_operation: ($) => {
      const table = [
        [6, choice("*", "/", "%", "^")],
        [5, choice("+", "-")],
        [4, choice(">", ">=", "<", "<=")],
        [3, choice("==", "!=")],
        [2, choice("&&")],
        [1, choice("||")],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(precedence, seq($._expression, operator, $._expression))
        )
      );
    },

    array: ($) => seq("[", optional($._array_elems), "]"),
    _array_elems: ($) =>
      seq($._expression, repeat(seq(",", $._expression)), optional(",")),

    object: ($) =>
      seq("{", repeat(seq($.object_assignment, optional(","))), "}"),
    object_assignment: ($) =>
      seq(choice($.string_lit, $.identifier), "=", $._expression),

    access: ($) => seq($.identifier,'[',$._expression,']'),

    function_call: ($) =>
      seq($.identifier, "(", optional($.function_params), ")"),
    function_params: ($) => seq($._expression, repeat(seq(",", $._expression))),

    numeric_lit: ($) =>
      choice(/[0-9]+(\.[0-9]+)?/, /[0-9]+([eE][\+-][0-9]+)?/, /0x[0-9a-zA-Z]+/),

    bool_lit: ($) => choice("true", "false"),

    null_lit: ($) => "null",

    string_lit: ($) =>
      seq(
        '"',
        repeat(choice($._string_lit_basic_content, $.escape_sequence)),
        token.immediate('"')
      ),
    _string_lit_basic_content: ($) => token.immediate(prec(1, /[^"\n\\]+/)),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      ),
    comment: ($) =>
      token(
        choice(
          seq("#", /.*/),
          seq("//", /.*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),

    _whitespace: ($) => token(/\s/),
  },
});
