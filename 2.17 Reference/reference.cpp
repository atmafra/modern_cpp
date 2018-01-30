#include <iostream>

//Add two numbers and return the result through a reference parameter
void Add(int a, int b, int &result) {
  result = a + b;
  return;
}

//Find factorial of a number and return that through a reference parameter
void Factorial(int a, int &result) {
  result = 1;
  for (int i = 1; i <= a; i++) {
    result *= i;
  }
  return;
}

//Swap two numbers through reference arguments
void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  return;
}

int main() {

  using namespace std;

  // ref basics: ref is a reference to x
  int x { 10 };
  cout << "x = " << x << endl;

  int &ref { x };
  cout << "ref to x = " << ref << endl;

  ref = 5;
  cout << "ref set to " << ref << endl;
  cout << "now x = " << x << endl;

  // create a new variable, initialized by ref
  int y { 20 };
  ref = y;
  cout << "y = " << y << endl;
  cout << "ref = " << ref << endl;
  cout << "x = " << x << endl;

  int a { 5 };
  int b { 8 };
  int result { };

  // Add
  cout << "Add(a, b, &result)" << endl;
  int &sum = result;
  Add(a, b, sum);
  cout << "sum    = " << sum << endl;
  cout << "result = " << result << endl;

  // Factorial
  cout << "Factorial(a, result)" << endl;
  int &factorial = result;
  Factorial(a, result);
  cout << "factorial = " << factorial << endl;
  cout << "result    = " << result << endl;

  // Swap
  cout << "a = " << a << " (before)" << endl;
  cout << "b = " << b << " (before)" << endl;
  cout << "Swap(a, b)" << endl;
  Swap(a, b);
  cout << "a = " << a << " (after)" << endl;
  cout << "b = " << b << " (after)" << endl;

  return 0;
}
