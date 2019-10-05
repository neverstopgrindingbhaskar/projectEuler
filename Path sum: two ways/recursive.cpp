/*
131 673 234 103 18 
201 96  342 965 150
630 803 746 422 111
537 699 497 121 956
805 732 524 37 331 
*/
// works but for 80*80 it requires dp also very inefficient took me around 5 mins lol
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[81][81];
int findSum(vector<int>num)
{
int sum=arr[80][80];
for(int i=0;i<num.size();i++)
sum+=num[i];
return sum;
}
void findAns(int startrow,int startcol,vector<int> &chosen,vector<int>&ans)
{
if(startcol==80 && startrow==80)
{
int num=findSum(chosen);
ans.push_back(num);
}
if(startcol+1<=80)
{
chosen.push_back(arr[startrow][startcol]);
findAns(startrow,startcol+1,chosen,ans);
chosen.pop_back();
}
if(startrow+1<=80)
{
chosen.push_back(arr[startrow][startcol]);
findAns(startrow+1,startcol,chosen,ans);
chosen.pop_back();
}
}
int main()
{
for(int i=1;i<=80;i++)
{
for(int j=1;j<=80;j++)
{
cin>>arr[i][j];
}
}
vector <int>v1,ans;
int sum=0;
findAns(1,1,v1,ans);
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
return 0;
}
