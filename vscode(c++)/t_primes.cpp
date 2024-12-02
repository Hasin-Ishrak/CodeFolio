#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll sqrtN = sqrt(n);
        if (sqrtN * sqrtN == n && isPrime(sqrtN)) {
            cout << "YES" << yo;
        } else {
            cout << "NO" << yo;
        }
    }
}
