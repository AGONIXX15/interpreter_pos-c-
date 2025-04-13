#include <parser/nodes/FloatNode.hpp>


FloatNode::FloatNode(float value) : value(value) {}


float FloatNode::evaluate() const {
    return value;
}
