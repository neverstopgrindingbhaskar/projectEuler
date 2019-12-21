// IN THE NAME OF GOD
//most inefficient solution
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
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string str;
for(ll i=1000000000;i<=10000000000;i++)
{//1_2_3_4_5_6_7_8_9_0
str=to_string(i*i);
//cout<<str<<" "<<str.size()<<" "<<i<<endl;
if(str.size()>19)
break;
if(str.size()<19)
continue;
if(str[0]=='1' && str[2]=='2' && str[4]=='3' && str[6]=='4' && str[8]=='5' && str[10]=='6' && str[12]=='7' && str[14]=='8' && str[16]=='9' && str[18]=='0')
{
cout<<str<<" "<<i<<endl;
}
}
return 0;
}
