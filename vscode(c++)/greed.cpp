#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
   fast;
   ll n,sum=0;
   cin>>n;
   vector<ll>v(n);
   vector<ll>m(n);
   for(ll i =0;i<n;i++)
   {
    cin>>v[i];
    sum+=v[i];
   }
   for(ll i =0;i<n;i++)
   {
    cin>>m[i];
   }
   sort(m.begin(),m.end());
   ll ans = m[n-1]+m[n-2];
   if(ans>=sum)
   {
    cout<<"YES"<<yo;
   }
   else{
    cout<<"NO"<<yo;
   }
}