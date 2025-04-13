#include <parser/nodes/Node.hpp>

template <typename T>
class UnaryExpr {
public:
  Node<T> operand;
  UnaryExpr(Node<T> operand) : operand(operand) {}
  virtual std::ostream& operator<<(std::ostream&) = 0;
  virtual Node<T> evaluate() const = 0;
};
