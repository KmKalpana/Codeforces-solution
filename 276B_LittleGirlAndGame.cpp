#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, n = s.length();
    unordered_map<char, int> mp;
    int odd = 0;
    for (auto it : s)
        mp[it]++;
    for (auto it : mp)
    {
        odd += it.second % 2;
    }
    if (odd == 0 or odd & 1)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}
