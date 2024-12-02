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
    cin >>t;
    while (t--) {
        ll n,m;
        ll s =0;
        cin >> n>> m;
        for (ll i=1;i <=n; i++) {
            ll l;
            cin >>l;
            set<ll>f;
            for (ll j = 1; j <= l; ++j) {
                ll x;
                cin>>x;
                f.insert(x);
            }
            bool flag= true;
            for (ll i = 0; ; ++i) {
                if (!f.count(i)) {
                    if (flag)flag = false;
                    else {
                        s= max(s, i);
                        break;
                    }
                }
            }
        }
        auto sum=[](ll x) -> ll {
            return x * (x + 1) / 2;
        };
        auto intl= [&](ll l, ll r) -> ll {
            return sum(r) - sum(l - 1);
        };
        if (m <=s) {
            cout << s * (m + 1) << yo;
        } else {
            cout << s * (s + 1) + intl(s + 1, m) << yo;
        }
    }
}
