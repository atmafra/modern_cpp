#include <iostream>

// Add two numbers and return the sum
int Add(int *a, int *b) {
    return *a + *b;
}

// Add two numbers and return the sum through the third pointer argument
void AddVal(int *a, int *b, int *result) {
    *result = Add(a, b);
}

// Swap the value of two integers
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Generate the factorial of a number and return that through the second pointe
void Factorial(int *a, int *result) {
    *result = 1;
    for (int i = 1; i <= *a; i++) {
        *result *= i;
    }
}

// main
int main() {

    int a { 5 };
    int b { 8 };

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "Add(a, b) = " << Add(&a, &b) << std::endl;

    int result {};
    std::cout << "AddVal(a, b, result)" << std::endl;
    AddVal(&a, &b, &result);
    std::cout << "result = " << result << std::endl;

    std::cout << "Swap(a, b)" << std::endl;
    Swap(&a, &b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "Factorial(a, result)" << std::endl;
    Factorial(&a, &result);
    std::cout << "result = " << result << std::endl;

    return 0;
}
