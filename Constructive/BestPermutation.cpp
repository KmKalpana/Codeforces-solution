#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>p(n);
     iota(p.begin(),p.end(),1);
    for(int i=n&1; i<n-2; i+=2)
    {
       swap(p[i],p[i+1]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}