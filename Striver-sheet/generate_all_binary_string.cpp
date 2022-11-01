//Generate all binary strings without consecutive 1’s
//Given an integer K. Task is Print All binary string of size K (Given number).
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void helper(string s,int n)
{
    if(n==0)
    {
     cout<<s<<endl;
     return ;
    }
     helper(s+'0',n-1);
    // s=s.substr(0,s.size()-1);
     if(s[s.length()-1]!='1')
     {
       helper(s+'1',n-1);
     }
}
int main()
{
    int n;
    cin>>n;
    string s;
    helper(s,n);
}