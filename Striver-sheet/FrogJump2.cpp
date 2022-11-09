#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(int ind, int d, vector<int>&h,vector<int>&dp)
{
      if(ind==0) return 0;
      if(dp[ind]!=-1) return dp[ind];
      int mincost=INT_MAX;
      for(int j=1; j<=d; j++)
      {
        int mini;
        if(ind-j>=0)
           mini=helper(ind-j,d,h,dp)+abs(h[ind]-h[ind-j]);
           mincost=min(mini,mincost);
      } 
      return dp[ind]=mincost;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>h(n,-1);
    for(int i=0; i<n; i++)
      cin>>h[i];
    vector<int>dp(n,-1);
    cout<<helper(n-1,k,h,dp)<<endl;
}