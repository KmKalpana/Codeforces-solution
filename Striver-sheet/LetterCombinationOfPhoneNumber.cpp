 // Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void helper(int ind, int n, string s, string mp[], string print)
{
  if(print.size()==s.size())
  {
    cout<<print<<" ";
    return ;
  }
   int num=s[ind]-'0';
  string value=mp[num];
  for(int i=0; i<mp[num].size(); i++)
  {
    print.push_back(value[i]);
    helper(ind+1,n,s,mp,print);
    print.pop_back();
  }
}
int main()
{
    string s;
    cin>>s;
    string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    helper(0,s.size(),s,mp,"");
}