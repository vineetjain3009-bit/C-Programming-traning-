//program to swap two numbers using pointers//
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    cout << "Before Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
