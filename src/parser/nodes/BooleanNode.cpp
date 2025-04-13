#include <parser/nodes/BooleanNode.hpp>

BooleanNode::BooleanNode(bool value) : value(value) {}


bool BooleanNode::evaluate() const {
    return value;
}
