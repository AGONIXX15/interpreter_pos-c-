#pragma once
#include <MyTypes.hpp>
using namespace MyTypes;
template <typename T>
class Node {
public:
  virtual ~Node() = default;
  virtual T evaluate() const = 0;
};
