#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2]>>n;
         sort(a,a+3);
        n=n-(a[2]-a[0]);
        n=n-(a[2]-a[1]);
        if(n>=0 && n%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}