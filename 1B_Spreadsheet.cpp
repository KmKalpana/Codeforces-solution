#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n;
   cin>>n;
   string s;
   vector<string>v;
   while(n--)
   {
       cin>>s;
       v.push_back(s);
   }
   sort(v.begin(),v.end());
   for(int i=0; i<v.size(); i++)
   {
    cout<<v[i]<<endl;
   }
}