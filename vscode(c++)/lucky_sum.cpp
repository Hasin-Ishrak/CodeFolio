#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend()

using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;     
const ld PI = acos(-1); 

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
template <typename T> void read(vector<T> &v) { for (auto &x : v) cin >> x; }

 ll l , r;
 vll ln;

 ll sum(ll n)
 {
   ll ans=0;
   for(ll i=1;;i++)
   {
    if(ln[i]>=n)
    {
        ans+=ln[i] *(n-ln[i-1]);
        break;
    }
    ans+=ln[i]*(ln[i]-ln[i-1]);
   } 
   return ans;
 }
int main() {
    fast;
    prb;
    cin >> l >> r;
    ln.pb(0);
    ln.pb(4);
    ln.pb(7);
    for(ll i=1;ln[i]*10<=1e10;i++)
    {
       ln.pb(ln[i]*10+4);
       ln.pb(ln[i]*10+7);
    }
    cout << sum(r)-sum(l-1) << el;

}