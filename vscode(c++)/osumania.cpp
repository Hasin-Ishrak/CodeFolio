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
    while (t--) {
         ll n;
        cin >> n;
         vector<ll> e(n);
        for (ll i = 0; i < n; i++)
         { 
            string s;
            cin >> s;
            for (ll j = 0; j <s.size(); j++) {
                if (s[j] == '#') {
                    e[i] = j + 1; 
                    break;
                }
            }
        }
        for (ll i=n-1;i>=0; i--)
         {
            cout << e[i] << " ";
        }
        cout << el;
    }
}
