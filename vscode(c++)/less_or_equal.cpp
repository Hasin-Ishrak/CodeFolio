#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll a;
    if (k == 0) {
        a = v[0] - 1;
        if (a < 1) {
            cout << -1 << yo;
            return 0;
        }
    } else {
        a = v[k - 1];
    }

    ll c = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i] <= a) {
            c++;
        }
    }

    if (c != k) {
        cout << -1 << yo;
    } else {
        cout << a << yo;
    }
}
