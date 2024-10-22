#include <stdexcept>
#include <cmath>
#include <iostream>

double sqrt(double x, double tolerance) {
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

double sqrt(double x) {
  return sqrt(x, 1e-8);
}

int main() {
  // Caution: Seems not to be working on windows
  try {
    sqrt(-1);
  } catch (const std::domain_error& negative_x) {
    std::cerr << "Test 1: " << negative_x.what() << std::endl;
  }

  std::cout << "sqrt(4): " << sqrt(4) << std::endl;
  std::cout << "sqrt(2): " << sqrt(2) << std::endl << std::endl;

  std::cout << "sqrt(4, 2.2): " << sqrt(4, 2.2) << std::endl;
  std::cout << "sqrt(2, 1.8): " << sqrt(2, 1.8) << std::endl << std::endl;
}
