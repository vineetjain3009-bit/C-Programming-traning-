//program for sum function//
#include<iostream>
using namespace std;

    int sum(int a,int b){
        return a+b;
    }
    int main(){
        int x,y;
       cout<<"enter two values";
       cin>>x>>y;
       cout<<"sum="<<sum(x,y);
        return 0;
    }
