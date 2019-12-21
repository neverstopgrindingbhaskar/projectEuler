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
const int limit=1e6;
ll check(int n, int r) 
{ 
ll p = 1, k = 1; 
if (n - r < r) 
r = n - r; 
if (r != 0) 
{ 
while (r)
{ 
p *= n; 
k *= r; 
long long m = __gcd(p, k); 
p /= m; 
k /= m; 
n--; 
r--; 
} 
}  
else
p = 1; 
return p;
} 
int main()
{
int count=0;
for(int n=1;n<=100;n++)
{
for(int r=1;r<n;r++)
{
ll ans=check(n,r);
if(ans>=limit)
count++;
}
}
print("%d\n",count);
return 0;
}
