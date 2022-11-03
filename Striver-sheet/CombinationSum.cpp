// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.
#include <bits/stdc++.h>
using namespace std;
void helper(vector<int>&arr,int index,int target,vector<int>&temp)
{
    if(index>=arr.size() || target<0)
     return;
    if(target==0)
    {
     for(int i=0; i<temp.size(); i++)
     {
        cout<<temp[i]<<" ";
     }
     cout<<endl;
     return;
    }
        //include
        temp.push_back(arr[index]);
        helper(arr,index,target-arr[index],temp);
        temp.pop_back();
     //exclude
    helper(arr,index+1,target,temp);

    
}
int main()
{
    int n,target; 
    cin>>n>>target; 
    vector<int>arr(n,0);
    for(int i=0; i<n; i++)
      cin>>arr[i];
    vector<int>temp;
    helper(arr,0,target,temp);
}