//PROGRAM FOR INTERSECTION OF ARRAYS USING SET//
#include <iostream>
#include <set>
using namespace std;

int main() {
   set<int> a = {1, 2, 3, 4, 5};
    set<int> b = {4, 5, 6, 7, 8};


    for(int x:a)
    {
        if(b.count(x))
        {
            cout << x << " ";
        }

    cout << endl;
    }
    return 0;
}
