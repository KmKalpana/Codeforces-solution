/**
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Input: n = 1
Output: ["()"]
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void helper(string st,int open, int close)
{
    if(open==0 && close==0)
     {
        cout<<st<<" ";
        return ;
     }
     if(open>0)
     {
        helper(st+"(",open-1,close);
     }
     
         if(open<close)
            helper(st+=')',open,close-1);

}
int main()
{
    int n;
    cin>>n;
    helper("",n,n);
}