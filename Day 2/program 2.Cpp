#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b && a>c){
    cout<<"largest number is="<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"largest number is="<<b;
        }
            else
    {
        cout<<"largest number is="<<c;
    }
    return 0;
}
