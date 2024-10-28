#include "../include/meine_funktionen.hpp"
#include <fmt/core.h>
#include <numbers>

constexpr double pi = std::numbers::pi;

int main() {
  fmt::println("sinus(0, 2): {}, sinus(PI/2, 2): {}, sinus(PI, 2): {}", sinus(0), sinus(pi / 2), sinus(pi));
  fmt::println("sinus(0, 2): {}, sinus(PI/2, 2): {}, sinus(PI, 2): {}\n", sinus(0, 2), sinus(pi / 2, 2), sinus(pi, 2));

  fmt::println("kosinus(0, 2): {}, kosinus(PI/2, 2): {}, kosinus(PI, 2): {}", kosinus(0), kosinus(pi / 2), kosinus(pi));
  fmt::println("kosinus(0, 2): {}, kosinus(PI/2, 2): {}, kosinus(PI, 2): {}\n", kosinus(0, 2), kosinus(pi / 2, 2), kosinus(pi, 2));

  fmt::println("tangens(0, 2): {}, tangens(PI/2, 2): {}, tangens(PI, 2): {}", tangens(0), tangens(pi / 2), tangens(pi));
  fmt::println("tangens(0, 2): {}, tangens(PI/2, 2): {}, tangens(PI, 2): {}\n", tangens(0, 2), tangens(pi / 2, 2), tangens(pi, 2));

  fmt::println("kotangens(0, 2): {}, kotangens(PI/2, 2): {}, kotangens(PI, 2): {}", kotangens(0), kotangens(pi / 2), kotangens(pi));
  fmt::println("kotangens(0, 2): {}, kotangens(PI/2, 2): {}, kotangens(PI, 2): {}\n", kotangens(0, 2), kotangens(pi / 2, 2), kotangens(pi, 2));
}