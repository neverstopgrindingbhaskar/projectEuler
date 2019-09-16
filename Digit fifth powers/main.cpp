#include<iostream>
#include<cmath>
using namespace std;
bool findAns(long long unsigned int num)
{
int rem;
long long unsigned int aux=num;
long long unsigned int sum=0;
while(num>0)
{
rem=num%10;
sum+=pow(rem,5);
num=num/10;
}
if(aux==sum)
return true;
else
return false;
}
int main()
{
long long unsigned int n=1000000;
long long unsigned int sum=0;
bool yes;
for(long long unsigned int i=1;i<=n;i++)
{
yes=findAns(i);
if(yes && i!=1)
{
cout<<i<<endl;
sum+=i;
}
}
cout<<sum<<endl;
return 0;
}
