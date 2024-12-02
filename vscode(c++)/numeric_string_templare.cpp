#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];

        ll e;
        cin >> e;
        map<ll, ll> p;
        while (e--) {
            string s;
            cin >> s;
            p.clear();
            if (s.size() != n) {
                cout << "NO" << yo;
                continue;
            }

            vector<bool> a(26, false); 
            vector<ll> b(26); 

            bool ans = true;
            for (ll i = 0; i < n; i++) {
                ll f = s[i] - 'a'; 
                if (!a[f]) { 
                    if (p[v[i]]) ans = false;
                    p[v[i]] = true;
                    a[f] = true;
                    b[f] = v[i];
                }
                ans &= (b[f] == v[i]);
            }

            if (ans) cout << "YES" << yo;
            else cout << "NO" << yo;
        }
    }
}
