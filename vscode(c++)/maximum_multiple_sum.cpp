#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll bx = 2, msum = 0;
        
        for (ll x = 2; x <= n; x++) {
            ll sum = 0; 
            for (ll i = 1; i * x <= n; i++) {
                sum += i * x;
            }
            if (sum > msum) {
                msum = sum;
                bx = x;
            }
        }
        cout << bx << "\n";
    }
}
