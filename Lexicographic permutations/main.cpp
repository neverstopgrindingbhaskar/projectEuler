#include<bits/stdc++.h>
using namespace std;
void findAns(string str,string aux,long long &n,long long &count)
{
//cout<<str<<endl;
if(str.size()==0)
{
if(count==1000000)
cout<<aux<<endl;
count++;
}
else
{
for(int i=0;i<str.size();i++)
{
char c=str[i];
aux+=c;
str.erase(str.begin()+i);
sort(str.begin(),str.end());
findAns(str,aux,n,count);

str.insert(str.begin(),c);
aux.pop_back();
}
}
}
int main()
{
string str="0123456789";
long long n=99999;
long long count=1;
string aux;
findAns(str,aux,n,count);
return 0;
}
