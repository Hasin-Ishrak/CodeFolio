#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

ll Round(ll x, ll k) {
    return (x + k - 1) / k; 
}

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, ev = 0, ans = LLONG_MAX;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) ev++;
        }
        for (ll i = 0; i < n; i++) {
            ans = min(ans, Round(v[i], k) * k - v[i]);
        }
        if (k == 4) {
            if (ev >= 2) ans = 0;
            else if (ev == 1) ans = min(1LL, ans); 
            else ans = min(2LL, ans); 
        }
        cout << ans << yo;
    }
}
