#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const int Mv = 100001;
vector<ll> tree[Mv];
bool vis[Mv] = {false};
ll ne[2] = {0};

void dfs(ll v, ll cr) {
    ll nc = 1 - cr;
    if (!vis[v]) {
        ne[cr]++;
        vis[v] = true;
        for (ll i = 0; i < tree[v].size(); i++) {
            dfs(tree[v][i], nc);
        }
    }
}

int main() {
    fast;
    ll n;
    cin >> n;
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        tree[u].pb(v);
        tree[v].pb(u);
    }
    dfs(1, 0);
    ll ans = ne[0] * ne[1] - (n - 1);
    cout << ans ;
}
