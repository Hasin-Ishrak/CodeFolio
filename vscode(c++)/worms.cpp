#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

int main() {
    fast;
    prb;
    ll n ;
    cin >> n ;
    vector<ll>v(n),psum(n);
    for(ll i=0;i<n;i++)
    {
        cin >> v[i];
    }
    psum[0]=v[0];
    for(ll i=1 ;i<n;i++)
    {
        psum[i]=psum[i-1]+v[i];
    }
    ll a ;
    cin >> a ;
    while(a--)
    {
        ll b ;
        cin >> b ;
        auto it = lower_bound(psum.begin(),psum.end(),b);
        
        cout << (it - psum.begin()) +1 <<yo;
    }
}