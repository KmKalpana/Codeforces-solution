#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<vector<string>>v(3,vector<string>(n,""));
    unordered_map<string,int>mp;
    for(int i=0; i<3; i++)
    {
        
           for(int j=0; j<n; j++)
           {
                string s;
               cin>>s;
                mp[s]++;
               v[i][j]=s;
           }
    }
    int cost=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
               if(mp[v[i][j]]==1)
               {
                cost+=3;
               }
               else if(mp[v[i][j]]==2)
               {
                cost+=1;
               }
               else
               {
                cost+=0;
               }
        }
        cout<<cost<<" ";
        cost=0;
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