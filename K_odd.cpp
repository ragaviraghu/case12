#include<iostream>
using namespace std;
int main()
{
int N,K,a[N],count=0;
cout<<"Enter the N and : "<<endl;
cin>>N>>K;
cout<<"Enter the N numbers : "<<endl;
for(int i=1;i<=N;i++)
{
cin>>a[i];
}
for(int i=1;i<=N;i++)
{
if((a[i]%2)!=0)
{
count++;
if(count==K)
{
cout<<"The Kth odd number is : "<<a[i]<<endl;
break;
}
}
}
if(count==0)
cout<<"There is no odd numbers"<<endl;
if(count!=0 && count<K)
cout<<"There is no Kth odd number"<<endl;
return 0;
}
