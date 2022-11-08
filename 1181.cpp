#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long int x,y,z;
    cin>>x>>y>>z;
    long long int a=(x+y)/z;
    cout<<a<<" ";
    long long int b=x/z+y/z;
    long long int n=z-x%z;
    long long int m=z-y%z;
    if(a>b)
    cout<<min(n,m)<<endl;
    else
    cout<<0<<endl;
    return 0;

}