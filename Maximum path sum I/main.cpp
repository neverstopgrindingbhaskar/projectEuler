#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int n;
cin>>n;
int dp[n+1][n+1];
int arr[n+1][n+1];
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
arr[i][j]=0;
dp[i][j]=0;
}
}
int k=1;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=k;j++)
{
cin>>arr[i][j];
}
k++;
}
for(int i=1;i<=n;i++)
dp[n][i]=arr[n][i];
for(int i=n-1;i>0;i--)
{
for(int j=i;j>=1;j--)
{
dp[i][j]=max(dp[i+1][j+1]+arr[i][j],dp[i+1][j]+arr[i][j]);
}
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
cout<<dp[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
