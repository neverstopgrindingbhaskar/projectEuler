#include<iostream>
#include<cmath>
using namespace std;
bool findleft(int num,bool prime[])
{
int count=0;
int aux=num;
while(aux>0)
{
count++;
aux=aux/10;
}
int n,temp;
int power=pow(10,count-1);
for(int i=0;i<count-1;i++)
{
n=num/power;
temp=num-(n*power);
if(prime[temp]);
else
return false;
power=power/10;
num=temp;
}
return true;
}
bool findright(int num,bool prime[])
{
int aux=num;
while(aux>0)
{
if(prime[aux]==true);
else
return false;
aux=aux/10;
}
return true;
}
int main()
{
int n=1000000;
bool prime[n];
for(int i=2;i<=n;i++)
prime[i]=true;
for(int i=2;i<=sqrt(n);i++)
{
if(prime[i])
{
for(int j=i+i;j<=n;j+=i)
prime[j]=false;
}
}
long long unsigned int sum=0;
for(int i=10;i<=n;i++)
{
if(prime[i])
{
bool left=findleft(i,prime);
bool right=findright(i,prime);
if(left == true && right==true)
{
cout<<i<<endl;
sum+=i;
}
}
}
cout<<sum<<endl;
return 0;
}
