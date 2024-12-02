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
        ll n, k;
        cin >> n >> k;
        int ans = 0;
        priority_queue<int> p;
        p.push(n);

        while (!p.empty()) {
            ll u = p.top();
            p.pop();

            if (u == 1) {
                continue;
            }

            ans++;
            int num = min(k, u);

            for (int i = 0; i < num - 1; i++) {
                p.push(1);
            }
            p.push(u - (num - 1));
        }

        cout << ans << yo;
    }
}
