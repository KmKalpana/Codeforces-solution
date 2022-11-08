#include <iostream>
using namespace std;
long long fun(long long a)
{
    long long minres=100, maxres=-1;
    while(a>0)
    {
        long long d=a%10;
        minres=min(minres,d);
        maxres=max(maxres,d);
        a/=10;
    }
    return minres*maxres;
}
int main()
{
    long long t, a, k;
    cin>>t;
    while(t--)
    {
        cin>>a>>k;
        while(--k)
        {
            long long nxt=a+fun(a);
            if(a==nxt)break;
             a=nxt;
        }
        cout<<a<<endl;
    }
}