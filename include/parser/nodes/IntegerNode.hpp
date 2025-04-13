#include <parser/nodes/Node.hpp>

class IntegerNode: public Node<int> {
public:
  int value;
  IntegerNode(int value);

  friend std::ostream& operator<<(std::ostream& os, const IntegerNode& node) {
    return os << "IntegerNode(value=" << node.value << ")";
  }
  int evaluate() const override;
};

