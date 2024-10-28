#include "../include/meine_funktionen.hpp"
#include <cmath>
#include <numbers>

constexpr double irrelevant_factor = 1e-8;

double sinus(const double x) {
  return sinus(x, irrelevant_factor);
}

double sinus(const double x, const double tolerance) {
  double sin = 0;
  double sum = x;

  for (int index = 3; std::fabs(sum) > tolerance; index += 2) {
    sin += sum;
    sum = -(sum * x * x) / (index * (index - 1));
  }

  return sin;
}

double kosinus(const double x) {
  return kosinus(x, irrelevant_factor);
}

double kosinus(const double x, const double tolerance) {
  // Could also be approximated similarly as above
  // (use odd indices instead of even indices)
  return sinus(x + (std::numbers::pi / 2), tolerance);
}

double tangens(const double x) {
  return sinus(x) / kosinus(x);
}

double tangens(const double x, const double tolerance) {
  return sinus(x, tolerance) / kosinus(x, tolerance);
}

double kotangens(const double x) {
  return kosinus(x) / sinus(x);
}

double kotangens(const double x, const double tolerance) {
  return kosinus(x, tolerance) / sinus(x, tolerance);
}