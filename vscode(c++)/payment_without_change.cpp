#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll max_n_coins = min(s / n, a);
        ll remaining = s - max_n_coins * n;

        if (remaining <= b)
            cout << "YES" << yo;
        else
            cout << "NO" << yo;
    }
}
