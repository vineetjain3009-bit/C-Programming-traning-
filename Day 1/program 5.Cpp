#include<iostream>
using namespace std;
int main(){
    int a,b;
   cout<<"enter two values";
   cin>>a>>b;
   cout<<"before swapping\n"<<"a="<<a<<"\nb="<<b<<endl;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"after swapping \n"<<"a="<<a<<"\nb="<<b;
return 0;
}
