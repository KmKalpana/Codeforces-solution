#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     if(n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0 || n%447==0 || n%477==0)
        cout<<"YES"<<endl;
     else
      {
      int count=0, r=0;
      while(n>0)
      {
              r=n%10;
            if(r!=4 && r!=7)
            {
             //cout<<r<<" ";
             count=1;
             break;
            }
            n=n/10;
      }
        if(count==0)  
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
     return 0;
}