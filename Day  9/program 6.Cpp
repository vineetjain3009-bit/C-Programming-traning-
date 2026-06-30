//PROGRAM TO ROTATE VECTOR//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};


    rotate(v.begin(), v.begin() + 2, v.end());


    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
