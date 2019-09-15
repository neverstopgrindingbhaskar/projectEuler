#include<iostream>
#include<cmath>
using namespace std;
int ispalindrome(long long unsigned int num)
{
int rem;
int len=0;
long long unsigned int sum=0,n;
n=num;
while(n>0)
{
rem=n%10;
n=n/10;
len++;
}
n=num;
len=len-1;
while(n>0)
{
rem=n%10;
sum+=rem*pow(10,len);
n=n/10;
len--;
}
if(sum==num)
{
cout<<"Sum found "<<sum<<endl;
return 1;
}
else
return -1;
}
int main()
{
long long unsigned int product;
for(int i=100;i<=999;i++)
{
for(int j=100;j<=999;j++)
{
product=i*j;
int res=ispalindrome(product);
if(res==1)
cout<<i<<" "<<j<<endl;
}
}
return 0;
}
