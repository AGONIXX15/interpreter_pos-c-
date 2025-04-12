#pragma once
#include <fstream>
#include <lexer/Token.hpp>
#include <utility>
#include <utils/LineReader.hpp>

using namespace MyTypes;

class Lexer {

public:
  std::ifstream file;
  Lexer(string fileName);
  void tokenize();
  void tokenizeLine(const string &line);

  vec<Token> getTokens();

private:
  vec<pair<regex, TokenType>> tokensRegex = {
      {regex(R"([a-zA-Z_][a-zA-Z0-9_]*)"), TokenType::IDENTIFIER},
      {regex(R"(\d+\.\d+)"), TokenType::FLOAT},
      {regex(R"(\.\d+)"), TokenType::FLOAT},
      {regex(R"(\d+)"), TokenType::INTEGER},
      {regex(R"(".*?")"), TokenType::STRING},
      {regex(R"('.*?')"), TokenType::STRING},
      {regex(R"(\+)"), TokenType::PLUS},
      {regex(R"(-)"), TokenType::DASH},
      {regex(R"(\*)"), TokenType::STAR},
      {regex(R"(/)"), TokenType::SLASH},
      {regex(R"(\%)"), TokenType::PERCENT},
      {regex(R"(//.*)"), TokenType::DOUBLE_SLASH},
  };

  vec<Token> tokens;
};
