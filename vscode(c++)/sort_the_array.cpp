#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll i = 0; i < n; i++) cin >> a[i];

    ll s = 0, e = n - 1;

    while(s < n - 1 && a[s] <= a[s + 1]) s++;

    if(s == n - 1) {
        cout << "yes" << yo;
        cout << 1 << " " << 1 << yo;
        return 0;
    }

    while(e > 0 && a[e] >= a[e - 1]) e--;

    reverse(a.begin() + s, a.begin() + e + 1);

    if(is_sorted(a.begin(), a.end())) {
        cout << "yes" << yo;
        cout << s + 1 << " " << e + 1 << yo;
    } else {
        cout << "no" << yo;
    }
}
