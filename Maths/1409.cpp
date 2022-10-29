//A. Yet Another Two Integers Problem
#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<(abs(a-b)+9)/10<<endl;
       /* int counter=0;
        if(a>b)
        {
           counter=(a-b)/10;
           if(a%10==0)
           {
            cout<<counter<<endl;
           }
           else
           cout<<counter+1<<endl;
        }
        else if(a<b)
        {
            counter=(b-a)/10;
            if(a%10==0)
           {
            cout<<counter<<endl;
           }
           else
           cout<<counter+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        */
    }
}