#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
   fast;
   ll n,k;
   cin>>n>>k;
   vector<ll>v(n);
   vector<ll>m(n);
   for(ll i =0;i<n;i++)
   {
    cin>>v[i];
   } 
   for(ll i =0;i<n;i++)
   {
    cin>>m[i];
   }
   sort(m.begin(),m.end());
   set<ll>dn;
   for(auto nm : v)
   {
    dn.insert(nm);
   }
   ll ans=0,l=dn.size();
   for(ll i=0;i<(n-l);i++)
   {
    ans+=m[i];
   }
   cout<<ans<<yo;

}