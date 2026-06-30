//program to store and print elements using vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for (const auto& element : vec) {
        cout << element << " ";
    }

    return 0;
}
