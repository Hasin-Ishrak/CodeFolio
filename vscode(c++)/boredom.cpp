#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p=100005;

int main() {
    fast;
    int n;
    cin >> n;
    vector<int> v(n);
    int m = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        m = max(m, v[i]);
    }

    ll c[p] = {0};
    for(int i = 0; i < n; i++) c[v[i]]++;

    ll ans[p];
    ans[0] = 0;
    ans[1] = c[1];
    for(int i = 2; i <= m; i++) {
        ans[i] = max(ans[i-1], i * c[i] + ans[i-2]);
    }
    cout << ans[m] ;
}
