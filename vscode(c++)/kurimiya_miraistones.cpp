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
    ll n;
    cin >> n;
    vector<ll> v(n), ps(n), sps(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ps[0] = v[0];
    for (ll i = 1; i < n; i++) {
        ps[i] = ps[i-1] + v[i];
    }
    sort(v.begin(), v.end());
    sps[0] = v[0];
    for (ll i = 1; i < n; i++) {
        sps[i] = sps[i-1] + v[i];
    }
    ll a;
    cin >> a;
    while (a--) {
        ll b, c, d;
        cin >> b >> c >> d;
        if (b == 1) {
            if (c == 1) {
                cout << ps[d-1] << yo;
            } else {
                cout << ps[d-1] - ps[c-2] << yo;
            }
        } else {
            if (c == 1) {
                cout << sps[d-1] << yo;
            } else {
                cout << sps[d-1] - sps[c-2] << yo;
            }
        }
    }
}
