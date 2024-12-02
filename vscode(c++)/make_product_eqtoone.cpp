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
ll t;
ll ans(vector<ll> &v, ll n) {
    ll cost = 0;
    ll negative_count = 0, zero_count = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i] == 0) {
            cost ++;
            zero_count++;
        } else if (v[i] > 0) {
            cost += (v[i] - 1);
        } else {
            cost += (-1 - v[i]);
            negative_count++;
        }
    }
    if (negative_count % 2 != 0 && zero_count == 0) {
        cost += 2; 
    }
    return cost;
}
int main() {
    fast;
    prb;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout <<ans(v, n) << el;
}
