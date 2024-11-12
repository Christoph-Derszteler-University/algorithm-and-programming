#pragma once

#include <utility>
#include <vector>
#include <string>
#include <cstddef>

namespace hanoi{
  
  class Hanoi{
  public:
    // Erstellt eine Startkonfiguration mit anz vielen Scheiben
    Hanoi(size_t anz);
    
    // Verschiebt die oberste Scheibe (falls erlaubt) und gibt true zurück
    // genau dann wenn die Bewegung erlaubt war
    bool bewege(size_t von, size_t nach);
    
    // Druckt die aktuelle Konfiguration auf der Konsole aus
    void drucke() const;

    size_t getAnz() const;
  private:
    // Wir haben drei Stapel. Also bietet sich ein Array von Zahlenarrays an.
    std::vector<std::vector<size_t>> stapel;
    size_t anz;

    // Returns a pair of (index, length)
    std::pair<size_t, size_t> findLengthOfHighestItem(const size_t& index) const;
    std::string itemToString(const int& length, const int& line) const;
  };
}