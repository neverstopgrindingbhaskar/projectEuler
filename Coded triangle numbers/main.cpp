#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int findAns(string str)
{
int sum=0;
for(int i=0;i<str.size();i++)
sum+=str[i]-64;
return sum;
}
int main()
{
int num;
bool dp[100000];
for(int i=1;i<=100000;i++)
dp[i]=false;
for(int i=1;i<=10000;i++)
{
num=(i*i+i)/2;
if(num<=100000)
dp[num]=true;
}
ifstream infile;
string str;
int count=0;
infile.open("in.txt");
while(infile>>str)
{
num=findAns(str);
if(dp[num]==true)
count++;
}
cout<<count<<endl;
return 0;
}
