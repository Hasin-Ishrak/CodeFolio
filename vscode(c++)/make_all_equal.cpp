#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

ll ans(const vector<ll>& v, ll n) {
    ll mx = 0;
    unordered_map<ll, ll> freq;
    for(ll i = 0; i < n; i++) {
        freq[v[i]]++;
        if(freq[v[i]] > mx) mx = freq[v[i]];
    }
    return mx;
}

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll a = ans(v, n);
        cout << n - a << yo;
    }
}
