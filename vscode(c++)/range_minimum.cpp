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

int main() {
    fast;
    prb;
    ll t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin >>n;
        vector<ll>v(n);
        for(auto &i:v) cin >>i;

        sort(v.begin(),v.end());
        ll a=v[n-3]-v[0];
        ll b=v[n-2]-v[1];
        ll c=v[n-1]-v[2];
        cout << min(b,min(a,c))<<el;
    }
}