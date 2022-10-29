#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<char>>arr(n,vector<char>(m,'#'));
      bool counter=true;
    for(int i=1; i<n; i+=2)
    {
        if(counter)
        {
            for(int j=0; j<m-1; j++)
            {
                arr[i][j]='.';
            }
            counter=!counter;
        }
        else{
             for(int j=1; j<m; j++)
            {
                arr[i][j]='.';
            }
            counter=!counter;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}