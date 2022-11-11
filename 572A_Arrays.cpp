#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int na,nb;
    cin>>na>>nb;
    int k,m;
    cin>>k>>m;
    int a=nb-1;
    vector<int>v1(na,0),v2(nb,0);
    for(int i=0; i<na; i++)
        cin>>v1[i];
    for(int j=0; j<nb; j++)
        cin>>v2[j];
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
     int count=0;
     for(int i=0; i<m; i++)
     {
            if(v2[a]<=v1[k-1])
               {
                count=1;
                break;
               }
         --a;
     }
     cout<<(count==0?"YES":"NO")<<endl;
}