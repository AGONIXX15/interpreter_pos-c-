#include <utils/LineReader.hpp>
#include <fstream>
#include <string>

std::generator<std::string> readLine(std::ifstream &file) {
  std::string line;
  while (std::getline(file, line)) {
    co_yield line;
  }

}

