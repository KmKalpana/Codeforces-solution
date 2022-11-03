#include <iostream>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    if(y>=n) cout<<-1<<endl;
    else
        
        {
             int rem=y%k;
             int x=k-rem;
             if(x+y<=n)
             {
             cout<<x<<" ";
             }
             else
             {
                cout<<-1<<endl;
                exit ;
             }
             int d=(x+y)/k;
             d+=1;
             while((x+y)<=n)
             {
                  x=(k*d)-y;
                  if(x+y<=n)
                  cout<<x<<" ";
                  d+=1;
             }   
        }
    cout<<endl;
}