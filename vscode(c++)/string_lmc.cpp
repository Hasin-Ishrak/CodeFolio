#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

string ans(const string& s, int t) {
    string r;
    for (int i = 0; i < t; i++) {
        r += s;
    }
    return r;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int c = a.size(), d = b.size();
        int e = __gcd(c, d);
        if (ans(a, d / e) == ans(b, c / e)) {
            cout << ans(a, d / e) << yo;
        } else {
            cout << -1 << yo;
        }
    }
}
