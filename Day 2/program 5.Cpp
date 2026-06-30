//program to check if given number is positive/negative/zero //
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter a number";
    cin>>x;
    if(x>0){
        cout<<"the number is positive.";
    }else if(x<0){
        cout<<"the number is negative.";
    }else {
        cout<<"the number is zero";
    }
    return 0;
}
