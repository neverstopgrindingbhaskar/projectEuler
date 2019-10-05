#include<iostream>
#define INT_MAX 1e7
using namespace std;
int main()
{
int arr[81][81];
for(int i=1;i<=80;i++)
{
for(int j=1;j<=80;j++)
{
cin>>arr[i][j];
}
}
int dp[81][81];
for(int i=1;i<=80;i++)
{
for(int j=1;j<=80;j++)
dp[i][j]=INT_MAX;
}
dp[1][1]=arr[1][1];
for(int i=2;i<=80;i++)
dp[1][i]=min(dp[1][i-1]+arr[1][i],dp[1][i]);
for(int i=2;i<=80;i++)
dp[i][1]=min(dp[i-1][1]+arr[i][1],dp[i][1]);
for(int i=2;i<=80;i++)
{
for(int j=2;j<=80;j++)
{
dp[i][j]=min(dp[i][j-1]+arr[i][j],dp[i-1][j]+arr[i][j]);
}
}
for(int i=1;i<=80;i++)
{
for(int j=1;j<=80;j++)
{
cout<<dp[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
