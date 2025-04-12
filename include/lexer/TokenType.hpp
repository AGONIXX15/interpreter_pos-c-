#pragma once
#include <string>

enum class TokenType {
  IDENTIFIER,
  INTEGER,
  FLOAT,
  STRING,
  // Add more token types as needed
  //
  PLUS,
  DASH,
  STAR,
  SLASH,
  PERCENT,
  DOUBLE_SLASH
};

class TokenTypeHandler {
public:
  static std::string to_string(TokenType type);
};
