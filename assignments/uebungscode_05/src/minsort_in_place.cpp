#include <minsort_in_place.hpp>

// Hier wird minsort in place implementiert
void minsort_in_place(std::vector<int>& array) {
  for (int i = 0; i < array.size(); i++) {
    int smallestIndex = i;

    for (int j = i + 1; j < array.size(); j++) {
      if (array[j] < array[smallestIndex]) {
        smallestIndex = j;
      }
    }
    std::swap(array[i], array[smallestIndex]);
  }
}