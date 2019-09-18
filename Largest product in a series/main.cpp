#include<iostream>
#include<string>
using namespace std;
long long unsigned int findAns(string str)
{
int end;
long long unsigned int prod=1;
long long unsigned int maxer=0;
for(int i=0;i<str.size();i++)
{
if(i+13<str.size())
{
end=i+13;
prod=str[i]-48;
for(int j=i+1;j<end;j++)
prod=prod*(str[j]-48);
}
maxer=max(maxer,prod);
}
return maxer;
}
int main()
{
string str;
int i=0;
long long unsigned int maxer=0;
cin>>str;
long long unsigned int num=findAns(str);
maxer=max(maxer,num);
cout<<maxer<<endl;
return 0;
}
