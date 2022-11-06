#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
     int c1=0,c2=0,c3=0;
    string x1="chest", x2="biceps", x3="back";
    int s1=0, s2=0,s3=0;
    int temp;
    for(int i=1; i<=n; i++)
    {
          cin>>temp;
         if(c1==0)
         {
            s1+=temp;
            c1=1;
         }
         else if(c2==0)
         {
            s2+=temp;
            c2=1;
         }
         else if(c3==0)
         {
            s3+=temp;
            c2=0;
             c1=0;
         }
    }
    if(s1>s2 && s1>s3)
      cout<<x1<<endl;
      else if(s2>s1 && s2>s3)
       cout<<x2<<endl;
       else 
       cout<<x3<<endl;
}