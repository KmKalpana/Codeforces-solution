#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
	long long int lb=0 , lc=0 , ls = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'B')lb++;
		else if (s[i] == 'C')lc++;
		else ls++;
	}
    long long int b, s, c;
    cin>>b>>s>>c;
    long long int pb, ps, pc;
    cin>>pb>>ps>>pc;
    long long int money;
    cin>>money;

    //incompleted
    
}