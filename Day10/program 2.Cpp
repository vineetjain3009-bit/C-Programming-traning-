//PROGRAM FOR UNIQUE ELEMENT USING SET//
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> S = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    cout << "Unique Elements:" << endl;
    for (int x : S) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
