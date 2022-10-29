//Buy a Shovel
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int k, r;
int main()
{
    cin>>k>>r;
   // cout<<p<<endl;
   int count=0;
    for(int i=1; i<=10; i++)
    {
        int p=k*i;
        if((p)%10==r || (p%10)==0)
        {
            cout<<i<<endl;
            return 0;
        }    
    }
}