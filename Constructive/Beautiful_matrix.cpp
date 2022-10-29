#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    vector<vector<int>>arr(5,vector<int>(5,0));
    int ans=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
             row=i+1, col=j+1;
            }
        }
    }
    if(row<3)
    {
       ans=3-row;
         if(col<3)
        ans+=(3-col);
        else if(col>3)
        ans+=(col-3);
       cout<<ans<<endl;
    }
    else if(row>3)
    {
       ans=row-3;
       if(col<3)
        ans+=(3-col);
        else if(col>3)
        ans+=(col-3);
       cout<<ans<<endl;
    }
    else if(row==3)
    {
        if(col<3)
        ans=(3-col);
        else if(col>3)
        ans=(col-3);
       cout<<ans<<endl;
    }
    return 0;
}