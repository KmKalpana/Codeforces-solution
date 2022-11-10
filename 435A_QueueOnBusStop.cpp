#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
//     6 4
// 1 3 2 3 4 1
    int sum=0;
    int a=0,ans=0, rem=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(rem==INT_MAX)
        {
           rem=m-x;
           ans++;   
        }
         else if(rem-x>=0 and rem-x<=m)
          {
              rem=rem-x;
          }
        else if(rem==0)
        {
            rem=m-x;
            ans++;
        }
        else if(rem-x<0)
        {
            ans++;
            rem=m-x;
        }
    }
    cout<<ans<<endl;
}