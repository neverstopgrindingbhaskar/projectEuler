// IN THE NAME OF GOD
// very inefficient solution, only i can develop 
#include<bits/stdc++.h>
using namespace std;
bool findNum(vector<long long unsigned int>v1,long long unsigned int num,int index)
{
for(int i=index;i<v1.size();i++)
{
if(v1[i]==num)
return true;
else if(v1[i]>num)
return false;
}
return false;
}
bool findDiff(vector<long long unsigned int>v1,long long unsigned int num,int index)
{
for(int i=index;i>=0;i--)
{
if(v1[i]==num)
return true;
else if(v1[i]<num)
return false;
}
return false;
}
int main()
{
long long unsigned int ans;
long long unsigned int num=10000;
vector<long long unsigned int>v1;
for(int i=1;i<=num;i++)
{
ans=((3*i*i)-i)/2;
v1.push_back(ans);
}
int flag=0;
for(int i=0;i<v1.size()/2;i++)
{
for(int j=i+1;j<v1.size();j++)
{
long long unsigned int num=v1[i]+v1[j];
bool yes=findNum(v1,num,j+1);
if(yes)
{
if(v1[i]>=v1[j])
{
num=v1[i]-v1[j];
if(findDiff(v1,num,j-1))
{
flag=1;
cout<<v1[i]<<" "<<v1[j]<<endl;
break;
}
}
else
{
num=v1[j]-v1[i];
if(findDiff(v1,num,j-1))
{
flag=1;
cout<<v1[i]<<" "<<v1[j]<<endl;
break;
}
}
}
}
if(flag==1)
break;
}
return 0;
}
