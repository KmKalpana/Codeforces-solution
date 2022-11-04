#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool wordbreak(int j, int n, set<string>sets, string s, vector<int>&dp)
{
  if(j==n)
    return true;
  if(dp[j]!=-1)
  return dp[j];
  string temp;
  for(int i=j; i<n; i++)
  {
      temp+=s[i];
      if(sets.find(temp)!=sets.end() && wordbreak(i+1,n,sets,s,dp))
        dp[i]=true;
  }
  return dp[j]=false;
}
int main()
{
    string st;
    cin>>st;
    vector<string>s(5);
    for(int i=0; i<5; i++)
      cin>>s[i];
    set<string>sets;
    for(int i=0; i<5; i++)
    {
        sets.insert(s[i]);
    }
       vector<int>dp(st.size(),-1);
    cout<<wordbreak(0,st.size(),sets,st,dp)<<endl;
}