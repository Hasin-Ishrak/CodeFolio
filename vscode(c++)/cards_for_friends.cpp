#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, n, ans = 1;
        cin >> a >> b >> n;

        ll c = 1, d = 1;

        while (a % 2 == 0) {
            c *= 2;
            a /= 2;
        }
        
        while (b % 2 == 0) {
            d *= 2;
            b /= 2;
        }

        ans = c * d;

        if (ans >= n) cout << "YES" << yo;
        else cout << "NO" << yo; 
    }
}
