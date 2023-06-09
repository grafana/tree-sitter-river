(comment) @comment
[
  "-"
  "!"
  "!="
  "*"
  "/"
  "&&"
  "%"
  "^"
  "+"
  "<"
  "<="
  "="
  "=="
  ">"
  ">="
  "||"
] @operator

(attribute_key) @variable.attribute
(block
 name: (identifier) @type)
(string_lit) @string
(label) @string
(function_call
 function: (identifier) @function.builtin)
