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

ll brgr(ll b, ll p, ll f, ll h, ll c) {
    ll ans = 0;
    b /= 2; 
    if(h>c)
    {
        ll bf=min(b,p);
        ans+=bf*h;
        b-=bf;
        ll cf=min(b,f);
        ans+=cf*c;
    }
    else{
        ll cf=min(b,f);
        ans+=cf*c;
        b-=cf;
        ll bf=min(b,p);
        ans+=bf*h;
    }
    return ans ;
}

int main() {
    fast;
    prb;
    ll t;
    cin>>t;
    while(t--)
    {
        ll b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;   
        cout<<brgr(b,p,f,h,c)<<el;
    }
  
}