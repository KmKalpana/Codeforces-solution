//Non Coprime Partition
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=2)
     cout<<"No"<<endl;
     else
     {
        cout<<"Yes"<<endl;
       /* cout<<1<<" "<<n<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n-1; i++)
          cout<<i<<" ";
        cout<<endl;
        */
        //Second Method
        int k=n%2==0?n/2:((n+1)/2);
        cout<<1<<" "<<k<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n; i++)
        {
            if(i==k)
             continue;
             cout<<i<<" ";
        }
        cout<<endl;
     }
}