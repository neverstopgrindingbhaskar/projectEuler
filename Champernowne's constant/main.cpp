#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
for(int i=1;i<1000001;i++)
str+=to_string(i);
long long unsigned int ans;
cout<<str[0]<<" "<<str[9]<<" "<<str[99]<<" "<<str[999]<<" "<<str[9999]<<" "<<str[99999]<<" "<<str[999999]<<endl;
ans=(str[0]-'0')*(str[9]-'0')*(str[99]-'0')*(str[999]-'0')*(str[9999]-'0')*(str[99999]-'0')*(str[999999]-'0');
cout<<ans<<endl;
return 0;
}
