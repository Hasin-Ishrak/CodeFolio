#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    ll a = v[n - 1] - v[0]; 

    ll minc = count(v.begin(), v.end(), v[0]);
    ll mac = count(v.begin(), v.end(), v[n - 1]);
    
    ll b;
    if (v[0] == v[n - 1]) {
        b = (n * (n - 1)) / 2; 
    } else {
        b = minc * mac;
    }
    cout << a << " " << b << yo;
}
