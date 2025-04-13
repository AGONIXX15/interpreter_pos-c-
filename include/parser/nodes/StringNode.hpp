#include <parser/nodes/Node.hpp>

class StringNode : public Node<string> {
public:
  string value;
  StringNode(string value) : value(value) {}

  friend std::ostream& operator<<(std::ostream& os, const StringNode& node) {
    return os << "StringNode(value=" << node.value << ")";
  }
  string evaluate() const override;
};
