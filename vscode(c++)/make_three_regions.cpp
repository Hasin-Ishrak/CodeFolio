#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

void solve(ll n) {
    vector<vector<char>> z(2, vector<char>(n));
    ll e = 0;
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> z[i][j];
        }
    }
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < n; j++) {
            if (j + 2 < n && i + 1 < 2 && z[i][j] == 'x' && z[i][j + 2] == 'x' && z[i][j + 1] == '.' && z[i + 1][j + 1] == '.' && z[i + 1][j] == '.' && z[i + 1][j + 2] == '.') {
                e++;
            }
            if (i - 1 >= 0 && j + 2 < n && z[i][j] == 'x' && z[i][j + 2] == 'x' && z[i][j + 1] == '.' && z[i - 1][j] == '.' && z[i - 1][j + 1] == '.' && z[i - 1][j + 2] == '.') {
                e++;
            }
        }
    }
    cout << e << yo;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }
}