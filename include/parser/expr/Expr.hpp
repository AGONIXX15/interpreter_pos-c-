#pragma once
#include <parser/nodes/Node.hpp>

template <typename T>
class Expr {
public:
  Node<T>* left;
  Node<T>* right;
  Expr(Node<T>* left, Node<T>* right): left(left), right(right) {}
  virtual T evaluate() const = 0;
};
