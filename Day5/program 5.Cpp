//program to print second largest element from given n numbers//
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];
    }

    cout << "Second Largest Element = " << secondLargest;

    return 0;
}
