//program to reverse a vector and print elements
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

   reverse(v.begin(), v.end());

    // Print the reversed vector
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
