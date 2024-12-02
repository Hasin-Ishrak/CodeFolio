#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a,ll b) { return __gcd(a,b); }
ll lcm(ll a,ll b) { return (a*b)/__gcd(a,b); }
const ll mod = 2e5 + 123;
ll t;

int main() {
    fast;
    prb;
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<ll> v(n);
   for(auto &i : v) cin >> i;
   sort(v.rbegin(),v.rend());
   ll i =0 , pl =0;
   while(i<n && pl<=n)
   {
       ll a= ceil((k+1)/(v[i]*1.0));
       pl+=a;
       if(pl<=n) ans++;
       i++;
   }
   cout << ans <<el;
    
}
