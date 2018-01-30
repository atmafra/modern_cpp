#include <iostream>

const float PI { 3.14159f };

void Print(int *ptr) {
  using namespace std;
  cout << "Print(int *ptr): " << *ptr << endl;
  *ptr *= 2;
  return;
}

void PrintConst(const int *ptr) {
  using namespace std;
  cout << "PrintConstant(const int *ptr): " << *ptr << endl;
  // *ptr *= 2; does not compile
}

void PrintReference(int &ref) {
  using namespace std;
  cout << "PrintReference(int &ref): " << ref << endl;
  ref += 10;
}

void PrintReferenceConst(const int &ref) {
  using namespace std;
  cout << "PrintReferenceConst(const int &ref): " << ref << endl;
  // ref += 10; does not compile
}

int main() {

  using namespace std;

  float radius { };
  cout << "Enter radius: ";
  cin >> radius;

  float area { PI * radius * radius };
  float circumference { 2 * PI * radius };

  cout << "area is " << area << endl;
  cout << "circumference is " << circumference << endl;

  const int CHUNK_SIZE = 512;
  const int *ptr1 = &CHUNK_SIZE;  // ptr1 is not const *ptr1 points to const int
  const int * const ptr2 = &CHUNK_SIZE;  // ptr2 is const *ptr2 points to const int
  cout << "*ptr1: " << *ptr1 << endl;
  cout << "*ptr2: " << *ptr2 << endl;

  int x = 10;
  cout << "x before Print(x): " << x << endl;
  Print(&x);
  cout << "x after Print(x): " << x << endl;

  cout << "x before PrintReference(x): " << x << endl;
  PrintReference(x);
  cout << "x after PrintReference(x): " << x << endl;

  cout << "x before PrintReferenceConst(x): " << x << endl;
  PrintReferenceConst(x);
  cout << "x after PrintReferenceConst(x): " << x << endl;

  return 0;
}
