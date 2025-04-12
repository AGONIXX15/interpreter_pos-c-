#pragma once
#include <MyTypes.hpp>
#include <format>
#include <lexer/TokenType.hpp>
#include <regex>
#include <string>

using namespace MyTypes;
class Token {
public:
  string value;
  TokenType type;

  Token(std::string value, TokenType type);
  string to_string() const;
};
