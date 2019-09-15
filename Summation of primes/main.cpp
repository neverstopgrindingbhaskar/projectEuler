#include<iostream>
#include<cmath>
using namespace std;
int main()
{
bool prime[2000000];
for(int i=1;i<=2000000;i++)
prime[i]=true;
int n=2000000;
for(int i=2;i<=sqrt(n);i++)
{
if(prime[i])
{
for(int j=i+i;j<=n;j+=i)
prime[j]=false;
}
}
long long unsigned int sum=0;
for(int i=2;i<=n;i++)
{
if(prime[i])
sum+=i;
}
cout<<sum;
cout<<endl;
return 0;
}
