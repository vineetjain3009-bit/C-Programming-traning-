//program to evaluate power function using recursion//
#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main() {
    int base, exp;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exp;

    cout << "Result = " << power(base, exp);

    return 0;
}
