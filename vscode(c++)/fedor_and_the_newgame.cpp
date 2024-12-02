#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int bn(ll x, ll y) {
    return __builtin_popcount(x ^ y);
}

int main() {
    fast;
    
    ll n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(m + 1);
    for (ll i = 0; i < m + 1; i++) {
        cin >> a[i];
    }
    
    ll fa = a[m]; 
    
    int ans = 0;
    for (ll i = 0; i < m; i++) {
        if (bn(fa, a[i]) <= k) {
            ans++;
        }
    }
    
    cout << ans  << yo;
}