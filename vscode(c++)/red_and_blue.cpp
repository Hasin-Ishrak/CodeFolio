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
    cin >> t;
    while(t--)
    {
       ll n,m;
       cin >> n;
       vector<ll>a(n);
       for(auto &i:a) cin >>i;
       
       cin >>m;
       vector<ll>b(m);
       for(auto &i:b) cin >>i;

       partial_sum(a.begin(),a.end(),a.begin());
       partial_sum(b.begin(),b.end(),b.begin());
       
       sort(a.rbegin(),a.rend());
       sort(b.rbegin(),b.rend());

       cout << max(0LL,a[0])+max(0LL,b[0])<<el;
    }
}