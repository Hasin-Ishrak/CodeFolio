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
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool ans = true;

        for (ll i = 0; i < n - 2; i++) {
            if(v[i]<0)
            {
                ans =false ;
                break;
            }
            ll a = v[i];
            v[i] -= a;
            v[i + 1] -= 2 * a;
            v[i + 2] -= a;
        }

        if (v[n - 1] != 0 || v[n - 2] != 0) {
            ans = false;
        }

        if (ans) {
            cout << "YES" << yo;
        } else {
            cout << "NO" << yo;
        }
    }
}
