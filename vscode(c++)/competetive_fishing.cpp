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
 
 bool fish(vector<ll> &vv,ll &k,ll &mid){
    ll e=0;
    for(ll i=0;i<mid-1 && i<vv.size();i++){
        e+=vv[i];
        if(e>=k)
            return 1; 
    }
    return 0;
 }
int main() {
    fast;
    prb;
    ll t ;
    cin >> t;
    while(t--){
        ll n ,k;
        cin >> n >>k;
        string s;
        cin >>s;
        vll v;
        for(ll i=0;i<n;i++){
            ll a=s[i]-'0';
            v.pb(a);
        }
        vll vv;
        vv.pb(0);
        ll an=0;
        for(ll i=n-1;i>=0;i--){
            vv.pb(an);
            if(s[i]=='1') {
                an++;}
            else {
                an--;}
        }
        sort(rall(vv));
        ll l =2;
        ll r=n;
        ll ans=-1;
        ll mid=(l+r)/2;
        if(fish(vv,k,mid)){
            r=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;
        }
        cout << ans << el;
    }
}