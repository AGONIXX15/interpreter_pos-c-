#include <parser/expr/Expr.hpp>
#include <type_traits>

template <typename T>
class AddExpr : public Expr<T> {
  public:

  Node<T>* left;
  Node<T>* right;
  AddExpr(Node<T>* left, Node<T>* right) : Expr<T>(left,right) {}

  auto evaluate(){
    return left->evaluate() + right->evaluate();
  }
};
