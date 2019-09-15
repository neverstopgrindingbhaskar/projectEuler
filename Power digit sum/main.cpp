#include<iostream>
#include<cmath>
#include<string>
#define ll long long unsigned int
using namespace std;
int main()
{
string str=to_string(pow(2,1000));
cout<<str<<endl;
ll sum=0;
int num=0;
int rem;
for(int i=0;i<str.size();i++)
{
if(str[i]=='.')
break;
sum+=str[i]-48;
}
cout<<sum<<endl;
return 0;
}
