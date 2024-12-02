#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a,ll b) { return __gcd(a,b); }
ll lcm(ll a,ll b) { return (a*b)/__gcd(a,b); }
const ll mod = 2e5 + 123;
ll t;
int main() {
    fast;
    prb;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
       bool found = false;
        for (ll i = 2; i * i * i <= n; i++) {
            if (n % i == 0) {
                ll a = i;
                n /= i;
                for (ll j = a + 1; j * j <= n; j++) {
                    if (n % j == 0 && j != a && n / j != j && n / j != a) {
                        ll b = j;
                        ll c = n / j;
                        if (c != a && c != b) {
                            cout << "YES" << el;
                            cout << a << " " << b << " " << c << el;
                            found = true;
                            break;
                        }
                    }
                }
                if (found) break;
            }
        }

        if (!found) {
            cout << "NO" << el;
        }
    }
}