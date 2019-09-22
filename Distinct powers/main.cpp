#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string str;
double num;
vector<string>v1;
for(int i=2;i<=100;i++)
{
for(int j=2;j<=100;j++)
{
str=to_string(pow(i,j));
v1.push_back(str);
}
}
sort(v1.begin(),v1.end());
auto iter=unique(v1.begin(),v1.end());
v1.erase(iter,v1.end());
cout<<v1.size()<<endl;

return 0;
}
