#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"Enter the integer : "<<endl;
cin>>n;
while(n>0)
{
n/=10;
++count;
}
cout<<"Number of digits in the given integer is : "<<count<<endl;
return 0;
}
