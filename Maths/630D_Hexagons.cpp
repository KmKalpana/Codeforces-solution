#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    //long long s=1;
    /*for(int i=1; i<=n; i++)
    {
        s+=i*6;
    }*/
    long long s= 1+((6+6*n)*n)/2;
    // 6(1+2+3-----n)+1 => (n*(n+1))/2 => sum of consecutive number.
    cout<<s<<endl;
}