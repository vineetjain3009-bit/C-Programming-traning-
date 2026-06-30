//program to evaluate sum of all integers from 1 to n //
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }cout<<"sum of numbers from 1 to "<<n<<" is:"<<sum<<endl;
    return 0;
}
