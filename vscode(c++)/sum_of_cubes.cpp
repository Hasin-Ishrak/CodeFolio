#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

unordered_set<ll>cube;

void check() {
    for (ll i = 1; i * i * i <= 1e12; ++i) {
        cube.insert(i * i * i);
    }
}

void solve() {
    ll x;
    cin >> x;

    for (ll i = 1; i * i * i <= x; ++i) {
        if (cube.count(x - i * i * i)) {
            cout << "YES" << yo;
            return;
        }
    }
    cout << "NO" << yo;
}

int main() {
    fast;
    check();

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}