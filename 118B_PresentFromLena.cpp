//incompleted
//Present from Lena
/**
   n=2
    0
  0 1 0
0 1 2 1 0
  0 1 0
    0
    n=5
    
          0
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0
          
          0 
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
   /*
    string s,t;
    //space problem
    for(char i='0'; i<=48+n; i++)
    {
        s+= i;
        s+=' ';
    }
    for(int i=0; i<=n; i++)
    {
        t+=' ';
        t+=' ';
    }
    for(int j=n-1; j>=0; j--)
    {
        s+= 48+j;
        s+=' ';
    }
    int j=n, k=0, m=0; 
   for(int i=1; i<=n+1; i++)
   {
    if(i==1)
    {
       cout<<t.substr(0,j*2)<<s.substr(0,i*2-1)<<" "<<s.substr(s.length()-k*2,k*2-2)<<endl;
    }
    else
    {
       cout<<t.substr(0,j*2)<<s.substr(0,i*2-1)<<" "<<s.substr(s.length()-k*2,k*2-1)<<endl;
    }
       k++ ,j--, m++;
   }
   j=1, k=n-1;
   int  l=n;
   for(int i=1; i<=n; i++)
   {
       cout<<t.substr(0,j*2)<<s.substr(0,l*2-1)<<" "<<s.substr(s.length()-k*2,k*2-1)<<endl;
       k-- ,j++, l--;
   }
   */
   for(int r= -n; r<=n; r++)
   {
      int t= n-abs(r);
      for(int i=0; i<abs(r); i++)
      {
          cout<<"  ";
      }
      for (int i = 0; i < t; ++i)
        {
            cout << i << " ";
        }
        for (int i = t; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
   }
}
