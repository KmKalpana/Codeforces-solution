//https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    int maxi_value=0, mini_value=110;
    int maxi=0, mini=0;
    for(int i=1; i<n+1; i++)
    {
        if(arr[i]>maxi_value)
        {
            maxi=i;
            maxi_value=arr[i];
        }
         if(arr[i]<=mini_value)
        {
            mini=i;
            mini_value=arr[i];
        }
    }
    if(maxi>mini)
    {
        cout<<(maxi-1)+(n-mini)-1<<endl;
    }
    else
    {
        cout<<(maxi-1)+(n-mini)<<endl;
    }
}