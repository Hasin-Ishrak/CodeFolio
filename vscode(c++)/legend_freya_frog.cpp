#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
ll t;

ll sl(ll x,ll y,ll k) {
     ll d =(x %k ==0)? x /k :1+(x/k);
    ll e = (y % k == 0) ?y /k:1+(y/k);
    if (d>e)
     {
        return (d-e)-1+d+e;
    } else if (e > d)
     {
        return(e-d)+d+e;
    } else 
{
        return d+e;
    }
}
int main() {
    fast;
    prb;
    cin >> t;
    while (t--) {
        ll x, y, k, ans;
        cin >> x >> y >> k;
        ans = sl(x,y,k);
        cout << ans << el;
    }
}