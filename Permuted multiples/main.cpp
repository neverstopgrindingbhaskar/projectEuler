#include<iostream>
using namespace std;
bool findAns(long long unsigned int num,int hash[])
{
int hash2[10];
for(int i=1;i<=9;i++)
hash2[i]=0;
long long unsigned int aux=num;
while(aux>0)
{
int rem=aux%10;
hash2[rem]++;
aux=aux/10;
}
for(int i=1;i<=9;i++)
{
if(hash[i]==hash2[i]);
else
return false;
}
return true;
}
int main()
{
bool x,y,z,a,b;
int hash[10];
for(int i=1;i<=1000000;i++)
{
int n=i;
for(int j=1;j<=9;j++)
hash[j]=0;
while(n>0)
{
int rem=n%10;
hash[rem]++;
n=n/10;
}
x=findAns(2*i,hash);
y=findAns(3*i,hash);
z=findAns(4*i,hash);
a=findAns(5*i,hash);
b=findAns(6*i,hash);
if(x==true&& y==true&& z==true && a==true && b==true)
{
cout<<i<<endl;
break;
}
}
return 0;
}
