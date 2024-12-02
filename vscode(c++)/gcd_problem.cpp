#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
#define pp pop_back()
const ll mod = 1e6 + 123;

void solve() {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "2 " << (n - 3) << " 1" << yo;
    } else {
        ll c = (n - 1) / 2;
        if (c % 2 == 0) {
            cout << c - 1 << " " << c + 1 << " " << 1 << yo;
        } else {
            cout << c - 2 << " " << c + 2 << " " << 1 << yo;
        }
    }
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
