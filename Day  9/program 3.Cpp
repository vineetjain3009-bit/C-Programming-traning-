//PROGRAM TO PRINT ,MINIMUM ELEMENT USING VECTOR
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int min = v[0];

    for (int x : v) {
        if (x < min) {
            min = x;
        }
    }

    cout << "Minimum element: " << min << endl;

    return 0;
}
