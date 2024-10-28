#include <vector>
#include <cmath>
#include <iostream>

// We use a const. reference, because we only access (read) the values
// of the specified array. Thus, resources can be saved by omitting
// passing the array as an expression.
void print_int_array(const std::vector<int>& array) {
  for (const int& element: array) {
    std::cout << std::to_string(element) << std::endl;
  }
}

// We must use a reference, because a) we want to modify the existing array
// that is passed (-> use a reference) and b) we cannot use a const reference
// for the same reason.
void convert_to_absolute_int_array(std::vector<int>& array) {
  for (int& element: array) {
    element = std::abs(element);
  }
}

// We choose a const reference for the same reason as in 'print_int_array'.
void print_string_array(const std::vector<std::string>& array) {
  for (const std::string& element: array) {
    std::cout << element << std::endl;
  }
}

// We choose a reference for the same reason as in 'convert_to_absolute_int_array'.
void extend_int_array_with_input(std::vector<int>& existing) {
  int input = 0;
  while (input != 42) {
    std::cout << "Bitte gib eine ganze Zahl ein (Böser Bub, wenn du das nicht tust!): " << std::endl;
    std::cin >> input; existing.push_back(input);
  }
}

int main() {
  std::vector example = {2, -40, 1, -3};

  print_int_array(example);
  convert_to_absolute_int_array(example);

  print_string_array({
    "Hi to everyone",
    "reading this, among others but not exclusively:",
    "  Christoph,",
    "  Marla,",
    "  Nourhan,",
    "  Emilia.",
  });

  extend_int_array_with_input(example);
  print_int_array(example);
}