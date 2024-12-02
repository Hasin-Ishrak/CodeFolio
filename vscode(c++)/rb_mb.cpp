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
void ans(ll n,ll d,ll k)
{
 ll co=0,mxo=0,mno=LLONG_MAX,mi=1,mni=1;
 map<ll,ll>s,e;
 for(ll i=0;i<k;i++)
 {
    ll l,r;
    cin>>l>>r;
    e[r]++;
    s[l]++;
 }
 for(ll j=1;j<=d;j++)
 {
    co=co+s[j];
 }
 mno=mxo=co;
 for(ll i=2;i<=1+n-d;i++)
 {
   co=co+s[i+d-1];
   co=co-e[i-1];
   if(co>mxo)
   {
    mxo=co;
    mi=i;
   }
   if(co<mno)
   {
    mno=co;
    mni=i;
   }
 }
 cout <<mi <<" "<<mni<<el;

}

int main() {
    fast;
    prb;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ,d,k;
        cin>>n>>d>>k;
         ans(n,d,k);
    }
}