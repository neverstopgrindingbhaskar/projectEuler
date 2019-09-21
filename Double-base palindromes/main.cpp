#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(string str)
{
int i=0;
int j=str.size()-1;
while(i<j)
{
if(str[i]==str[j])
{
i++;
j--;
}
else
return false;
}
return true;
}
bool isBinary(long long unsigned int n)
{
long long unsigned int sum=0;
int rem;
int count=0;
string str;
while(n>0)
{
rem=n%2;
str.push_back(rem+'0');
n=n/2;
count++;
}
bool yes=isPalindrome(str);
if(yes)
{
return true;
}
else
return false;
}
int main()
{
long long unsigned int n=1000000;
long long unsigned int sum=0;
string str;
vector<long long unsigned int >v1;
for(long long unsigned int i=1;i<n;i++)
{
str=to_string(i);
bool ispal=isPalindrome(str);
if(ispal)
v1.push_back(i);
}
for(long long unsigned int i=0;i<v1.size();i++)
{

bool yes=isBinary(v1[i]);
if(yes==true)
{
cout<<v1[i]<<endl;
sum+=v1[i];
}
}
cout<<sum<<endl;
return 0;
}
