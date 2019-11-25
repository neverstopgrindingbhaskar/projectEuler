// IN THE NAME OF GOD
#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define ll long long unsigned int
#define LL long long
#define justl long
#define em emplace_back
#define pb push_back
#define INF 1e7+5
#define MOD 1e9+7
#define print printf
#define in scanf
using namespace std;
template<class type>
void displaySingle(type &arr)
{
for(auto i:arr)
cout<<i<<" ";
cout<<endl;
}
template<class type>
void displayDouble(type &arr)
{
for(auto i:arr)
cout<<i.first<<" "<<i.second<<endl;
}
bool hasher(string str)
{
int hash[10];
for(int i=1;i<=9;i++)
hash[i]=0;
for(int i=0;i<str.size();i++)
{
if(str[i]=='0')
return false;
else
hash[str[i]-'0']++;
}
for(int i=1;i<=9;i++)
{
if(hash[i]==1)
continue;
else
return false;
}
return true;
}
int main()
{
ll m=0;
int num;
string str;
for(int i=1;i<=10000;i++)
{
str="";
for(int j=1;j<=500;j++)
{
num=i*j;
str+=to_string(num);
if(str.size()==9)
{
bool yes=hasher(str);
if(yes)
{
//cout<<str<<endl;
if(stoi(str)>m)
m=stoi(str);
}
}
}
}
print("%lld\n",m);
return 0;
}
