#include <lexer/Lexer.hpp>
#include <MyTypes.hpp>

using namespace MyTypes;

int main() {
  println("Starting lexer");
  Lexer lexer("test/main.pos");
  lexer.tokenize();
  for (const auto &token : lexer.getTokens()) {
     //cout << token << "\n";
     println("{}",token);
  }
  return 0;
}
