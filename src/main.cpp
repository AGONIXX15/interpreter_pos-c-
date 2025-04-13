#include <lexer/Lexer.hpp>
#include <MyTypes.hpp>
#include <parser/nodes/BooleanNode.hpp>
#include <parser/nodes/IntegerNode.hpp>
#include <parser/nodes/FloatNode.hpp>
#include <parser/expr/AddExpr.hpp>


using namespace MyTypes;

typedef struct algo {
  int a;
} algo;

typedef struct otro {
  bool a;
} otro;

int main() {
  cout << "Hello World!" << "\n";
  Lexer lexer("test/main.pos");
  lexer.tokenize();
  
  for (const auto &token : lexer.getTokens()) {
     //cout << token << "\n";
    cout << token << "\n";
  }

  IntegerNode integer(10);
  IntegerNode integer1(15);
  Node<int>* a = &integer;
  Node<int>* b = &integer1;
  AddExpr<int> expr(a,b);
  cout << expr.evaluate() << "\n";
  return 0;
}
