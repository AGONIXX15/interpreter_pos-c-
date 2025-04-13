#include <parser/nodes/DoubleNode.hpp>

DoubleNode::DoubleNode(double value) : value(value) {}


double DoubleNode::evaluate() const {
    return value;
}
