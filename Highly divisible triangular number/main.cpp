#include<iostream>
#include<cmath>
using namespace std;
int findDiv(long long unsigned int  num)
{
int count=0;
for(int i=1;i<=sqrt(num);i++)
{
if(num%i==0)
{
if(num/i==i)
count++;
else
count+=2;
}
}
return count;
}
int main()
{
long long unsigned int dp[100000];
dp[0]=0;
for(int i=1;i<=100000;i++)
dp[i]=dp[i-1]+i;
long long unsigned int  divlist[100000];
for(int i=1;i<=100000;i++)
divlist[i]=findDiv(dp[i]);
cout<<"THe div list and the adders are"<<endl;
for(int i=1;i<=100000;i++)
{
if(divlist[i]>=500)
cout<<dp[i]<<endl;
}
return 0;
}
