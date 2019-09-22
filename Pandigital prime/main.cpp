#include<iostream>
#include<cmath>
using namespace std;
bool checkPrime(long long unsigned int num)
{
for(int i=2;i<=sqrt(num);i++)
{
if(num%i==0)
return false;
}
return true;
}
bool findAns(int num)
{
int count=0;
int hash[10];
for(int i=1;i<=9;i++)
hash[i]=0;
int aux=num;
int rem;
while(aux>0)
{
rem=aux%10;
hash[rem]++;
count++;
aux=aux/10;
}
for(int i=1;i<=count;i++)
{
if(hash[i]==1);
else
return false;
}
return true;
}
int main()
{
long long unsigned int n=10000000;
long long unsigned int max=0;
bool yes;
for(long long unsigned int i=2;i<=n;i++)
{
yes=checkPrime(i);
if(yes)
{
yes=findAns(i);
if(yes)
{
cout<<i<<endl;
if(i>max)
max=i;
}
}
}
cout<<max<<endl;
return 0;
}
