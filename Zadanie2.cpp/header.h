#include <iostream>

using namespace std;

class Area {              // �����, � ������� �������� ��������� ������� ��������������

  double a;               // 1 ������� ��������������
  double b;               // 2 �������
  double S;               // ������� ��������������

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