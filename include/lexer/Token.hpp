#pragma once
#include <MyTypes.hpp>
#include <lexer/TokenType.hpp>
#include <string>

using namespace MyTypes;
class Token {
public:
  string value;
  TokenType type;

  Token(std::string value, TokenType type): value(value), type(type) {};
  friend std::ostream &operator<<(std::ostream &os, const Token &token); 

};



inline std::string to_string(const Token& token) {
  std::ostringstream oss;
  oss << "Token(value: " << token.value << ", type: " << to_string(token.type) << ")";
  return oss.str();
}

inline std::ostream &operator<<(std::ostream &os, const Token &token) {
  os << to_string(token); 
  return os;
}


template <>
struct std::formatter<Token> : std::formatter<std::string> {
  auto format(const Token& token, format_context& ctx) const {
    return std::formatter<std::string>::format(
     to_string(token) , ctx);
  }
};
