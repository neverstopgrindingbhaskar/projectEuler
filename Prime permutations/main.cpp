#include<iostream>
#include<cmath>
using namespace std;
void hasher(int num,int hash[])
{
for(int i=1;i<=9;i++)
hash[i]=0;
int rem;
while(num>0)
{
rem=num%10;
hash[rem]++;
num=num/10;
}
}
int main()
{
int n=100000;
bool prime[n];
for(int i=2;i<=n;i++)
prime[i]=true;
int flag=0;
for(int i=2;i<=sqrt(n);i++)
{
if(prime[i])
for(int j=i+i;j<=n;j+=i)
prime[j]=false;
}
int num1,num2,num3;
for(int i=2;i<=n;i++)
{
flag=0;
if(prime[i])
{
num1=i+3330;
if(prime[num1])
{
num2=num1+3330;
if(prime[num2])
{
int hash1[10];
int hash2[10];
hasher(num1,hash1);
hasher(num2,hash2);
for(int j=1;j<=9;j++)
{
if(hash1[j]==hash2[j]);
else
{
flag=1;
break;
}
}
if(flag==0)
cout<<i<<" "<<num1<<" "<<num2<<" "<<endl;
}
}
}
}
return 0;
}
