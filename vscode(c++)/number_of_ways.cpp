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
    ll n, sum = 0, ans = 0;
    cin >> n;

    vector<ll> v(n), a(n); 
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if (sum % 3 != 0) {
        cout << 0 << yo;
        return 0;
    }

    sum /= 3;
    for (ll i = n - 1, s = 0; i >= 0; i--) {
        s += v[i];
        a[i] = (s == sum);
    }

    for (ll i = n - 2; i >= 0; i--) {
        a[i] += a[i + 1];
    }

    for (ll i = 0, s = 0; i + 2 < n; i++) {
        s += v[i];
        if (s == sum) ans += a[i + 2];
    }

    cout << ans << yo;
}
