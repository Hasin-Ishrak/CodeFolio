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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> d(n + 1, 0);
    set<ll> seen;
    
    for (ll i = n - 1; i >= 0; i--) {
        seen.insert(v[i]);
        d[i + 1] = seen.size();
    }

    for (ll i = 0; i < m; i++) {
        ll a;
        cin >> a;
        cout << d[a] << yo;
    }
}
