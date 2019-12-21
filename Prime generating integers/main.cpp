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
#define pop_back pb1
using namespace std;
typedef pair<int,int> pi;
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
const ll limit=1e8;
ll sum=0;
vector<bool>m1(limit,true);

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
m1[0]=false;
m1[1]=false;
for(ll i=2;i<=sqrt(limit);i++)
{
if(m1[i])
{
for(ll j=i+i;j<limit;j+=i)
m1[j]=false;
}
}
print("Completed\n");
int flag;
for(ll i=1;i<limit;i++)
{
flag=0;
for(ll j=1;j<=sqrt(i);j++)
{
if(i%j==0)
{
ll n=i/j;
if(m1[j+(i/j)]==true && m1[n+(i/n)]==true)
continue;
else
{
flag=1;
break;
}
}
}
if(flag==0)
{
//print("%lld\n",i);
sum+=i;
}
}
print("%lld\n",sum);
return 0;
}
