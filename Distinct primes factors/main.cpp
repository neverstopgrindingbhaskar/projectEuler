#include<iostream>
#include<cmath>
#include<set>
using namespace std;
bool check(int num,bool prime[])
{
set<int>s1;
int count=0;
if(num%2==0)
s1.insert(2);
while(num%2==0)
num=num/2;
int i=3;
while(num>0 && i<=num)
{
if(prime[i] && num%i==0)
{
s1.insert(i);
num=num/i;
}
else
i++;
}
if(s1.size()==4)
return true;
else
return false;
}
int main()
{
int n=1000000;
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
for(int i=10;i<=n;i++)
{
bool ans1=check(i,prime);
bool ans2=check(i+1,prime);
bool ans3=check(i+2,prime);
bool ans4=check(i+3,prime);
if(ans1==true && ans2==true && ans3==true && ans4==true)
cout<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
}
return 0;
}
