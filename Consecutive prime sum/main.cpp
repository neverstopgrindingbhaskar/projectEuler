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
vector<bool>prime(limit,true);
vector<int>primeNum;
int main()
{
prime[0]=false;
prime[1]=false;
for(int i=2;i<=sqrt(limit);i++)
{
if(prime[i])
{
for(int j=i+i;j<limit;j+=i)
{
prime[j]=false;
}
}
}
for(int i=2;i<limit;i++)
{
if(prime[i])
primeNum.em(i);
}
//print("%ld\n",primeNum.size());
LL m;
vector<LL>sum(primeNum.size()+1,0);
for(int i=0;i<primeNum.size();i++)
{
sum[i+1]=sum[i]+primeNum[i];
}
int i=sum.size();
int count=0;
while(i>0)
{
if(sum[i]<1e6)
{
if(prime[sum[i]])
{
if(i>count)
{
m=sum[i];
count=i;
}
}
else 
{
LL num=sum[i];
for(int j=0;j<i;j++)
{
num=num-primeNum[j];
if(num>1 && prime[num])
{
if(i-j>count)
{
count=i-j-1;
m=num;
break;
}
}
}
}
}
i--;
//print("%d\n",count);
}
print("%d %lld\n",count,m);
return 0;
}
