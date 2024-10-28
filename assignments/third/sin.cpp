#include <cmath>
#include <format>
#include <iostream>

constexpr double irrelevant_factor = 1e-8;
constexpr double pi = std::numbers::pi;

constexpr double sin(double theta, double tolerance);

constexpr double sin(double theta);

constexpr double cos(double theta, double tolerance);

constexpr double cos(double theta);

constexpr double tan(double theta, double tolerance);

constexpr double tan(double theta);

constexpr double cot(double theta, double tolerance);

constexpr double cot(double theta);

int main() {
  std::cout
    << std::format("sin(0, 2): {}, sin(PI/2, 2): {}, sin(PI, 2): {}", sin(0), sin(pi / 2), sin(pi))
    << std::endl;
  std::cout
    << std::format("sin(0, 2): {}, sin(PI/2, 2): {}, sin(PI, 2): {}", sin(0, 2), sin(pi / 2, 2), sin(pi, 2))
    << std::endl
    << std::endl;

  std::cout
    << std::format("cos(0, 2): {}, cos(PI/2, 2): {}, cos(PI, 2): {}", cos(0), cos(pi / 2), cos(pi))
    << std::endl;
  std::cout
    << std::format("cos(0, 2): {}, cos(PI/2, 2): {}, cos(PI, 2): {}", cos(0, 2), cos(pi / 2, 2), cos(pi, 2) )
    << std::endl
    << std::endl;

  std::cout
    << std::format("tan(0, 2): {}, tan(PI/2, 2): {}, tan(PI, 2): {}", tan(0), tan(pi / 2), tan(pi))
    << std::endl;
  std::cout
    << std::format("tan(0, 2): {}, tan(PI/2, 2): {}, tan(PI, 2): {}", tan(0, 2), tan(pi / 2, 2), tan(pi, 2))
    << std::endl
    << std::endl;

  std::cout
    << std::format("cot(0, 2): {}, cot(PI/2, 2): {}, cot(PI, 2): {}", cot(0), cot(pi / 2), cot(pi))
    << std::endl;
  std::cout
    << std::format("cot(0, 2): {}, cot(PI/2, 2): {}, cot(PI, 2): {}",cot(0, 2), cot(pi / 2, 2), cot(pi, 2))
    << std::endl
    << std::endl;
}

constexpr double sin(const double theta, const double tolerance) {
  double sin = 0;
  double sum = theta;

  for (int index = 3; std::fabs(sum) > tolerance; index += 2) {
    sin += sum;
    sum = -(sum * theta * theta) / (index * (index - 1));
  }

  return sin;
}

constexpr double sin(const double theta) {
  return sin(theta, irrelevant_factor);
}

constexpr double cos(const double theta, const double tolerance) {
  // Could also be approximated similarly as above
  // (use odd indices instead of even indices)
  return sin(theta + (std::numbers::pi / 2), tolerance);
}

constexpr double cos(const double theta) {
  return cos(theta, irrelevant_factor);
}

constexpr double tan(const double theta, const double tolerance) {
  return sin(theta, tolerance) / cos(theta, tolerance);
}

constexpr double tan(const double theta) {
  return tan(theta, irrelevant_factor);
}

constexpr double cot(const double theta, const double tolerance) {
  return cos(theta, tolerance) / sin(theta, tolerance);
}

constexpr double cot(const double theta) {
  return cot(theta, irrelevant_factor);
}