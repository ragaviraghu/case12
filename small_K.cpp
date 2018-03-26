#include<iostream>
using namespace std;
int main()
{
int N,K,a[N],temp;
cout<<"Enter the N and : "<<endl;
cin>>N>>K;
cout<<"Enter the N numbers : "<<endl;
for(int i=1;i<=N;i++)
{
cin>>a[i];
}
for(int i=1;i<=N;i++)
{
for(int j=i+1;j<=N;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
if(K<N)
cout<<"The K th smallest element is "<<a[K]<<endl;
else
cout<<"Kth samllest element doesn't exist"<<endl;
return 0;
}
