
// Copyright free James-Bolt 2020

#pragma once

#include "header.h"

using namespace std;

int main() {
  double a;
  double b;
  
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  Area t;
  t.area(a, b);
  cout << "S = " << t.get_S() << endl;
  system("pause");
}