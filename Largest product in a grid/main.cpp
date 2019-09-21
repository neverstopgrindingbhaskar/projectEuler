#include<iostream>
#include <fstream>
#include<vector>
#include<algorithm>
#define pb push_back
#define ll long long unsigned int
using namespace std;
FILE *fp;
int main()
{
ll num;
int arr[20][20];
fstream myfile("in.txt",ios_base::in);
for(int i=0;i<20;i++)
{
for(int j=0;j<20;j++)
{
myfile>>num;
arr[i][j]=num;
}
}
ll maxer=0;
vector<ll>v1;
for(int i=0;i<20;i++)//left and right
{
for(int j=0;j<20;j++)
{
if(j+3<20)
{
num=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
v1.pb(num);
}
}
}
for(int i=0;i<20;i++)//up and down
{
for(int j=0;j<20;j++)
{
if(i+3<20)
{
num=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
v1.pb(num);
}
}
}
for(int i=0;i<20;i++)//diagonal
{
for(int j=0;j<20;j++)
{
if(i+3<20 && j+3<20)
{
num=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
v1.pb(num);
}
}
}
for(int i=0;i<20;i++)//up diagonal
{
for(int j=0;j<20;j++)
{
if(i+3<20 && j-3>=0)
{
num=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
v1.pb(num);
}
}
}
sort(v1.begin(),v1.end());
cout<<v1[v1.size()-1]<<endl;
return 0;
}
