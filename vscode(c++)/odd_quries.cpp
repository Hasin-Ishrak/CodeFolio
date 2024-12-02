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

int main() {
    fast;
    prb;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n), pf(n + 1, 0);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            pf[i + 1] = pf[i] + v[i]; 
        }

        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;

            ll sm = pf[l - 1] + (pf[n] - pf[r]);
            ll total = sm + ((r - l + 1) * k);  

            if (total % 2 != 0) cout << "YES" << el;
            else cout << "NO" << el;
        }
    }
}
