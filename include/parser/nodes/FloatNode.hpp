#include <parser/nodes/Node.hpp>

class FloatNode : public Node<float> {
public:
  float value;
  FloatNode(float value);

  friend std::ostream& operator<<(std::ostream& os, const FloatNode& node) {
    return os << "FloatNode(value=" << node.value << ")";
  }
  float evaluate() const override;
};
