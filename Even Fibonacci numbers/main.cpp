//4,000,000
#include<iostream>
using namespace std;
int main()
{
long long unsigned int n=4000000;
long long unsigned int t1,t2,t3;
t1=1;
t2=1;
t3=0;
long long unsigned int sum=0;
while(t3<n)
{
t3=t1+t2;
t1=t2;
t2=t3;
if(t3%2==0)
{
sum+=t3;
}
}
cout<<endl;
cout<<sum<<endl;

return 0;
}
