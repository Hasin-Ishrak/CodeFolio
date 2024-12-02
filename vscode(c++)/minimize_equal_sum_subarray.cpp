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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            b[i] = a[(i + 1) % n];
        }
        for (ll i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << yo;
    }
}
