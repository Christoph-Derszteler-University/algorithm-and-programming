#include <iostream>

#include <hanoi/hanoi.hpp>
#include <hanoi/hanoi_loesen.hpp>
#include <iostream>
#include <format>

constexpr size_t towers = 5;

int main(int, char**) {
  hanoi::Hanoi h(towers);
  auto steps = hanoi::generateOptimalSolution(towers);

  h.drucke();

  std::cout << "Moves: " << std::endl;
  for (const std::pair<size_t, size_t>& step : steps) {
    std::cout << std::format("Step: ({}, {})", step.first, step.second) << std::endl;
    h.bewege(step.first, step.second);
  }

  h.drucke();
}