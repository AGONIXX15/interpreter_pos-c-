#pragma once
#include <MyTypes.hpp>
#include <coroutine>
#include <generator>
#include <string>

using namespace MyTypes;

inline std::generator<std::string> readLine(std::ifstream &file) {
  std::string line;
  println("reading lines");
  while (getline(file, line)) {
    co_yield line;
  }
}
