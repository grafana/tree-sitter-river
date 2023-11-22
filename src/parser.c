#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_DQUOTE = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_object_identifier = 4,
  anon_sym_DOT = 5,
  sym__identifier_part = 6,
  anon_sym_EQ = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DASH = 10,
  anon_sym_BANG = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_PERCENT = 14,
  anon_sym_CARET = 15,
  anon_sym_PLUS = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_COMMA = 27,
  aux_sym_numeric_lit_token1 = 28,
  aux_sym_numeric_lit_token2 = 29,
  aux_sym_numeric_lit_token3 = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  sym_null_lit = 33,
  anon_sym_DQUOTE2 = 34,
  sym__string_lit_basic_content = 35,
  sym_escape_sequence = 36,
  sym_comment = 37,
  sym__whitespace = 38,
  sym_config_file = 39,
  sym_block = 40,
  sym_label = 41,
  sym_block_body = 42,
  sym_identifier = 43,
  sym_attribute_key = 44,
  sym_attribute = 45,
  sym__expression = 46,
  sym_literal_value = 47,
  sym_operation = 48,
  sym_unary_operation = 49,
  sym_binary_operation = 50,
  sym_array = 51,
  sym__array_elems = 52,
  sym_object = 53,
  sym_object_assignment = 54,
  sym_access = 55,
  sym_function_call = 56,
  sym_function_params = 57,
  sym_numeric_lit = 58,
  sym_bool_lit = 59,
  sym_string_lit = 60,
  aux_sym_config_file_repeat1 = 61,
  aux_sym_block_body_repeat1 = 62,
  aux_sym_identifier_repeat1 = 63,
  aux_sym__array_elems_repeat1 = 64,
  aux_sym_object_repeat1 = 65,
  aux_sym_string_lit_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_object_identifier] = "object_identifier",
  [anon_sym_DOT] = ".",
  [sym__identifier_part] = "_identifier_part",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [aux_sym_numeric_lit_token3] = "numeric_lit_token3",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_DQUOTE2] = "\"",
  [sym__string_lit_basic_content] = "_string_lit_basic_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_config_file] = "config_file",
  [sym_block] = "block",
  [sym_label] = "label",
  [sym_block_body] = "block_body",
  [sym_identifier] = "identifier",
  [sym_attribute_key] = "attribute_key",
  [sym_attribute] = "attribute",
  [sym__expression] = "_expression",
  [sym_literal_value] = "literal_value",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_array] = "array",
  [sym__array_elems] = "_array_elems",
  [sym_object] = "object",
  [sym_object_assignment] = "object_assignment",
  [sym_access] = "access",
  [sym_function_call] = "function_call",
  [sym_function_params] = "function_params",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_block_body_repeat1] = "block_body_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym__array_elems_repeat1] = "_array_elems_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_string_lit_repeat1] = "string_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_object_identifier] = sym_object_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__identifier_part] = sym__identifier_part,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [aux_sym_numeric_lit_token3] = aux_sym_numeric_lit_token3,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__string_lit_basic_content] = sym__string_lit_basic_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_config_file] = sym_config_file,
  [sym_block] = sym_block,
  [sym_label] = sym_label,
  [sym_block_body] = sym_block_body,
  [sym_identifier] = sym_identifier,
  [sym_attribute_key] = sym_attribute_key,
  [sym_attribute] = sym_attribute,
  [sym__expression] = sym__expression,
  [sym_literal_value] = sym_literal_value,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_array] = sym_array,
  [sym__array_elems] = sym__array_elems,
  [sym_object] = sym_object,
  [sym_object_assignment] = sym_object_assignment,
  [sym_access] = sym_access,
  [sym_function_call] = sym_function_call,
  [sym_function_params] = sym_function_params,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_block_body_repeat1] = aux_sym_block_body_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym__array_elems_repeat1] = aux_sym__array_elems_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_string_lit_repeat1] = aux_sym_string_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
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
  [sym_object_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_part] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__string_lit_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_block_body] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_key] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_params] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__array_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_function = 2,
  field_key = 3,
  field_label = 4,
  field_name = 5,
  field_params = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_key] = "key",
  [field_label] = "label",
  [field_name] = "name",
  [field_params] = "params",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
    {field_name, 0},
  [2] =
    {field_body, 2},
    {field_label, 1},
    {field_name, 0},
  [5] =
    {field_key, 0},
    {field_value, 2},
  [7] =
    {field_function, 0},
  [8] =
    {field_function, 0},
    {field_params, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 11,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 10,
  [26] = 9,
  [27] = 21,
  [28] = 17,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 29,
  [35] = 31,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 41,
  [61] = 58,
  [62] = 54,
  [63] = 55,
  [64] = 57,
  [65] = 52,
  [66] = 50,
  [67] = 56,
  [68] = 39,
  [69] = 51,
  [70] = 48,
  [71] = 46,
  [72] = 49,
  [73] = 47,
  [74] = 43,
  [75] = 75,
  [76] = 45,
  [77] = 53,
  [78] = 59,
  [79] = 44,
  [80] = 42,
  [81] = 38,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 94,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 119,
  [126] = 120,
  [127] = 118,
  [128] = 128,
};

