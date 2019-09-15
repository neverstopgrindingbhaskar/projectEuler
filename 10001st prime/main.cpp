#include<iostream>
#include<vector>
using namespace std;
int main()
{
int prime=0;
int n=10001;
vector <int >v1;
for(int i=1;i<=1000000;i++)
{
prime=0;
for(int j=1;j<=1000000;j++)
{
if(i%j==0)
prime++;
}
if(prime==2)
v1.push_back(i);
}
cout<<v1.size()<<endl;
for(int i=0;i<=v1.size();i++)
{
if(i==n)
cout<<v1[i]<<endl;
}
return 0;
}
