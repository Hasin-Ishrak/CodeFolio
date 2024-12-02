#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'

ll ans(const vector<ll>& v, ll n)
 {
    unordered_map<ll, ll> f;
    ll z = 0,pairs=0;
    for (auto &i : v) 
    
    {
        if (i == 0) z++; 
        else f[i]++;      
    }
    for (const auto &pair : f) 
    {
        pairs += (pair.second * (pair.second - 1)) / 2;
    }
    if (z > 0)
     {
        ll mf = 0;
        for (const auto &pair : f)
         {
            mf = max(mf, pair.second);
        }
        pairs += mf * z + (z * (z - 1)) / 2;
    }
    return pairs;
}
int main() {
    fast;
     prb;
    ll t  ;
    cin >> t;
      while (t--) 
      {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &i : v) cin >> i;
        cout << ans(v, n) << el;
    }
}
