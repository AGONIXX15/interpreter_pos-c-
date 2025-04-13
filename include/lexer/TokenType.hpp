#pragma once
#include <iostream>
#include <format>

enum class TokenType {
  IDENTIFIER,
  INTEGER,
  FLOAT,
  STRING,
  PLUS,
  DASH,
  STAR,
  SLASH,
  PERCENT,
  DOUBLE_SLASH
};


inline constexpr std::string_view to_string(TokenType type) {
  switch (type) {
    case TokenType::IDENTIFIER:    return "IDENTIFIER";
    case TokenType::INTEGER:       return "INTEGER";
    case TokenType::FLOAT:         return "FLOAT";
    case TokenType::STRING:        return "STRING";
    case TokenType::PLUS:          return "PLUS";
    case TokenType::DASH:          return "DASH";
    case TokenType::STAR:          return "STAR";
    case TokenType::SLASH:         return "SLASH";
    case TokenType::PERCENT:       return "PERCENT";
    case TokenType::DOUBLE_SLASH:  return "DOUBLE_SLASH";
    default:                       return "UNKNOWN";
  }
}

inline std::ostream& operator<<(std::ostream& os, TokenType type) {
  return os << to_string(type);
}

template <>
struct std::formatter<TokenType> : std::formatter<std::string_view> {
  inline auto format(TokenType type, format_context& ctx) const {
    return std::formatter<std::string_view>::format(to_string(type), ctx);
  }
};

