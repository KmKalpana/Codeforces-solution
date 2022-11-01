//2116. Check if a Parentheses String Can Be Valid
// Input: s = "))()))", locked = "010100"
// Output: true
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,locked;
    cin>>s>>locked;
    stack<char>st;
    int i=0;
    bool ans=false;
    while(i<s.size())
    {
       if(locked[i]=='0')
        st.push(s[i]);
        else if(locked[i]=='1')
        {
            if(!st.empty())
            {
                st.pop();
                ans=true;
            }
            else
              ans=false;
        }
        i++;
    }
    if(st.size()%2==0)
      cout<<true<<endl;
      else
      cout<<false<<endl;

}