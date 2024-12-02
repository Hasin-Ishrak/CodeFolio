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
void matrix() {
    ll n;
  cin >> n;
  if (n == 1) {
    cout << "1" << endl;
    return;
  } else if (n == 2) {
    cout << "-1" << endl;
    return;
  }
  vector<vector<ll>> a(n, vector<ll>(n));
  a[0][0] = 1;
  a[n - 1][n - 1] = n * n;
  ll x = n * n - 1;
  for (ll i = 1; i + 1 < n; i++) {
    for (ll j = i; j >= 0; j--, x--) {
      a[i - j][j] = x;
    }
  }
  x = 2;
  for (ll j = n - 2; j > 0; j--) {
    for (ll i = 0; i < n - j; i++, x++) {
      a[n - i - 1][j + i] = x;
    }
  }
  for (ll i = n - 1; i >= 0; i--, x++) {
    a[i][n - i - 1] = x;
  }
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
   ll t ;
   cin >>t;
    while (t--) {
        matrix();
    }
}