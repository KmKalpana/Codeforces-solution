// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void generate(vector<int>&v, int i, int n,vector<int>sub)
{
    if(i==n)
    {
        for(auto it: sub)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    //include
    int element=v[i];
    sub.push_back(element);
    generate(v,i+1,n,sub);
    sub.pop_back();
    //exclude
    generate(v,i+1,n,sub);
       
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n; i++)
    cin>>v[i];
    vector<int>sub;
    generate(v,0,v.size(),sub);
}