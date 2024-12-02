#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'

int main() {
    fast;
    prb;
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);

    for (auto& i: v) cin >> i;
    sort(v.rbegin(), v.rend()); 
    
    vector<ll> prefix_sum(n + 1, 0);
    for (ll i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }

    while (q--) {
        ll x, y;
        cin >> x >> y;
        ll sum = prefix_sum[x] - prefix_sum[x - y];
        
        cout << sum << yo;
    }
}
