//program to print frequency of elements using map//
#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    map<int, int> frequency;

    for (int x : arr) {
        frequency[x]++;
    }

    cout << "Element\tFrequency" << endl;
    for (const auto &pair : frequency) {
        cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}
