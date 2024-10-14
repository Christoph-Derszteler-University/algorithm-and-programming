// Zur Blatt 02 Aufgabe 03

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

// Druckt einen Text aus
void drucke_text(const std::string& text);

// Druckt eine Ganzzahl aus
void drucke_ganzzahl(int ganzzahl);

// Druckt eine Kommazahl aus
void drucke_kommazahl(double gleitkommazahl);

// Liest ein Wort von der Konsole ein
std::string lies_wort();

// Liest eine Ganzzahl von der Konsole ein
int lies_ganzzahl();

// Liest eine Gleitkommazahl von der Konsole ein
double lies_gleitkommazahl();


void ablauf_diagram_1(){
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}

void ablauf_diagram_2(){
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}

void programm_1() {
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}


void programm_2() {
  std::string text = "Das Modul Algorithmen und Programmierung ist so konzipert, dass die Konzepte und Methodiken\
der objektorientierten Programmierung im Vordergrund stehen. Die hier vorgestellte\
Programmiersprache C++ nimmt die Rolle einer Beispielprogrammiersprache ein, in der die\
diskutierten Konzepte (meist mehr, selten weniger) nachvollziehbar und effizient umgesetzt\
sind. Das Modul soll so verstanden werden, dass es den Teilnehmer:innen im Anschluss an\
dieses Modul leicht fällt andere, objektorientierte Programmiersprachen zu erlernen. Hier soll\
man sich nur noch die Frage stellen: Wie setzten andere Programmiersprachen die wesentlichen\
Konzepte um und was gibt es bei der Sprachsyntax zu beachten?";
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}


void programm_3() {
  std::vector<int> zahlen = {42, 69, 420, 99, -444, 9014};
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}


void programm_4() {
  /*************************************/
  /*                                   */
  /*  Hier kommt der Programmcode hin  */
  /*                                   */
  /*************************************/
  
}


int main() {
  ablauf_diagram_1();
  ablauf_diagram_2();
  programm_1();
  programm_2();
  programm_3();
  programm_4();
}


/************************************/
/*                                  */
/*   MAGIE   MAGIE   MAGIE  MAGIE   */
/*                                  */
/************************************/

void drucke_text(const std::string& text) {
  std::cout << text << std::endl;
}

void drucke_ganzzahl(int ganzzahl) {
  std::cout << std::to_string(ganzzahl) << std::endl;
}

void drucke_kommazahl(double gleitkommazahl) {
  std::cout << std::to_string(gleitkommazahl) << std::endl;
}

std::string lies_wort() {
  std::string wort;
  std::cin >> wort;
  return wort;
}

int lies_ganzzahl() {
  std::string wort;
  std::cin >> wort;
  int ganzzahl = 0;
  try {
    ganzzahl = std::stoi(wort);
  } catch (const std::invalid_argument& e) {
    ganzzahl = -1000;
  }
  return ganzzahl;
}

double lies_gleitkommazahl() {
  std::string wort;
  std::cin >> wort;
  double lies_gleitkommazahl = 0.0;
  try {
    lies_gleitkommazahl = std::stod(wort);
  } catch (const std::invalid_argument& e) {
    lies_gleitkommazahl = NAN; // See https://en.cppreference.com/w/cpp/numeric/math/NAN
  }
  return lies_gleitkommazahl;
}
