#include <cmath>
#include <iostream>

constexpr double irrelevant_factor = 1e-8;

double sin(double x) {
  double sin = 0;
  double sum = x;

  // std::cout << "1" << std::endl;
  for (int index = 3; std::fabs(sum) > irrelevant_factor; index += 2) {
    // std::cout << "2 " << std::abs(sum) << ", " << irrelevant_factor << ", " << (std::fabs(sum) < irrelevant_factor) << std::endl;
    sin += sum;
    sum = -(sum*x*x) / ((index) * (index-1));
  }
  // std::cout << "2" << std::endl;

  return sin;
}

double cos(double x) {
  // Otherwise, could be approximated similarly as above
  // (instead of odd indices, even indices)
  return sin(x + (std::numbers::pi/2));
}

double tan(double x) {
  return sin(x) / cos(x);
}

double cot(double x) {
  return cos(x) / sin(x);
}

int main() {
  std::cout << "sin(0): " << sin(0) << std::endl;
  std::cout << "sin(PI/2): " << sin(std::numbers::pi / 2) << std::endl;
  std::cout << "sin(PI): " << sin(std::numbers::pi) << std::endl << std::endl;

  std::cout << "cos(0): " << cos(0) << std::endl;
  std::cout << "cos(PI/2): " << cos(std::numbers::pi / 2) << std::endl;
  std::cout << "cos(PI): " << cos(std::numbers::pi) << std::endl << std::endl;

  std::cout << "tan(0): " << tan(0) << std::endl;
  std::cout << "tan(PI/2): " << tan(std::numbers::pi / 2) << std::endl;
  std::cout << "tan(PI): " << tan(std::numbers::pi) << std::endl << std::endl;

  std::cout << "cot(0): " << cot(0) << std::endl;
  std::cout << "cot(PI/2): " << cot(std::numbers::pi / 2) << std::endl;
  std::cout << "cot(PI): " << cot(std::numbers::pi) << std::endl << std::endl;
}