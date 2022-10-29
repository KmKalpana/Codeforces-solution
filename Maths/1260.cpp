//Heating
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     int n;
    cin>>n;
    while(n--)
    {
         long long x, y ;
         cin>>x;
         int sum=0;
         int b=0;
         while(x>0)
         {
           int r=x%10;
           sum+=r;
           if(r==0)
            b=1;
            x=x/10;
         }
         if(sum%3==0 && b==1)
          cout<<"red"<<endl;
          else
          cout<<"cyan"<<endl;
    }
    return 0;

}