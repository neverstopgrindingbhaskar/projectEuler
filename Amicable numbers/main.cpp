#include<iostream>
#include<vector>
#include<algorithm>
#define pb push_back
using namespace std;
int findDiv(int num)
{
int sum=0;
for(int i=1;i<num;i++)
{
if(num%i==0)
sum+=i;
}
return sum;
}
int main()
{
int n=10000;
int sum=0;
int div[1000000];
for(int i=1;i<=n;i++)
{
sum=findDiv(i);
div[i]=sum;
}
int num;
sum=0;
vector<int>v1;
for(int i=1;i<=n;i++)
{
num=div[i];
if(i==div[num] && i!=num)
{
cout<<i<<" "<<div[num]<<" "<<num<<endl;
if(find(v1.begin(),v1.end(),i)==v1.end() && find(v1.begin(),v1.end(),num)==v1.end())
{
v1.pb(i);
v1.pb(num);
}
}
}
for(int i=0;i<v1.size();i++)
{
sum+=v1[i];
}
cout<<sum<<endl;
return 0;
}
