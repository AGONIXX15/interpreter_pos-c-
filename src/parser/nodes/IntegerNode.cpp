#include <parser/nodes/IntegerNode.hpp>

IntegerNode::IntegerNode(int value) : value(value) {}


int IntegerNode::evaluate() const { return value; }
