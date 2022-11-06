//solved
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int n, m;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    
    if(n>=m)
    {
        string s(n+m,'B');
        for(int i=1; i<m*2; i+=2)
        {
            s[i]='G';
        }
        cout<<s<<endl;
    }
    else
    {
        string s(n+m,'G');
        for(int i=1; i<n*2; i+=2)
        {
            s[i]='B';
        }
        cout<<s<<endl;
    }
}