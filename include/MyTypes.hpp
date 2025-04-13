#pragma once
#include <format>
#include <iostream>
#include <regex>
#include <string>
#include <utility>
#include <vector>

namespace MyTypes {
template <typename T> using vec = std::vector<T>;
template <typename T, typename K> using pair = std::pair<T, K>;
using string = std::string;
using regex = std::regex;
using std::cin;
using std::cout;

}; // namespace MyTypes
