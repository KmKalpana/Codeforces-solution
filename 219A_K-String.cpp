#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size(),count=0;;
    /*   unordered_map<char,int>mp;
        for(int i=0; i<n; i++)
          mp[s[i]]++;
          for(auto it: mp)
           {
            if(mp[it.first]%k!=0)
               {
                    count++;
                    break;
               }
           }
           */ 
           char ch;
        for(int i=0;i<s.size();i++){
	    if(i%k==0){
	        cout<<i<<" "<<s[i]<<endl;
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	cout<<count<<endl;
    //if(n%k!=0 || count>0)
    if(n==count && count%k==0)
      cout<<-1<<endl;
      else
      {
         for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
      }
      cout<<endl;
}