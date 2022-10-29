#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a, b;
    while(t--)
    {
        cin>>a>>b;
        int x=a;
        int y=2*x;
        if(y<=b)
        {
            cout<<x<<" "<<y<<endl;
        }
        else
         cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}