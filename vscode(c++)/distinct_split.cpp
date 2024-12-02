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
        ll n, ans = 0;
        cin >> n;
        string s;
        cin >> s;

        unordered_set<char> pre, su;
        vector<ll> pref, suf(n, 0);

        for (auto& c : s) {
            pre.insert(c);
            pref.pb(pre.size());
        }

        for (ll i = n - 1; i >= 0; i--) {
            su.insert(s[i]);
            suf[i] = su.size();
        }

        for (ll i = 0; i < n - 1; i++) {
            ans = max(pref[i] + suf[i + 1], ans);
        }

        cout << ans << yo;
    }
}
