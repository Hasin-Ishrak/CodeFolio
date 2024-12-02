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
        ll n, k;
        cin >> n >> k;
        if (n >= k && (n - k) % 2 == 0) {
            cout << "YES" << yo;
            for (ll i = 0; i < k - 1; i++) {
                cout << 1 << " ";
            }
            cout << n - (1 * (k - 1)) << yo;
        }
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
            cout << "YES" << yo;
            for (ll i = 0; i < k - 1; i++) {
                cout << 2 << " ";
            }
            cout << n - (2 * (k - 1))<< yo;
        }
        else {
            cout << "NO"<< yo;
        }
    }
}
