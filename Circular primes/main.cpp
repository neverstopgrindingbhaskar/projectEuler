#include<iostream>
#include<cmath>
#define ll long long unsigned int
using namespace std;
bool isprime(ll num)
{
for(ll i=2;i<=sqrt(num);i++)
{
if(num%i==0)
return false;
}
return true;
}
bool check(ll num)
{
int count=0;
ll aux=num;
while(aux>0)
{
count++;
aux=aux/10;
}
int first;
int ans;
int div=pow(10,count-1);
string str=to_string(num);
for(int i=0;i<str.size();i++)
{
if(str[i]=='0')
return false;
}
for(int i=0;i<count-1;i++)
{
first=num/div;
ans=((num*10)+first)-(first*div*10);
bool yes=isprime(ans);
if(yes)
num=ans;
else
return false;
}
return true;
}
int main()
{
int count=0;
ll num=1000000;
for(ll i=2;i<=num;i++)
{
bool yes=isprime(i);
if(yes)
{
yes=check(i);
if(yes)
{
cout<<i<<endl;
count++;
}
}
}
cout<<count<<endl;
return 0;
}
