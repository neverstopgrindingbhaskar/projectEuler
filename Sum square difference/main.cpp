#include<iostream>
using namespace std;
int main()
{
long long unsigned int sum=0,sumSQ=0;
for(int i=0;i<=100;i++)
{
sum+=i;
sumSQ+=i*i;
}
sum=sum*sum;
cout<<sum-sumSQ<<endl;
return 0;
}
