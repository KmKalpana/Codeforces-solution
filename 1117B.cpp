//B. Emotes
#include <iostream>
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main()
{
      long long n, m, k;
    cin>>n>>m>>k;
    int y=0,z=0;   //y=first largest number, z=second largest number
    vector<long long int>arr(n,0);
    for(int i=0; i<n; i++)
    {
        long long int x;
       cin>>x;
       if(x>y)
       {
        z=y;
        y=x;
       }
       else if(x>z)
       {
        z=x;
       }
    }
     long long int times=m/(k+1);
     long long int cost=k*y+z;
     cost=cost*times;
     cost+=(m%(k+1)*y);
     cout<<cost<<endl; 
}