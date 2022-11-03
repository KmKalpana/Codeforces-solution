#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    //vector<vector<int>>arr(n,vector<int>(2,0));
    int sa=0, sg=0;
    string ans;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(abs(sa+x-sg)<=500)
        {
            sa+=x;
            ans+='A';
        }
        else
        {
            sg+=y;
            ans+='G';
        }
    }
    cout<<ans<<endl;

}