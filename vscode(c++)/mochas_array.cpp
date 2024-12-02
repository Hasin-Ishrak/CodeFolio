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

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
      ll n ;
      cin >>n;
      vector<ll>v(n),b;
      for(auto &i:v) cin >>i;

      sort(v.begin(),v.end());
      ll a=v[0];
      for(ll i=0;i<n;i++)
      {
        if(v[i]%a!=0)
        {
            b.pb(v[i]);
        }
      }
      if(b.empty())
      {
        cout <<"YES"<<el;
        continue;
      }
      ll c =b[0];
       bool ans = all_of(b.begin(), b.end(), [c](ll x) { return x % c == 0; });

        if (ans) cout << "YES" << el;
        else cout << "NO" << el;
    }
}
