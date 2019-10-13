#include<bits/stdc++.h>
#define formula(n,a,b) (n*n)+(a*n)+b
using namespace std;
bool isprime(long ans)
{
if(ans<=1)
return false;
for(int i=2;i<=sqrt(ans);i++)
{
if(ans%i==0)
return false;
}
return true;
}
int main()
{
int count=0;
int num1;
int num2;
int num3;
int flag=0;
//int a,b;
int max=0;
int j;
int n;
for(int b=-1000;b<=1000;b++)
{
for(int a=-1000;a<1000;a++)
{
count=0;
if(isprime(long(formula(0,a,b))))
{
count=1;
for(n=1;n<=5000;n++)
{
if(isprime(long(formula(n,a,b))))
count++;
else
break;
}
if(count>max)
{
max=count;
num1=n;
num2=a;
num3=b;
cout<<n<<"*"<<n<<"+"<<a<<"*"<<n<<"+"<<b<<endl;
cout<<a*b<<endl;
}
}
}
}
return 0;
}
