//program to calculate grades //
#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"enter your marks out of 100";
    cin>>marks;
    if(marks<0 || marks>100){
        cout<<"invalid marks entered";
    }
    else if(marks>=85 && marks<=100){
        cout<<"The student has got Grade A";
    }else if(marks>=70){
        cout<<"The student has got Grade B";
    }else if(marks>=50){
        cout<<"The student has got Grade C";
    }else if(marks>=33){
        cout<<"The student has got Grade D";
    }else {
        cout<<"The student has got Grade F";
    }
    return 0;
}
