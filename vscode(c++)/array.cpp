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

int main() {
    fast;
    prb;
    ll n;
    cin>>n;
    vll v(n);
    vll a,b,c;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];  
        if(v[i]==0)
        {
            a.pb(v[i]);
        }   
        else if(v[i]<0)
        {
            b.pb(v[i]);
        }
        else{
            c.pb(v[i]);
    }
    }
   if (b.size() % 2 == 0) {
        a.pb(b[0]);
        b.erase(b.begin());
    }
    if (c.empty()) {
        c.pb(b[0]); 
        c.pb(b[1]); 
        b.erase(b.begin(), b.begin() + 2); 
    }
    cout << b.size() << " ";
    for (ll i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << el;
    cout << c.size() << " ";
    for (ll i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << el;
    cout << a.size() << " ";
    for (ll i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << el;
}
