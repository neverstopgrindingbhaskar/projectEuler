#include<iostream>
using namespace std;

int main()
{
int count=0;
int num=10;
for(int i=100;i<=100000000000;i++)
{
if(i%20==0 && i%19==0 && i%18==0 && i%17==0 &&i%16==0 && i%15==0 && i%14==0 &&i%11==0 && i%13==0)
cout<<i<<endl;
}
return 0;
}
