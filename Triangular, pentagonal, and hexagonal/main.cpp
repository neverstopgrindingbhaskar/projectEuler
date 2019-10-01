#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
long long unsigned int n=1000000;
vector <long long unsigned int>v1;
long long unsigned int num1,num2,num3;
for(long long unsigned int i=1;i<=n;i++)
{
num1=(i*i+i)/2;
num2=(3*i*i-i)/2;
num3=(2*i*i-i);
v1.push_back(num1);
v1.push_back(num2);
v1.push_back(num3);
}
unordered_map<long long unsigned int,long long unsigned int>m1;
for(int i=0;i<v1.size();i++)
{
m1[v1[i]]++;	
}
unordered_map<long long unsigned int,long long unsigned int>::iterator it;
vector <long long unsigned int>v2;
for(it=m1.begin();it!=m1.end();it++)
{
if(it->second==3)
v2.push_back(it->first);
}
sort(v2.begin(),v2.end());
for(int i=0;i<v2.size();i++)
cout<<v2[i]<<endl;
return 0;
}
