//Dice Tower
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
         long long k, x ;
        cin>>k>>x;
        cout<<(k-1)*9+x<<endl;
    }
    return 0;

}