//A. Domino piling
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int l=n/2;
    int b= l*m;
    int a=0;
     if(n%2==1)
     {
         a=m/2;
     }
     cout<<b+a<<endl;
}