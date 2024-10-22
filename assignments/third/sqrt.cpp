#include <stdexcept>
#include <cmath>
#include <iostream>
#include <format>

constexpr double sqrt(double x, double tolerance);
constexpr double sqrt(double x);

int main() {
  // Caution: Seems not to be working on windows
  try {
    sqrt(-1);
  } catch (const std::domain_error& negative_x) {
    std::cerr << negative_x.what() << std::endl;
  }

  std::cout << std::format("sqrt(4): {}", sqrt(4)) << std::endl;
  std::cout << std::format("sqrt(2): {}", sqrt(2)) << std::endl;

  std::cout << std::format("sqrt(4, 2.2): {}", sqrt(4, 2.2)) << std::endl;
  std::cout << std::format("sqrt(2, 1.8): {}", sqrt(2, 1.8)) << std::endl;
}

constexpr double sqrt(double x, double tolerance) {
  if (x < 0) {
    throw std::domain_error("x must be greater/equal than zero!");
  }

  double approximation = x;
  // Could also be out outsourced in custom `double diff` variable.
  while (std::fabs(x - (approximation * approximation)) > tolerance) {
    approximation = 1.0 / 2 * (approximation + x / approximation);
  }

  return approximation;
}

constexpr double sqrt(double x) {
  return sqrt(x, 1e-8);
}