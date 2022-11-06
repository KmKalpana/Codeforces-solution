#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Driver code
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll sum=0;
    vector<int>arr(n,0);
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    sum+=arr[i];
    }
    cout<<abs(sum)<<endl;
    }
	return 0;
}
