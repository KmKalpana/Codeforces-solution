#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// Input: s = "the sky is blue"
// Output: "blue is sky the"
int main()
{
   string s;
   cin>>s;
   int i=0;
   int j=0;
   int sz=s.size();
   while(i<sz)
   {
     while(i<sz && s[i]==' ') i++;
     if (i < sz && j > 0)
            s[j++] = ' ';
          int start = j;
          while (i < sz && s[i] != ' ')
                s[j++] = s[i++];
            reverse(s.begin()+start, s.begin()+j);
   }
   s.resize(j);
   reverse(s.begin(),s.end());
   cout<<s<<endl;
}