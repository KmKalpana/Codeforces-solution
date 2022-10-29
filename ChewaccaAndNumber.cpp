/*
//https://codeforces.com/contest/514/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //27=22 9-7=2
    //4545=4444
    int count=0;
    int num=0;
    vector<int>arr;
    if(n==9)
    {
      cout<<n<<endl;
    }
    else
    {
    while(n>0)
    {
        int r=n%10;
        if(n<10 && n==9)
        {
            arr.push_back(r);
        }
        else if(r>4)
        {
         num=(9-r);
         arr.push_back(num);
        }
        else
        {
            arr.push_back(r);
        }
        n=n/10;
    }
    num=0;
    for(int it=arr.size()-1; it>=0; it--)
    {
        if(arr[it]==0)
            num=num*10;
        else
           num=num*10+arr[it];
    }
    cout<<num<<endl;
    }
   //420062703497
   //my output: 2142413342
   //expected: 420032203402
}
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>'4')
        {
            int n=s[i]-'0';
            int m=9-n;
            s[i]= (m+'0'); 
        }
    }
    if(s[0]=='0')
    {
        s[0]='9';
    }
    cout<<s<<endl;
}