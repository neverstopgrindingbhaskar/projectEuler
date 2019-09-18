#include<iostream>
#include<set>
#define ll long long unsigned int
using namespace std;
bool findAns(ll prod,int n1,int n2)
{
int hash[10];
int rem;
for(int i=0;i<=9;i++)
hash[i]=0;
if(n1>9)
{
while(n1>0)
{
rem=n1%10;
hash[rem]++;
n1=n1/10;
if(hash[0]>0)
return false;
}
}
else
hash[n1]++;
if(n2>9)
{
while(n2>0)
{
rem=n2%10;
hash[rem]++;
n2=n2/10;
if(hash[0]>0)
return false;
}
}
else
hash[n2]++;
while(prod>0)
{
rem=prod%10;
hash[rem]++;
prod=prod/10;
if(hash[0]>0)
return false;
}
for(int i=1;i<=9;i++)
{
if(hash[i]==1);
else
return false;
}
return true;
}
int main()
{
ll sum=0;
set<ll>s1;
ll prod=1;
for(int i=1;i<=10000;i++)
{
for(int j=i+1;j<=10000;j++)
{
prod=i*j;
bool yes=findAns(prod,i,j);
if(yes)
s1.insert(prod);
}
}
for (auto it=s1.begin(); it != s1.end(); ++it)
{
sum+=*it; 
cout<<*it<<" ";
}
cout<<sum<<endl; 
return 0;
}
