#include <MyTypes.hpp>
#include <lexer/Lexer.hpp>
#include <lexer/TokenType.hpp>
#include <utils/LineReader.hpp>

using namespace MyTypes;

Lexer::Lexer(string fileName) {
  file = std::ifstream(fileName);
  if (!file.is_open()) {
    std::cerr << "Error opening file" << std::endl;
    return;
  }
}
void Lexer::tokenize() {
  if (!file.is_open()) {
    std::cerr << "Error opening file" << std::endl;
    return;
  }
  string line;
  auto lineGenerator = readLine(file);
  for (const auto &line : lineGenerator) {
    tokenizeLine(line);
  }
}

void Lexer::tokenizeLine(const string &line) {
  std::size_t pos = 0;
  vec<Token> tokens;

  while (pos < line.size()) {
    if (isspace(line[pos])) {
      pos++;
      continue;
    }
    bool flag = false;
    for (const auto &[regex, type] : tokensRegex) {
      std::smatch match;
      auto first = line.begin() + pos;
      auto last = line.end();
      if (std::regex_search(first, last, match, regex)) {
        if (match.position() == 0) {
          tokens.emplace_back(match.str(), type);
          pos += match.length();
          flag = true;
        }
      }
      if (flag)
        break;
    }
    if (!flag) {
      throw std::runtime_error("Invalid token at position " +
                               std::to_string(pos));
      return;
    }
  }
  this->tokens.insert(this->tokens.end(), tokens.begin(), tokens.end());
}

vec<Token> Lexer::getTokens() { return tokens; }
