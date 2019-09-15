#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long unsigned int n=600851475143;
int max=0;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
cout<<i<<endl;
}
}
cout<<max<<endl;
return 0;
}
