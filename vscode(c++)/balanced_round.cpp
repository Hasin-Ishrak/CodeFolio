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
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans =1,c=1;
        for(ll i=1;i<n;i++)
        {
            if(v[i]-v[i-1]>k)
            {
                c=1;
            }
            else{
                c++;
            }
             ans = max(ans,c);
        }
        
        cout<<n-ans<<yo;
    }
}