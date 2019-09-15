#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int num1;
int num2;
int num3;
for(int i=0;i<=1000;i++)
{
num3=i*i;
for(int j=0;j<=1000;j++)
{
num2=j*j;
for(int k=0;k<=1000;k++)
{
num1=k*k;
if(i+j+k==1000 && num1+num2==num3)
{
cout<<i*j*k<<endl;
break;
}
}
}
}
return 0;
}
