#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    int add=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        add+=x;   
    }
    cout<<add-1<<endl;
}