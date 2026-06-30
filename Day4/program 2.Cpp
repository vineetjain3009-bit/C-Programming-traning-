//function to print maximum of two variables//
#include<iostream>
using namespace std;
void max(int a,int b)
{if(a>b)
cout<<"maximum="<<a;
else
cout<<"maximum="<<b;
}
int main()
{ int x,y;
cout<<"enter two numbers";
cin>>x>>y;
max(x,y);
return 0;
}
