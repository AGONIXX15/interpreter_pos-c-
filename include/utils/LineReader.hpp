#pragma once
#include <fstream>
#include <generator>
#include <MyTypes.hpp>

using namespace MyTypes;
std::generator<string> readLine(std::ifstream &file);
