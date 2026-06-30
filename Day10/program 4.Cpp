//PROGRAM FOR UNION OF ARRAYS USING SET//
#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {4, 5, 6, 7, 8};

    set<int> s;
    for(int x:a)s.insert(x);
    for(int x:b)s.insert(x);

    for(int x:s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
