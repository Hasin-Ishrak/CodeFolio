#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
ll t;
int main() {
    fast;
    prb;
    cin >> t;
 while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        unordered_map<ll, ll> f;
        for(auto &i : v) {
            cin >> i;
            f[i]++;
        }
        ll un = f.size(), mx = 0;
        for(auto &i : f) {
            mx = max(i.second, mx);
        }
        ll ans = min(mx, un);
        if (mx > un) {
            ans = min(ans, un + 1);
        }
        else if(mx==un)
        {
            ans =ans-1;
        }
        if(n==1)
        {
            cout << 0<<el;
        }   
        else if(n==2)
        {
            cout << 1 <<el;
        }
        else {
        cout << ans << el;
    }
 }
    
}