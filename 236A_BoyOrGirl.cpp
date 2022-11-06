#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a="CHAT WITH HER!";
    string b="IGNORE HIM!";
    unordered_map<char,int>mp;
    for(int i=0; i<s.size(); i++)
       mp[s[i]]++;
    if(mp.size()==s.size()-1)
      cout<<a<<endl;
      else
      cout<<b<<endl;
}
