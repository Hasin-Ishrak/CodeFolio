#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p = 100005;

int main() {
    fast;
    ll n, l;
    dd m = 0;
    cin >> n >> l;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) > m) {
            m = abs(a[i] - a[i + 1]);
        }
    }
    double result = max(m / 2.0, max((dd)a[0], (dd)(l - a[n - 1])));
    cout << fixed << setprecision(10) << result << yo;
}
