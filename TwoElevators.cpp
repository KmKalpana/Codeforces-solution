#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    int temp=abs(b-c)+c;
    if(temp>a)
    cout<<1<<endl;
    else if(a>temp)
    cout<<2<<endl;
    else
    cout<<3<<endl;
   
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}