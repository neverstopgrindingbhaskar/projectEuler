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
const int n=10000;
bool palindrome(string str)
{
int i=0;
int j=str.size()-1;
while(i<j)
{
if(str[i]==str[j])i++,j--;
else
return false;
}
return true;
}
string adder(string first,string second)
{
string aux;
int carry=0;
int remainder;
for(int i=first.size()-1;i>=0;i--)
{
remainder=((first[i]-'0')+(second[i]-'0')+carry)%10;
aux.pb(remainder+'0');
carry=((first[i]-'0')+(second[i]-'0')+carry)/10;
}
if(carry)
aux.pb(carry+'0');
reverse(aux.begin(),aux.end());
return aux;
}
bool findAns(string str)
{
int count=1;
ll num1,num2;
while(count<=50)
{
//cout<<str<<endl;
string first=str;
reverse(str.begin(),str.end());
string second=str;
string aux=adder(first,second);
bool yes=palindrome(aux);
if(yes)
return true;
str=aux;
count++;
}
//cout<<num1<<" "<<num2<<" "<<str<<endl;
return false;
}
int main()
{
int count=0;
//cout<<str<<endl;
for(int i=1;i<=n;i++)
{
string str=to_string(i);
bool yes=findAns(str);
if(yes==false)
{
//print("%d\n",i);
count++;
}
}
print("%d\n",count);
return 0;
}
