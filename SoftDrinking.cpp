#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    //n=no of  friends, k=no of Bottles, l=drink in milileters
    int t=(k*l)/(n*nl);
     c=(c*d)/n;
     int s=p/(np*n);
     cout<<min(t,min(c,s))<<endl;
    return 0;
    // 3 4 5 10 8 100 3 1
    // 5 100 10 1 19 90 4 3
    // 10 1000 1000 25 23 1 50 1
    //1 4 5 5 3 10 3 1
    // 4*5=20, 5*3=15, 10/1=10
}