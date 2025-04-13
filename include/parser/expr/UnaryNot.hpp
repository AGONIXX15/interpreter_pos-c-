#include <parser/expr/UnaryExpr.hpp>

class UnaryNot : public UnaryExpr<bool> {
  public:
    Node<bool> operand;
    UnaryNot(Node<bool> operand) : UnaryExpr<bool>(operand) {}

    string to_string() const override {
        return format("UnaryNot({})", this->operand->to_string());
    }

    Node<bool> evaluate() const override {
        return !this->operand->evaluate();
    }
}

