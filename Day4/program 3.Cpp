//program to write a function to check prime number//
#include <iostream>
using namespace std;

void isPrime(int n) {
    if (n <= 1) {
        cout <<n<< " is not a Prime Number";
        return;
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            cout <<n<< " is not a Prime Number";
            return;
        }
    }

    cout <<n<< " is a Prime Number";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    isPrime(n);

    return 0;
}
