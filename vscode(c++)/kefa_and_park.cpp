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
const ll mn = 1000000;
vector<ll> adj[mn];
ll c[mn];
ll ans = 0; 
ll nc, mc;

void dfs(ll cn,ll p ,ll cc)
{
  if(cc>mc) return;
  bool lf=true;

  for(auto &i :adj[cn])
  {
    if(i!=p)
    {
        lf=false;
        dfs(i, cn,(c[i] ? cc+1 : 0 ));
    }
  }
  if(lf) ans++;
}

int main() {
    fast;
    prb;
    cin >> nc >>mc;
     for (ll i = 0; i < nc; i++)
    {
        cin >> c[i];
    }
    for(ll i=1;i<nc;i++)
    {
        ll x,y;
        cin >> x>>y;
        x--;
        y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(0,-1,c[0]);
    cout << ans << el;
}