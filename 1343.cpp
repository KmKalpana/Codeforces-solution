//B. Balanced Array
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=n/2;
        int counter=0;
        if(k%2==0)
        {
          cout<<"YES"<<endl;
          int o=0,e=0;
          int i=1, j=1;
          for(i=1; i<=n/2; i++)
          {
              e+=i*2;
              cout<<i*2<<" ";
          }
          for(j=j; j<n/2; j++)
          {
              o+=j*2-1;
              cout<<j*2-1<<" ";
          }
           cout<<e-o<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}