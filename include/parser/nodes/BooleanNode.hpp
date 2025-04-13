#include <iostream>
#include <parser/nodes/Node.hpp>

class BooleanNode : public Node<bool> {
public:
  bool value;
  BooleanNode(bool value);

  friend std::ostream& operator<<(std::ostream& os, const BooleanNode& node) {
    return os << "BooleanNode(value=" << ((node.value) ? "true": "false") << ")";
  }
  bool evaluate() const override;
};
