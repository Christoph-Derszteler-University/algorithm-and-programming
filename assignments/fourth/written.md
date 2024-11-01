## Nr. 4

Code für Nr. 4 ([Link zur Godbolt-Instanz](https://godbolt.org/z/frqEYEEoq)):

```c++
#define FMT_HEADER_ONLY // Dieses Makro ist nötig, um die Bibliothek simpel einzubinden
#include <fmt/core.h> // Muss eingebunden werden, um {fmt} zu verwenden
#include <fmt/ranges.h> // Muss zur Ausgabe von Arrays eingebunden werden
#include <vector> // Stellt dynamische Arrays zur Verfügung

int main() {
  std::vector<int> v = {42, 5, 1};
  fmt::print("Das Array ist: {0} und {1}.\n", v, "wir finden das gut");
  fmt::print("{0} {0} {1}\n", "Juhu!", fmt::join(v, " -> ")); // Druckt: Juhu! Juhu! 42 -> 5 -> 1
}
```