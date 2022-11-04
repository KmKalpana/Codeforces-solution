#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Subsets2(int i, int n, vector<int>&v, vector<int>subset)
{
    if(i==n)
    {
        for(auto it: subset)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n; i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        vector<int>Subset;
    Subsets2(0,n,v,Subset);
}