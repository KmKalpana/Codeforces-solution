#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n, m;   //n=row , m=col
    while(t--)
    {
        cin>>n>>m;
       cout<<(n*m+1) / 2<<endl;
    }
    return 0;
}
/* n=even m=even  ans=n*(m/2)
   n=even m=odd   ans=n*(m-1/2)
   n=odd m=odd    ans=
   n=odd m=even   ans=
   if(n%2==0 and m%2==0)
            cout<<(n*(m/2))<<endl;
        else if(n%2==0 and m%2==1)
            cout<<(n*((m-1)/2))+(n/2)<<endl;
        else if(n%2==1 and m%2==1)
           cout<<(n*((m-1)/2))+(n/2)<<endl;
         else
         cout<<(n*(m/2))<<endl;
*/