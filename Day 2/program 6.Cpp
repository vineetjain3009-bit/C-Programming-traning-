//program to design simple calculator using switch statement//
#include<iostream>
using namespace std;
int main(){
   int a,b;
   char oper;
   cout<<"enter first numbers";
   cin>>a;
   cout<<"enter operator +,-,*,/,%";
   cin>>oper;
   cout<<"enter second number";
   cin>>b;
   switch(oper){
    case '+':
    cout<<"sum="<<a+b;
    break;
    case '-':
    cout<<"substraction="<<a-b;
    break;
    case '*':
    cout<<"multiplication="<<a*b;
    break;
    case '/':
    if(b !=0){
    cout<<"division="<<a/b;}
    else{
        cout<<"division by zero not possible";
    }
    break;
    case '%':
    cout<<"remainder="<<a % b;
    default:
    cout<<"invalid operator";

   }
   return 0;

}
