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
ll cal(const vector<ll>& v,ll n,ll p)
{
    if(p>v.back())
    {
      return n-v.back();
    }
    else if(p<v[0])
    {
        return v[0]-1;
    }
    else 
    {
        auto it=upper_bound(v.begin(),v.end(),p);
       ll r = *it, l = *(it-1);
        ll md=(r+l)/2;
        return min(abs(md-r),abs(md-l));
    }
}
void ans(const vector<ll>&v,ll n ,ll q)
{
    while(q--)
    {
        ll p;
        cin >>p;
        ll r=cal(v,n,p);
        cout << r<<el;
    }
}
int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    { 
      ll n ,m,q;
      cin >>n>>m>>q;
      vector<ll>v(m);
      for(auto &i:v) cin >>i;

      sort(v.begin(),v.end());
      ans(v,n,q);
    }
}