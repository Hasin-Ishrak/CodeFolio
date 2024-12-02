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
    
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll mb = 0, Sum = 0;
    ll l = 0;

    for (ll i = 0; i < n; i++) {
        Sum += v[i];

        while (Sum > t) {
            Sum -= v[l];
            l++;
        }

        mb = max(mb, i - l + 1);
    }

    cout << mb << yo;
}
