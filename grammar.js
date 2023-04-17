const PREC = {
  TAG: 10,
  DJANGO: 20,
};

module.exports = grammar({
  name: 'django_template',

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  rules: {
    // Main entry point of the grammar
    source_file: $ => repeat($._element),

    _element: $ => choice(
      $._django_element,
      $._html_element
    ),

    _django_element: $ => choice(
      $.tag,
      $.variable
    ),

    _html_element: $ => choice(
      $.doctype,
      $.html_tag,
      $.text
    ),

    // Django template tags and expressions
    tag: $ => seq(
      '{%',
      optional(/\s+/),
      /.+?/,
      optional(/\s+/),
      '%}'
    ),

    variable: $ => seq(
      '{{',
      optional(/\s+/),
      /.+?/,
      optional(/\s+/),
      '}}'
    ),

    // HTML elements
    doctype: $ => /<!doctype html>/i,
    
    html_tag: $ => seq(
      '<',
      alias(/[\w-]+/, $.tag_name),
      repeat(
        seq(
          /\s+/,
          alias(/[\w-]+/, $.attribute_name),
          optional(seq('=', alias(/"[^"]*"|'[^']*'|[\w-]+/, $.attribute_value)))
        )
      ),
      optional(/\s+/),
      '>'
    ),

    // HTML text and comments
    text: $ => /[^{<]+/,
    comment: $ => token(seq('<!--', /[^-]+/, '-->')),
  }
});
