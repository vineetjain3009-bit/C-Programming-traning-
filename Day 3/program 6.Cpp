// program to checkl entered number is prime number or not//
#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cout<<"enter a number";
    cin>>n;
    if(n<=1){
        cout<<n<<" is not a prime number";
    }else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        cout<<n<<" is a prime number";
        else cout<<n<<" is not a prime number";

    }return 0;
}
