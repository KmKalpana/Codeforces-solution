#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define long long int ll;
int main()
{
    string s;
    cin>>s;
    //1=11 23=2332 45=4554 123=12321
    int l = s.length();
   
        for(int i=l-1; i>=0; i--)
          s+=s[i];
    cout<<s<<endl;
}