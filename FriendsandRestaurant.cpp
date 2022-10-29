#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve()
{
    int n;
    cin>>n; 
    vector<ll>x(n),y(n);
     for(auto &i: x)
        cin>>i;
     for(auto &j: y)
        cin>>j;
    vector<ll>diff(n);
    for(int i=0; i<n; i++)
    {
        diff[i]=y[i]-x[i];
    }
    sort(diff.begin(),diff.end());
    int j=n-1, i=0;
    int count=0;
     while(i<j)
     {
        int sum=diff[i]+diff[j];
        if(sum<0)
         i++;
         else 
          count++, i++, j--;
     }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}