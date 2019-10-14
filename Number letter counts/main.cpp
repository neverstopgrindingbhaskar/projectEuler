#include<bits/stdc++.h>
using namespace std;
int main()
{
int  count=0;
string ones[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string ten[12]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string rand[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string num;
for(int i=1;i<=1000;i++)
{
num=to_string(i);
if(num.size()==4)
{
count+=ones[num[0]-48].size();
cout<<ones[num[0]-48]<<" thousand";
count+=8;
if(num[1]=='0' && num[2]=='0' && num[3]=='0');
else if(num[1]=='0' && num[2]=='0')
{
count+=3;
cout<<ones[num[3]-48]<<endl;
}
else if(num[1]=='0')
cout<<ten[num[2]-48]<<" "<<ones[num[3]-48]<<endl;
else
{
cout<<ones[num[1]-48]<<" and ";
if(num[2]=='0')
cout<<ones[num[3]-48]<<endl;
else if(num[2]=='1')
cout<<rand[num[2]-48]<<endl;
else
cout<<ten[num[2]-50]<<" "<<ones[num[3]-48]<<endl;
}
}
else if(num.size()==3)
{
count+=ones[num[0]-48].size();
cout<<ones[num[0]-48];
cout<<" hundred";
count+=7;
if(num[1]=='1' && num[2]=='1')
{
cout<<" and ";
cout<<"eleven"<<endl;
count+=3;
count+=6;
}
else if(num[1]=='0' && num[2]=='0')
cout<<endl;
else if(num[1]=='0')
{
count+=3,count+=ones[num[2]-48].size();
cout<<" and ";
cout<<ones[num[2]-48]<<endl;
}
else if(num[1]=='1' && num[2]=='0')
{
count+=3;
count+=rand[0].size();
cout<<" and ";
cout<<rand[0]<<endl;
}
else if(num[2]=='0' && num[1]!=0)
{
cout<<" and ";
count+=3;
cout<<ten[num[1]-50]<<endl;
count+=ten[num[1]-50].size();
}
else if(num[1]!='0' && num[2]!='0')
{
if(num[1]!='1')
{
int index=num[1]-50;
cout<<"and"<<ten[index]<<" "<<ones[num[2]-48]<<endl;
count+=3,count+=ten[index].size(),count+=ones[num[2]-48].size();
}
else
{
cout<<" and ";
cout<<rand[num[2]-48]<<endl;
count+=3,count+=rand[num[2]-48].size();
}
}
else if(num[1]!='0' && num[2]=='0')
{
int index=num[1]-50;
count+=3,count+=ten[index].size();
cout<<ten[index]<<" ";
}
}
else if(num.size()==2)
{
if(num[0]=='1')
{
count+=rand[num[1]-48].size();
cout<<rand[num[1]-48]<<" ";
}
else if(num[1]=='0')
{
cout<<ten[num[0]-'2']<<endl;
count+=ten[num[0]-'2'].size();
}
else
{
int index=num[0]-50;
count+=ten[index].size(),count+=ones[num[1]-48].size();
cout<<ten[index]<<" "<<ones[num[1]-48]<<endl;
}
}
else
{
count+=ones[num[0]-48].size();
cout<<ones[num[0]-48]<<endl;
}
cout<<num<<" "<<count<<endl;
}
cout<<count<<endl;
return 0;
}

