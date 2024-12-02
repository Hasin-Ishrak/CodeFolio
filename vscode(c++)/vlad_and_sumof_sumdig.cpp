#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define MAX 200007
ll res[MAX];

void precompute() {
    for (ll i = 1; i < MAX; i++) {
        ll num = i;
        ll sum_digits = 0;
        while (num) {
            sum_digits += (num % 10);
            num /= 10;
        }
        res[i] = res[i - 1] + sum_digits;
    }
}
ll compute_result(ll n) {
    if (n < MAX) {
        return res[n];
    }
    ll cyc = n / 9;
    ll r = n % 9;
    return 45 * cyc + (r * (r + 1)) / 2;
}

int main() {
    fast;
    prb;
    precompute();
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n < MAX) {
            cout << res[n] << yo;
        } else {
            cout << compute_result(n) << yo;
        }
    }
}
