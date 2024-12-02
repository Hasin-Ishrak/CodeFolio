#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);cout.tie(nullptr);
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
const ll mx=2e5+123;
ll a[mx];

int32_t  main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--){
        priority_queue<pair<ll,ll>>q;

        ll n;
        cin >> n;
        q.push({n,-1});

        ll c=1;

        while(!q.empty()){
          ll l=-q.top().S;
          ll len=q.top().F;
          q.pop();
          ll r= l+len-1;
          ll mid;

          if(len%2){
            mid=(l+r) / 2;
          }
          else{
            mid=(l+r-1) / 2;
          }

          a[mid]=c;
          c++;

          ll l1 =l ,l2=mid+1,r1=mid-1,r2=r;

          if(l1<=r1){
            q.push({r1-l1+1,-l1});
          }

          if(l2<=r2){
            q.push({r2-l2+1,-l2});
          }
        }
        for(ll i=1;i<=n;i++){
            cout << a[i] <<" ";
        }
        cout << el;
    }
}