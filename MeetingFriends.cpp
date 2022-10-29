//https://codeforces.com/problemset/problem/723/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>f(3,0);
    cin>>f[0]>>f[1]>>f[2];
    sort(f.begin(),f.end());
    int ans=0;
    ans= (f[1]-f[0])+(f[2]-f[1]);
    cout<<ans<<endl;
    return 0;
}