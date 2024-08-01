#ifndef __TOKENS_H
#define __TOKENS_H

#include <map>
#include <set>
#include <string>

using namespace std;

const typedef enum {
    KEYWORD,
    OPERATOR,
    SYMBOL,
    IDENTIFIER,
    VALUE,
    STRING,
} token_t;

const set<string> sKeywords { "False",    "await", "else",   "import", "pass",    "None",   "break",
                              "except",   "raise", "True",   "class",  "finally", "return", "and",
                              "continue", "for",   "lambda", "try",    "as",      "def",    "from",
                              "nonlocal", "while", "assert", "del",    "global",  "not",    "with",
                              "async",    "elif",  "if",     "or",     "yield",   "is",     "in" };

const map<string, string> mSymbols { { "dot", "." },
                                     { "open_parenthesis", "(" },
                                     { "close_parenthesis", ")" },
                                     { "open_curly_brace", "{" },
                                     { "close_curly_brace", "}" },
                                     { "open_square_bracket", "[" },
                                     { "close_square_bracket", "]" },
                                     { "double_quote", "\"" },
                                     { "single_quote", "'" },
                                     { "hashtag", "#" },
                                     { "colon", ":" },
                                     { "backslash", "\\" },
                                     { "tab", "\t" },
                                     { "newline", "\n" },
                                     { "whitespace", " " } };

const map<string, string> mOperators {
    { "addition", "+" },
    { "subtraction", "-" },
    { "multiplication", "*" },
    { "division", "/" },
    { "floor_division", "//" },
    { "bitwise_and", "&" },
    { "bitwise_excl_or", "^" },
    { "bitwise_inversion", "~" },
    { "bitwise_or", "|" },
    { "exponentiation", "**" },
    { "assignment", "=" },
    { "walrus_assignment", ":=" },
    { "left_shift", "<<" },
    { "right_shift", ">>" },
    { "modulo", "%" },
    { "matmul", "@" },
    { "lt", "<" },
    { "lte", "<=" },
    { "gt", ">" },
    { "gte", ">=" },
    { "equality", "==" },
    { "difference", "!=" },
};

set<string> tokens_getOperatorsSet();
set<string> tokens_getSymbolsSet();

#endif