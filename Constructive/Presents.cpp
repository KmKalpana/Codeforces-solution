//https://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  unordered_map<int,int>mp;
  vector<int>arr(n+1,0);
  for(int i=1; i<=n; i++)
  {
      cin>>arr[i];
      mp[arr[i]]=i;
  }
   for(int i=1; i<=n; i++)
   {
    arr[i]=mp[i];
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}