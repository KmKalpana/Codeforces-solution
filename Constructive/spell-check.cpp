#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int main()
{
    string name = "Timur";
    sort(name.begin(), name.end());
      int n;
      cin>>n;
      forn(i, n)
      {
          int t;
          cin>>t;
          string s;
          cin>>s;
          sort(s.begin(),s.end());
           cout << (s == name ? "YES" : "NO") << endl;
      }
}
