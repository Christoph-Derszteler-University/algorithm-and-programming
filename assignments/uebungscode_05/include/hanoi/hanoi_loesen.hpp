#pragma once

#include <hanoi/hanoi.hpp>
#include <vector>
#include <utility>

namespace hanoi{
  /**
    Solves the given game optimally by executing the steps calcualted by the
    `generateOptimalSolution` method (below).

    @param game - The game to solve
  */
  void solveGame(Hanoi& game);

  /**
    This method returns an orderd array of pairs, which represent one move.
    By executing all calculated moves in the given order, a new and untouched
    Hanoi game, i.e. all towers correctly positioned on the left rod,
    will be solved with the minimum amount of moves.

    @param rods - The amount of towers on the left rod.
    @return - The ordered array of pairs, where both values represent a rod from
      0 to 2 and a move is defined by moving a rod from the first rod to
      the second rod.
  */
  std::vector<std::pair<size_t, size_t>> generateOptimalSolution(
    const size_t& towers
  );
}