#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t;
    int i=n-1; 
    while(i>=0)
    {
        if(s[i]!='0')
        {
            char c= 'a'+ (s[i]-'0')-1;
            t.push_back(c);
            i--;
        }
       else
        {
            int num=(s[i-2]-'0') *10;
             num=num+(s[i-1]-'0');
             char c='a'+num-1;
             t.push_back(c);
             i-=3;
        }
    }
    reverse(t.begin(),t.end());
    cout<<t<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}