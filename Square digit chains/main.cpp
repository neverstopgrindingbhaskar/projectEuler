// IN THE NAME OF GOD
//INEFFICIENT SOLUTION COULD BE MADE BETTER
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
struct hash_pair { 
template <class T1, class T2> 
size_t operator()(const pair<T1, T2>& p) const
{ 
auto hash1 = hash<T1>{}(p.first); 
auto hash2 = hash<T2>{}(p.second); 
return hash1 ^ hash2; 
} 
}; 
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
template<class type>
void display2D(type &arr)
{
for(auto i:arr)
{
for(auto j:arr[i])
{
print("%d ",j);
}
print("\n");
}
}
bool findAns(string &str)
{
while(1)
{
ll num=0;
if(str.size()==1 && str=="1")
return false;
else if(str.size()==2 && str=="89")
return true;
else
{
for(int i=0;i<str.size();i++)
num+=pow(str[i]-'0',2);
//print("%lld\n",num);
str=to_string(num);
}
}
}
int main()
{

int count=0;
ll n=1e7;
for(ll i=2;i<=n;i++)
{
string str=to_string(i);
bool yes=findAns(str);
if(yes)
count++;
}
print("%d\n",count);
return 0;
}
