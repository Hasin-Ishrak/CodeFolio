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
    ll t;
    cin >> t;
    while (t--) {
        ll n, ev = 0, od = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) ev++;
            else od++;
        }
    }
}
