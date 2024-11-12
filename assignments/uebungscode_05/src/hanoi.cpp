#include <hanoi/hanoi.hpp>

#include <iostream>
#include <utility>
#include <cmath>
#include <vector>

namespace hanoi{

Hanoi::Hanoi(size_t anz) {
  this->stapel = std::vector<std::vector<size_t>>(3, std::vector<size_t>(anz));
  this->anz = anz;

  std::vector<size_t> first = std::vector<size_t>(anz);
  for (int index = 0; index < anz; index++) {
    first[index] = anz - index;
  }
  stapel[0] = first;
}

bool Hanoi::bewege(size_t von, size_t nach) {
  std::pair<size_t, size_t> current = findLengthOfHighestItem(von);
  if (current.second == 0) {
    return false;
  }
  std::pair<size_t, size_t> target = findLengthOfHighestItem(nach);

  if (target.second != 0 && current.second > target.second) {
    return false;
  }

  stapel[von][current.first] = 0;
  stapel[nach][target.second == 0 ? target.first : target.first + 1] = current.second;
  return true;
}

std::pair<size_t, size_t> Hanoi::findLengthOfHighestItem(const size_t& index) const {
  if (index < 0 || index >= stapel.size()) {
    throw std::domain_error("index out of range");
  }
  std::pair<size_t, size_t> highest = std::make_pair(0, 0);

  for (int j = anz - 1; j >= 0; j--) {
    size_t length = stapel[index][j];
    if (length != 0) {
   	  highest = std::make_pair(j, length);
      break;
    }
  }

  return highest;
}

void Hanoi::drucke() const {
  std::string lines;
  for (int line = anz; line > 0; line--) {
    lines.append("|");
    lines.append(itemToString(stapel[0][line - 1], line));
    lines.append("|");
    lines.append(itemToString(stapel[1][line - 1], line));
    lines.append("|");
    lines.append(itemToString(stapel[2][line - 1], line));
    lines.append("|\n");
  }
  lines.append(std::string(2 * 3 * anz + 1, '-'));
  std::cout << lines << std::endl;
}

std::string Hanoi::itemToString(const int& length, const int& line) const {
  if (length == 0) {
    return std::string(anz * 2 - 1, ' ');
  }
  return std::string(std::ceil((anz - length)), ' ')
    + std::string(length * 2 - 1, '*')
    + std::string(std::floor((anz - length)), ' ');
}

size_t Hanoi::getAnz() const{
  return anz;
}

/*
  For debugging purposes (Can be removed):

  for (int i = 0; i < 3; i++) {
    std::cout << "i: " << std::to_string(i) << std::endl;
    std::vector<size_t> temp = stapel[i];

    for (int j = 0; j < temp.size(); j++) {
      std::cout << "j: " << std::to_string(j) << ", val: " << std::to_string(temp[j]) << std::endl;
    }
  }
*/
}