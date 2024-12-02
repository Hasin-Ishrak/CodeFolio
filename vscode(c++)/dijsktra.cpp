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
#define mmp make_pair
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
const ll INF = 1e18;     
const ld PI = acos(-1); 

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
template <typename T> void read(vector<T> &v) { for (auto &x : v) cin >> x; }
ll d[100005], p[100005]; 
map<pair<ll, ll>, ll> mp; 
priority_queue<ll> q;
vector<ll> v[100005];

void Path(ll i) 
{
    if (i != 1)Path(p[i]); 
    cout << i << ' '; 
}

void dijkstra(ll n)
{
    for (int i= 2; i<= n;i++)
    {
        d[i] = INF;
    }
    d[1] = 0;
    q.push(1);
    while(!q.empty())
    {
        ll k =q.top();
        q.pop();
        for(auto& ng : v[k])
        {
            ll wg=mp[{k,ng}];
            if(d[k]+wg<d[ng])
            {
                d[ng]=d[k]+wg;
                p[ng]=k;
                q.push(ng);
            }
        }
    }
}
int main() {
    fast;
    prb;
    ll n ,m;
    cin >> n >>m;
    while(m--)
    {
        ll a,b,w;
        cin >>a >>b >>w;
        v[a].pb(b);
	    v[b].pb(a);
	    mp[{a,b}]=w;
	    mp[{b,a}]=w;
    }
    dijkstra(n);

    if(d[n]==INF) cout<< -1 << el;
    else Path(n);
}