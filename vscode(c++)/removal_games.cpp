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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        c = b;
        reverse(c.begin(), c.end());
        bool ans = (a == b || a == c);

        if (ans) {
            cout << "Bob" << yo;
        } else {
            cout << "Alice" << yo;
        }
    }
}
