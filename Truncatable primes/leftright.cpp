#include<iostream>
#include<cmath>
using namespace std;
void left(int num)
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
cout<<temp<<endl;
power=power/10;
num=temp;
}
}
void right(int num)
{
int count=0;
int aux=num;
while(aux>0)
{
cout<<aux<<endl;
aux=aux/10;
}
}
int main()
{
int n=3797;
left(n);
right(n);
return 0;
}
