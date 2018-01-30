#include <iostream>

int Add(int a, int b) {
  return a + b;
}

double AddDoubles(double a, double b) {
  return a + b;
}

// Add overload for double parameters
double Add(double a, double b) {
  return a + b;
}

// extern "C"
// prevents function name mangling
// only one of the overloaded functions can be extern "C"
// allows for pure C code to call this function
extern "C" void Print(const char* message) {
  std::cout << message << std::endl;
}

void Print(int x) {
  std::cout << "Print(int x) invoked" << std::endl;
  std::cout << x << std::endl;
}

void Print(const int *x) {
  std::cout << "Print(const int *x) invoked" << std::endl;
  std::cout << *x << std::endl;
}

int main() {

  using namespace std;

  // basic 'int' version of Add
  int result = Add(3, 5);
  cout << result << endl;

  // how does the int function behave with doubles?
  // values are converted to 'int', compiler issues a warning
  cout << Add((int) 3.1, (int) 6.2) << endl;

  // now using the specific double function: works fine
  cout << AddDoubles(3.1, 6.2) << endl;

  // using now the overloaded Add function: works fine too
  cout << Add(3.1, 6.2) << endl;

  // pointers, references and consts avoid overloading
  int x { 10 };
  const int y { 20 };
  Print(x);
  Print(&y);

  // testing the extern "C" function
  string message { "Alexandre Mafra" };
  Print(message.c_str());

  return 0;
}
