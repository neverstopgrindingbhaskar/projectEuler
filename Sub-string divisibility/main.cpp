#include<bits/stdc++.h>
using namespace std;
void findNum(string str)
{
string aux;
for(int i=1;i<=3;i++)
aux+=str[i];
int num1=stoi(aux);
aux="";
if(num1%2==0)
{
for(int i=2;i<=4;i++)
aux+=str[i];
int num2=stoi(aux);
aux="";
if(num2%3==0)
{
for(int i=3;i<=5;i++)
aux+=str[i];
int num3=stoi(aux);
aux="";
if(num3%5==0)
{
for(int i=4;i<=6;i++)
aux+=str[i];
int num4=stoi(aux);
aux="";
if(num4%7==0)
{
for(int i=5;i<=7;i++)
aux+=str[i];
int num5=stoi(aux);
aux="";
if(num5%11==0)
{
for(int i=6;i<=8;i++)
aux+=str[i];
int num6=stoi(aux);
aux="";
if(num6%13==0)
{
for(int i=7;i<=9;i++)
aux+=str[i];
int num7=stoi(aux);
if(num7%17==0)
cout<<str<<endl;
}
}
}
}
}
}
}
void findAns(string str,string aux)
{
if(aux.empty())
findNum(str);
else
{
for(int i=0;i<aux.size();i++)
{
char c=aux[i];
str+=c;
aux.erase(aux.begin()+i);
findAns(str,aux);
aux.insert(i,1,c);
str.pop_back();
}
}
}
int main()
{
string str;
string aux="0123456789";
findAns(str,aux);
return 0;
}
