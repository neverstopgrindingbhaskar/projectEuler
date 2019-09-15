#include<iostream>
#define ll long long unsigned int
using namespace std;
int findAns(ll n)
{
int count=0;
while(n>1)
{
if(n%2==0)
{
n=n/2;
count++;
}
else
{
n=(3*n)+1;
count++;
}
}
return count;
}
int main()
{
ll n=1000000;
int max=0;
int maxCount=0;
for(ll i=0;i<=n;i++)
{
int ans=findAns(i);
if(ans>maxCount)
{
maxCount=ans;
max=i;
}
}
cout<<max<<endl;
return 0;
}
