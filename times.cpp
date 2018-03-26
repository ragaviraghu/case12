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
if(a[i]==K)
count++;
}
if(count!=0)
cout<<"K exists for "<<count<<" times "<<endl;
else
cout<<"No k doesn't exist(0 times)"<<endl;
return 0;
}
