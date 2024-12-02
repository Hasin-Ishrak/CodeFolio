#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

void Board(vector<vector<char>>& v, ll n, ll m) {
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(v[i][j] == '.' && (i + j) % 2 == 0) {
                v[i][j] = 'B';
            } else if(v[i][j] == '.' && (i + j) % 2 != 0) {
                v[i][j] = 'W';
            }
        }
    }
}

int main() {
    fast;
    prb;
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    
    Board(v, n, m);

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cout << v[i][j];
        }
        cout << yo;
    }
}
