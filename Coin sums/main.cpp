#include<iostream>
using namespace std;
int main()
{
int arr[8]={1,2,5,10,20,50,100,200};
int n=200;
int dp[n+1];
for(int i=0;i<=n;i++)
dp[i]=0;
dp[0]=1;
for(int i=0;i<8;i++)
{
for(int j=0;j<=n;j++)
{
if(j>=arr[i])
dp[j]+=dp[j-arr[i]];
}
}
for(int i=0;i<=n;i++)
cout<<dp[i]<<" ";
cout<<endl;

return 0;
}
