#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n=1024;
long long unsigned int sum=0;
int rem;
int count=0;
while(n>0)
{
rem=n%2;
sum+=rem*pow(10,count);
n=n/2;
count++;
}
cout<<sum<<endl;
return 0;
}
