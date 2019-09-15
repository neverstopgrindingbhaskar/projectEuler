#include<iostream>
using namespace std;
int main()
{
int n=1000;
long long unsigned int sum=0;
for(int i=0;i<n;i++)
{
if(i%3==0||i%5==0)
sum+=i;
}
cout<<sum<<endl;
return 0;
}
