#include<iostream>
using namespace std;
long long unsigned int findFact(int num)
{
long long unsigned int fact=1;
for(int i=1;i<=num;i++)
fact=fact*i;
return fact;
}
long long unsigned int findAns(int num)
{
int rem;
long long unsigned int ans=0;
if(num>9)
{
while(num>0)
{
rem=num%10;
ans+=findFact(rem);
num=num/10;
}
}
else
ans=findFact(num);
return ans;
}
int main()
{
long long unsigned int sum=0;
long long unsigned int num;
for(int i=3;i<=1000000;i++)
{
num=findAns(i);
if(num==i)
{
sum+=i;
cout<<i<<endl;
}
}
cout<<sum<<endl;
return 0;
}
