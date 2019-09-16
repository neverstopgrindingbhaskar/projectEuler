//some modifications to the input file
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int findSum(string str)
{
int sum=0;
int ascii;
for(int i=0;i<str.size();i++)
{
ascii=str[i]-64;
sum+=ascii;
}
return sum;
}
int main()
{
fstream infile;
infile.open("in.txt",ios::in );
string str;
vector<string>v1;
while(infile>>str)
v1.push_back(str);
sort(v1.begin(),v1.end());
long long unsigned int sum=0;
for(int i=0;i<v1.size();i++)
{
int num=findSum(v1[i]);
sum+=(i+1)*num;
}
cout<<sum<<endl;
return 0;
}
