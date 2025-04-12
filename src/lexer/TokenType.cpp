#include <MyTypes.hpp>
#include <lexer/TokenType.hpp>

using namespace MyTypes;



string TokenTypeHandler::to_string(TokenType type) {
  switch (type) {
  case TokenType::IDENTIFIER:
    return "IDENTIFIER";
  case TokenType::INTEGER:
    return "INTEGER";
  case TokenType::FLOAT:
    return "FLOAT";
  case TokenType::STRING:
    return "STRING";
  case TokenType::PLUS:
    return "PLUS";
  case TokenType::DASH:
    return "DASH";
  case TokenType::STAR:
    return "STAR";
  case TokenType::SLASH:
    return "SLASH";
  case TokenType::PERCENT:
    return "PERCENT";
  case TokenType::DOUBLE_SLASH:
    return "DOUBLE_SLASH";
  default:
    return "UNKNOWN";
  }
}
