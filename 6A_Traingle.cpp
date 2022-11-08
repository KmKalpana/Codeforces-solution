#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
//4 2 1 3 ==> Traingle
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    //Non Degenerate Traingle. >>a,b,c     >>a,b,d      >>b,c,d        >>a,c,d
    if((a< b+c && b< a+c && c< a+b) || (a< b+d && b< a+d && d< a+b) || (b<c+d and c<b+d and d<b+c) || (a<c+d and c<a+d and d<a+c))
    cout<<"TRIANGLE"<<endl;
    //Degenerate Traingle. >>a,b,c     >>a,b,d      >>b,c,d        >>a,c,d
    else if((a== b+c or b== a+c or c== a+b) || (a== b+d or b== a+d or d< a+b) || (b== c+d or c== b+d or d== b+c) || (a== c+d or c== a+d or d== a+c))
    cout<<"SEGMENT"<<endl;
    else
    cout<<"IMPOSSIBLE"<<endl;
}