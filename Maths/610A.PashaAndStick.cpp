#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==1)
     cout<<0<<endl;
  else
  {
    long long int l=n/2;
    if(l&1==1)
    {
        cout<<l/2<<endl;
    }
    else
    cout<<l/2-1<<endl;
  }
}