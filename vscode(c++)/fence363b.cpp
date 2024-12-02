#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p = 100005;

int main() {
    fast;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    ll sum = 0, mns = LLONG_MAX, ans = 0;
    
    for (ll i = 0; i < k; i++) {
        sum += v[i];
    }
    mns = sum;
    ans = 0;

    for (ll i = k; i < n; i++) {
        sum += v[i] - v[i - k];
        if (sum < mns) {
            mns = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1 << yo;
}
