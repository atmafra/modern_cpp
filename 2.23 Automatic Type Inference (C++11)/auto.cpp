/*
 * auto.cpp
 *
 *  Created on: 25 de jan de 2018
 *      Author: mafra
 */

#include <iostream>

int Sum(int x, int y) {
  return x + y;
}

int main() {

  using namespace std;

  auto i { 10 };
  auto j { 5 };
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;

  auto sum { i + j };
  cout << "i + j = " << sum << endl;

  auto k { 4.3f };
  cout << "k = " << k << endl;

  auto sum2 { i + k };
  cout << "i + k = " << sum2 << endl;

  auto sum3 { Sum(i, j) };
  cout << "i + j = " << sum3 << endl;

  static auto y { 2 };

  const int x { 10 };
  auto var1 { x };  // var1 is const int
  auto &var2 { x };  // var2 is const int

  auto ptr { &x };
  auto list = { 1, 2, 3, 4 };

  cout << "list size = " << list.size() << endl;

  return 0;
}
