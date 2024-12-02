#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll a,b;
    cin>>a>>b;
    ll k,m;
    cin>>k>>m;
    vector<ll>w(a);
    vector<ll>v(b);
    for(ll i=0;i<a;i++)
    {
        cin>>w[i];
    }
    for(ll i=0;i<b;i++)
    {
        cin>>v[i];
    }
    ll c = w[k-1];
    ll d = v[v.size() - m];
    if(c < d)
    {
        cout<<"YES"<<yo;
    }
    else
    {
        cout<<"NO"<<yo;
    }
}
