#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n; 
while(n-->0)
{
    int m;
    cin>>m;
    int a[m], b[m];
    for(int i=0; i<m; i++)
    {
       cin>>a[i];
    }
    b[0]=a[0];
    int last=m;
    int first=1;
    int i=1;
    while(i<m)
    {
      if(i%2!=0)
      {
          b[i]=a[last-1];
          last--;
      }   
      else
      {
          b[i]=a[first++];
      }
      i++;
    }
    for(int j=0; j<m; j++){
        cout<<b[j]<<" ";
    }
}
}