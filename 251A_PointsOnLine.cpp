// Not Completed
/* 4 3
// 1 2 3 4
// ans:4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int count=0;
     vector<int>arr(n,0);
    for(int i=0; i<n; i++)
    {
         cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++)
    {
      if(i>1)
         {
            int diff=arr[i-1]-arr[i-2];
             diff+=arr[i]-arr[i-1];
             if(diff<=d)
              count++;
         }
    }
    int i=0;
    while(i<n)
    {
     int mid=(i+n)/2;
     
    }
    cout<<count<<endl;
}*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;

int main() {
    ll n, elm, d, res, rng;
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    res = 0;
    for (int i = 0; i + 2 < n; ++i) {
        rng = lower_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        cout<<rng<<" ";
        if (v[i] + d != v[rng])
            --rng;
        rng -= i;
        if (rng >= 2) {
            res = res + (rng * (rng - 1) / 2);
        }
    }
    cout << res << endl;
    return 0;
}