static inline bool sym_object_identifier_character_set_1(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym__identifier_part_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym__identifier_part_character_set_2(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (sym__identifier_part_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym__identifier_part_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (sym__identifier_part_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '|') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym__identifier_part_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_object_identifier);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_object_identifier);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_object_identifier);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'a') ADVANCE(36);
      if (sym__identifier_part_character_set_2(lookahead)) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'e') ADVANCE(72);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'e') ADVANCE(73);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'l') ADVANCE(40);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'l') ADVANCE(74);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'l') ADVANCE(37);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'r') ADVANCE(41);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 's') ADVANCE(35);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'u') ADVANCE(34);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier_part);
      if (lookahead == 'u') ADVANCE(38);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier_part);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_object_identifier_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__string_lit_basic_content);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__string_lit_basic_content);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__string_lit_basic_content);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__string_lit_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 30},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__identifier_part] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [aux_sym_numeric_lit_token2] = ACTIONS(1),
    [aux_sym_numeric_lit_token3] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(121),
    [sym_block] = STATE(99),
    [sym_identifier] = STATE(102),
    [aux_sym_config_file_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier_part] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    STATE(118), 1,
      sym_function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(84), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [65] = 17,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    STATE(127), 1,
      sym_function_params,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(84), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [130] = 17,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(125), 1,
      sym__array_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(83), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [195] = 17,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(119), 1,
      sym__array_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(83), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [260] = 16,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(82), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [322] = 16,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(82), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [384] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(65), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [443] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(49), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [502] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(51), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [561] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(77), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [620] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(62), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [679] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(52), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [738] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(53), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [797] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(64), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [856] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(54), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [915] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(63), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [974] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(57), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1033] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(88), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1092] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(89), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1151] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(86), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1210] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(85), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1269] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(82), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1328] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(75), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1387] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(69), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1446] = 15,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__identifier_part,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(59), 1,
      sym_null_lit,
    STATE(40), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(53), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(71), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(72), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1505] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(87), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1564] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym__identifier_part,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym_numeric_lit_token3,
    ACTIONS(29), 1,
      sym_null_lit,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(23), 2,
      aux_sym_numeric_lit_token1,
      aux_sym_numeric_lit_token2,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(46), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(55), 7,
      sym__expression,
      sym_literal_value,
      sym_operation,
      sym_array,
      sym_object,
      sym_access,
      sym_function_call,
  [1623] = 5,
    ACTIONS(63), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 20,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1661] = 5,
    ACTIONS(63), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 20,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1699] = 5,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(76), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 20,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1737] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(76), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 21,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__identifier_part,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1770] = 5,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(69), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 16,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [1805] = 5,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 16,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [1840] = 5,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(76), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 16,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [1875] = 5,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1909] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(76), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 17,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [1939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1968] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1997] = 5,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2030] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(105), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2058] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(109), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2086] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(113), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2114] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(117), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(121), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2170] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(125), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2198] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2226] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(133), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2254] = 9,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 6,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2294] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2322] = 8,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 7,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2360] = 7,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 9,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2396] = 6,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 11,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2430] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2458] = 9,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(157), 6,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2498] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(161), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2526] = 5,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 13,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2558] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(165), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2586] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(169), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 16,
      anon_sym_RBRACE,
      sym__identifier_part,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(105), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(165), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2668] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2695] = 10,
    ACTIONS(171), 1,
      sym_object_identifier,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(183), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(157), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2736] = 5,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(155), 3,
      sym_object_identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 11,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2767] = 8,
    ACTIONS(155), 1,
      sym_object_identifier,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 7,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2804] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(161), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(97), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2885] = 9,
    ACTIONS(155), 1,
      sym_object_identifier,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(183), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 5,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(133), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(125), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [2978] = 10,
    ACTIONS(155), 1,
      sym_object_identifier,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(183), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(129), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(113), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3073] = 11,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      anon_sym_AMP_AMP,
    ACTIONS(189), 1,
      sym_object_identifier,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(183), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(187), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3116] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(121), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3143] = 6,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(155), 3,
      sym_object_identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(135), 9,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(169), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(117), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3230] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(109), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3257] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(93), 4,
      sym_object_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 14,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
  [3284] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(193), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3324] = 12,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym__array_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3368] = 12,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__array_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3412] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(205), 2,
      anon_sym_RBRACE,
      sym__identifier_part,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3451] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3489] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3527] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3565] = 10,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3603] = 6,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      sym__identifier_part,
    STATE(102), 1,
      sym_identifier,
    STATE(123), 1,
      sym_attribute_key,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(91), 3,
      sym_block,
      sym_attribute,
      aux_sym_block_body_repeat1,
  [3625] = 6,
    ACTIONS(217), 1,
      sym__identifier_part,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_identifier,
    STATE(123), 1,
      sym_attribute_key,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(92), 3,
      sym_block,
      sym_attribute,
      aux_sym_block_body_repeat1,
  [3647] = 6,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym__identifier_part,
    STATE(102), 1,
      sym_identifier,
    STATE(123), 1,
      sym_attribute_key,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(92), 3,
      sym_block,
      sym_attribute,
      aux_sym_block_body_repeat1,
  [3669] = 7,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_object_identifier,
    STATE(93), 1,
      aux_sym_object_repeat1,
    STATE(107), 1,
      sym_object_assignment,
    STATE(124), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3692] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      sym_object_identifier,
    STATE(95), 1,
      aux_sym_object_repeat1,
    STATE(107), 1,
      sym_object_assignment,
    STATE(124), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3715] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym_object_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_object_repeat1,
    STATE(107), 1,
      sym_object_assignment,
    STATE(124), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3738] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym_object_identifier,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_object_repeat1,
    STATE(107), 1,
      sym_object_assignment,
    STATE(124), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3761] = 7,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym_object_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_object_repeat1,
    STATE(107), 1,
      sym_object_assignment,
    STATE(124), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3784] = 5,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym__identifier_part,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(98), 2,
      sym_block,
      aux_sym_config_file_repeat1,
  [3802] = 5,
    ACTIONS(7), 1,
      sym__identifier_part,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(98), 2,
      sym_block,
      aux_sym_config_file_repeat1,
  [3820] = 5,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [3838] = 4,
    ACTIONS(253), 1,
      anon_sym_DQUOTE2,
    STATE(101), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(255), 2,
      sym__string_lit_basic_content,
      sym_escape_sequence,
    ACTIONS(258), 2,
      sym_comment,
      sym__whitespace,
  [3853] = 5,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block_body,
    STATE(117), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3870] = 4,
    ACTIONS(264), 1,
      anon_sym_DQUOTE2,
    STATE(101), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(266), 2,
      sym__string_lit_basic_content,
      sym_escape_sequence,
  [3885] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE2,
    STATE(101), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(266), 2,
      sym__string_lit_basic_content,
      sym_escape_sequence,
  [3900] = 4,
    ACTIONS(270), 1,
      anon_sym_DQUOTE2,
    STATE(104), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(272), 2,
      sym__string_lit_basic_content,
      sym_escape_sequence,
  [3915] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym__array_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(193), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3930] = 4,
    ACTIONS(279), 1,
      sym_object_identifier,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(277), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [3945] = 4,
    ACTIONS(283), 1,
      anon_sym_DQUOTE2,
    STATE(103), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(258), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(285), 2,
      sym__string_lit_basic_content,
      sym_escape_sequence,
  [3960] = 4,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym__array_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3974] = 4,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym__array_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [3988] = 3,
    ACTIONS(291), 1,
      sym_object_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(229), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [4000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__identifier_part,
  [4010] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__identifier_part,
  [4020] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__identifier_part,
  [4030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__identifier_part,
  [4040] = 3,
    ACTIONS(7), 1,
      sym__identifier_part,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4051] = 3,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4062] = 2,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4070] = 2,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4078] = 2,
    ACTIONS(305), 1,
      sym__identifier_part,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4086] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4094] = 2,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4102] = 2,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4110] = 2,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4118] = 2,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4126] = 2,
    ACTIONS(317), 1,
      sym__identifier_part,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4134] = 2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4142] = 2,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 443,
  [SMALL_STATE(10)] = 502,
  [SMALL_STATE(11)] = 561,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 679,
  [SMALL_STATE(14)] = 738,
  [SMALL_STATE(15)] = 797,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 915,
  [SMALL_STATE(18)] = 974,
  [SMALL_STATE(19)] = 1033,
  [SMALL_STATE(20)] = 1092,
  [SMALL_STATE(21)] = 1151,
  [SMALL_STATE(22)] = 1210,
  [SMALL_STATE(23)] = 1269,
  [SMALL_STATE(24)] = 1328,
  [SMALL_STATE(25)] = 1387,
  [SMALL_STATE(26)] = 1446,
  [SMALL_STATE(27)] = 1505,
  [SMALL_STATE(28)] = 1564,
  [SMALL_STATE(29)] = 1623,
  [SMALL_STATE(30)] = 1661,
  [SMALL_STATE(31)] = 1699,
  [SMALL_STATE(32)] = 1737,
  [SMALL_STATE(33)] = 1770,
  [SMALL_STATE(34)] = 1805,
  [SMALL_STATE(35)] = 1840,
  [SMALL_STATE(36)] = 1875,
  [SMALL_STATE(37)] = 1909,
  [SMALL_STATE(38)] = 1939,
  [SMALL_STATE(39)] = 1968,
  [SMALL_STATE(40)] = 1997,
  [SMALL_STATE(41)] = 2030,
  [SMALL_STATE(42)] = 2058,
  [SMALL_STATE(43)] = 2086,
  [SMALL_STATE(44)] = 2114,
  [SMALL_STATE(45)] = 2142,
  [SMALL_STATE(46)] = 2170,
  [SMALL_STATE(47)] = 2198,
  [SMALL_STATE(48)] = 2226,
  [SMALL_STATE(49)] = 2254,
  [SMALL_STATE(50)] = 2294,
  [SMALL_STATE(51)] = 2322,
  [SMALL_STATE(52)] = 2360,
  [SMALL_STATE(53)] = 2396,
  [SMALL_STATE(54)] = 2430,
  [SMALL_STATE(55)] = 2458,
  [SMALL_STATE(56)] = 2498,
  [SMALL_STATE(57)] = 2526,
  [SMALL_STATE(58)] = 2558,
  [SMALL_STATE(59)] = 2586,
  [SMALL_STATE(60)] = 2614,
  [SMALL_STATE(61)] = 2641,
  [SMALL_STATE(62)] = 2668,
  [SMALL_STATE(63)] = 2695,
  [SMALL_STATE(64)] = 2736,
  [SMALL_STATE(65)] = 2767,
  [SMALL_STATE(66)] = 2804,
  [SMALL_STATE(67)] = 2831,
  [SMALL_STATE(68)] = 2858,
  [SMALL_STATE(69)] = 2885,
  [SMALL_STATE(70)] = 2924,
  [SMALL_STATE(71)] = 2951,
  [SMALL_STATE(72)] = 2978,
  [SMALL_STATE(73)] = 3019,
  [SMALL_STATE(74)] = 3046,
  [SMALL_STATE(75)] = 3073,
  [SMALL_STATE(76)] = 3116,
  [SMALL_STATE(77)] = 3143,
  [SMALL_STATE(78)] = 3176,
  [SMALL_STATE(79)] = 3203,
  [SMALL_STATE(80)] = 3230,
  [SMALL_STATE(81)] = 3257,
  [SMALL_STATE(82)] = 3284,
  [SMALL_STATE(83)] = 3324,
  [SMALL_STATE(84)] = 3368,
  [SMALL_STATE(85)] = 3412,
  [SMALL_STATE(86)] = 3451,
  [SMALL_STATE(87)] = 3489,
  [SMALL_STATE(88)] = 3527,
  [SMALL_STATE(89)] = 3565,
  [SMALL_STATE(90)] = 3603,
  [SMALL_STATE(91)] = 3625,
  [SMALL_STATE(92)] = 3647,
  [SMALL_STATE(93)] = 3669,
  [SMALL_STATE(94)] = 3692,
  [SMALL_STATE(95)] = 3715,
  [SMALL_STATE(96)] = 3738,
  [SMALL_STATE(97)] = 3761,
  [SMALL_STATE(98)] = 3784,
  [SMALL_STATE(99)] = 3802,
  [SMALL_STATE(100)] = 3820,
  [SMALL_STATE(101)] = 3838,
  [SMALL_STATE(102)] = 3853,
  [SMALL_STATE(103)] = 3870,
  [SMALL_STATE(104)] = 3885,
  [SMALL_STATE(105)] = 3900,
  [SMALL_STATE(106)] = 3915,
  [SMALL_STATE(107)] = 3930,
  [SMALL_STATE(108)] = 3945,
  [SMALL_STATE(109)] = 3960,
  [SMALL_STATE(110)] = 3974,
  [SMALL_STATE(111)] = 3988,
  [SMALL_STATE(112)] = 4000,
  [SMALL_STATE(113)] = 4010,
  [SMALL_STATE(114)] = 4020,
  [SMALL_STATE(115)] = 4030,
  [SMALL_STATE(116)] = 4040,
  [SMALL_STATE(117)] = 4051,
  [SMALL_STATE(118)] = 4062,
  [SMALL_STATE(119)] = 4070,
  [SMALL_STATE(120)] = 4078,
  [SMALL_STATE(121)] = 4086,
  [SMALL_STATE(122)] = 4094,
  [SMALL_STATE(123)] = 4102,
  [SMALL_STATE(124)] = 4110,
  [SMALL_STATE(125)] = 4118,
  [SMALL_STATE(126)] = 4126,
  [SMALL_STATE(127)] = 4134,
  [SMALL_STATE(128)] = 4142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_elems, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_elems, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(126),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(120),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_assignment, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_assignment, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__array_elems_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_elems, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_params, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_body_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_body_repeat1, 2), SHIFT_REPEAT(100),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(108),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(124),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(30),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_key, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2), SHIFT_REPEAT(101),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__array_elems_repeat1, 2), SHIFT_REPEAT(23),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_params, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_body, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_river(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
