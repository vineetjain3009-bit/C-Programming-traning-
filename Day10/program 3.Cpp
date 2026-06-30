//PROGRAM TO COUNT DISTINCT ELEMENTS USING SET//
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> S = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    cout << "Number of distinct elements: " << S.size() << endl;

    return 0;
}
