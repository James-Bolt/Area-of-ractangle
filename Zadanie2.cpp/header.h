#include <iostream>

using namespace std;

class Area {              // класс, с помощью которого находится площадь прямоугольника

  double a;               // 1 сторона прямоугольника
  double b;               // 2 сторона
  double S;               // площадь прямоугольника

public:
  Area();

  double get_S() {
    return S;
  }

  void area(double _a, double _b) {
    S = _a * _b;
  }

  ~Area();
};

Area::Area() {
  a = 0;
  b = 0;
}