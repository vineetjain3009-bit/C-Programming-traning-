#include<iostream>
using namespace std;
int main(){
    int p,r,t,SI;
    cout<<"enter the principal amount";
    cin>>p;
    cout<<"enter the rate  of interest";
    cin>>r;
    cout<<"enter the time duration";
    cin>>t;
    SI=p*r*t/100;
cout<<"simple interest="<<SI<<endl;
return 0;
}
