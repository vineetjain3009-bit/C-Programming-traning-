//program to print address //
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter val;ue of n";
    cin>>n;
    int *ptr;
    ptr =&n;

    cout << "Value of number = " << n << endl;
    cout << "Address of number = " << ptr << endl;

    return 0;
}
