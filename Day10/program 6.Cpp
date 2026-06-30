//program to remove duplicates from an array using set
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};


    set<int> s(arr,arr+7);

    cout << "Array after removing duplicates: ";
    for(int x:s) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
