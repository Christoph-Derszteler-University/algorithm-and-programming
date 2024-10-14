#include <iostream>
#include <cmath>

int calculate_power(const int x) {
  int t = x;
  t = t*t;
  t = x*t;
  t = t*t;
  t = t*t;
  t = x*t;
  t = t*t;
  t = x*t;
  t = t*t;
  t = t*t;
  t = x*t;
  t = t*t;
  return t;
}

int main() {
  const int result = calculate_power(2);
  std::cout << "Result: " << result << " , log: " << std::log2(result)  << std::endl;
}