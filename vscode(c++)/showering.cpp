#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll n, s, m;
        cin >> n >> s >> m;
        bool ans = false;
        vector<pair<ll, ll>> v(n);

        for (ll i = 0; i < n; i++) {
            ll a, b;
            cin >> a >> b;
            v[i] = {a, b};
        }
        if (v[0].first >= s) {
            ans = true;
        }
        for (ll i = 0; i < n - 1; i++) {
            if (v[i + 1].first - v[i].second >= s) {
                ans = true;
                break;
            }
        }

        if (m - v[n - 1].second >= s) {
            ans = true;
        }

        if (ans) cout << "YES" << yo;
        else cout << "NO" << yo;
    }
}
