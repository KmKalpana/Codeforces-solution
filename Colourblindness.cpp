#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define forn(i, t) for (int i = 0; i < int(t); i++)
int main()
{
    int t;
    cin>>t;
    forn(i,t)
    {
        int n;
        cin>>n;
        string s,c;
        cin>>s>>c;
        int a=0;
        for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			if (c[i] != 'R')
             {
            cout << "NO\n";
            a=1;
             break;}
		}
		else {
			if (c[i] == 'R') 
            {
                a=1;
            cout << "NO\n";  
            break;
            }
		}
	}
        if(a==0)
         cout<<"YES"<<endl;
    }
}