#include<iostream>
#include<cmath>
using namespace std;
bool findAns(int num,bool prime[],int n)
{
int flag=0;
for(int i=2;i<=n;i++)
{
if(prime[i])
{
int sum=0;
for(int j=1;j<=50;j++)
{
for(int k=1;k<=50;k++)
{
sum=i+(2*pow(k,2));
if(sum==num)
return false;
if(sum>num)	
break;
}
}
}
}
return true;
}
int main()
{
int n=100000;
bool prime[n];
for(int i=2;i<=n;i++)
prime[i]=true;
for(int i=2;i<=sqrt(n);i++)
{
if(prime[i])
{
for(int j=i+i;j<=n;j+=i)
prime[j]=false;
}
}
for(int i=2;i<=n;i++)
{
if(prime[i]==false && i%2!=0)
{
bool ans=findAns(i,prime,n);
if(ans)
{
cout<<i<<" ans"<<endl;
break;
}
}
}
return 0;
}
