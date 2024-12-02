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
    ll n ,m;
    cin >> n>>m;
    vll a(m);
    read (a);
    sort (all (a));
    ll  l =0, r= (m/n) +10;
    while(l<r)
    {
        ll md=(r+l+1)/2 ;
        ll  c=0 ,b=1 ;
        for(ll i=1;i<m;i++)
        {
            if(a[i]==a[i-1]){
                b++;
            }
            else{
                b=1;
            }
            if(b>=md){
                c++;
                b=0;
            }
        }
        if(c>=n){
            l=md;
        }
        else{
            r=md-1;
        }
    }
    cout << l << el;
}