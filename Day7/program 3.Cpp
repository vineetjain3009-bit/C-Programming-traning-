//program for array sum using pointers//
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum = sum + *(ptr + i);
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}
