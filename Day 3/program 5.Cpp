//program to count digits in a given number//
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
    while(n !=0)
    { n=n/10;
    count++;
}
cout<<"number of digits = "<<count;
return 0;
}
