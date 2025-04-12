#include <lexer/Token.hpp>

using namespace MyTypes;

Token::Token(std::string value, TokenType type) {
  this->value = std::move(value);
  this->type = type;
}
string Token::to_string() const {
  return format("Token(value: {}, type: {})", value,
                TokenTypeHandler::to_string(type));
}
