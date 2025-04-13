#include <parser/nodes/Node.hpp>

class DoubleNode : public Node<double> {
public:
  double value;
  DoubleNode(double value);

  friend std::ostream& operator<<(std::ostream& os, const DoubleNode& node) {
    return os << "DoubleNode(value=" << node.value << ")";
  }

  double evaluate() const override;
};
