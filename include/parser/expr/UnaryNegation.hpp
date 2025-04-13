#pragma once
#include <parser/expr/UnaryExpr.hpp>
#include <type_traits>

template <typename T>
class UnaryNegation : public UnaryExpr<T> {
  static_assert(std::is_arithmetic_v<T>, "UnaryNegation can only be used with arithmetic types");
public:
  UnaryNegation(Node<T> operand) : UnaryExpr<T>(operand) {}
  friend std::ostream& operator<<(std::ostream& os, const UnaryNegation<T>& node) {
    return os << "UnaryNegation(" << node.operand << ")";
  }

  T evaluate() const override {
    
  }


};
