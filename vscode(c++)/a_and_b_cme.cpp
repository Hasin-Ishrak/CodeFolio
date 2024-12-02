#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll n;
    cin >> n;
    vector<ll> a(n), b(n-1), c(n-2);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n-1; i++) cin >> b[i];
    for(ll i = 0; i < n-2; i++) cin >> c[i];

    ll p = 0, q = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for(ll i = 0; i < n; i++) {
        if(i == n-1 || a[i] != b[i]) {
            p = a[i];
            break;
        }
    }

    for(ll i = 0; i < n-1; i++) {
        if(i == n-2 || b[i] != c[i]) {
            q = b[i];
            break;
        }
    }

    cout << p << yo;
    cout << q << yo;
}
