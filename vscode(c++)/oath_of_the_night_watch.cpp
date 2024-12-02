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
    ll n, a = 0, b = 0;
    cin >> n;
    vector<ll> v(n);
    
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    ll mn = v[0], mx = v[n-1];

    for(ll i = 0; i < n; i++) {
        if(v[i] == mx) a++;
        if(v[i] == mn) b++;
    }

    if(mn == mx)
        cout << 0 << yo;
    else
        cout << n - a - b << yo;
}
