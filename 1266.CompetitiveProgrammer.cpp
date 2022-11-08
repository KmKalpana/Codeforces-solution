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
         string x ;
        cin>>x;
         int sum=0;
         int b=0,c=0;
        for(int i=0; i<x.length(); i++)
        {
            int y=x[i]-'0';
            if (y%2==0)
            {
                c+=1;
            }
            if(x[i]=='0')
            {
                b+=1;
            }
            else
            {
                sum+=(x[i]-'0');
            }
        }
         if(sum%3==0 && b>=1 && c>=2)
          cout<<"red"<<endl;
          else
          cout<<"cyan"<<endl;
    }
    return 0;

}