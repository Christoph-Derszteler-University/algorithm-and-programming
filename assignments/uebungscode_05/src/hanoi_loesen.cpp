#include <hanoi/hanoi.hpp>
#include <hanoi/hanoi_loesen.hpp>
#include <hanoi/hanoi_loesen.hpp>
#include <hanoi/hanoi_loesen.hpp>

#include <iostream>
#include <vector>

namespace hanoi {
  void solveGame(Hanoi& game) {
    auto optimalSolutions = generateOptimalSolution(game.getAnz());
    for (auto solution : optimalSolutions) {
      game.bewege(solution.first, solution.second);
    }
  }

  // Returns temp tower, which is not "used", i.e. not `from` or `to`
  size_t calculateTempTower(const size_t& from, const size_t& to) {
    std::vector<size_t> temp = {0, 1, 2};
    std::erase_if(
        temp,
        [&](size_t value) { return value == from or value == to; }
      );
    return temp[0];
  }

  std::vector<std::pair<size_t, size_t>> generateMovesForTower(
    const size_t& size,
    const size_t& from,
    const size_t& to
  ) {
    if (size <= 1) {
      return {std::make_pair(from, to)};
    }
    auto moves = std::vector<std::pair<size_t, size_t>>();
    auto temp = calculateTempTower(from, to);

    auto first = generateMovesForTower(size - 1, from, temp);
    auto second = generateMovesForTower(1, from, to);
    auto third = generateMovesForTower(size - 1, temp, to);

    moves.insert(moves.end(), first.begin(), first.end());
    moves.insert(moves.end(), second.begin(), second.end());
    moves.insert(moves.end(), third.begin(), third.end());

    return moves;
  }

  std::vector<std::pair<size_t, size_t>> generateOptimalSolution(
    const size_t& towers
  ) {
    return generateMovesForTower(towers, 0, 2);
  }
}