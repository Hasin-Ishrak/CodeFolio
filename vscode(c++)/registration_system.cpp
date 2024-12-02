#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
   fast;
   ll t;
   cin>>t;
   map<string,int>ans;
   string s;

   while(t--)
   {
     cin>>s;
     if(ans.count(s)==0)
     {
        cout<<"OK"<<yo;
        ans[s]=1;
     }
     else{
        cout<<s<<ans[s]<<yo;
        ans[s]++;
     }
   }
}