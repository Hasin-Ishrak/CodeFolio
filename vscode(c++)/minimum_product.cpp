#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

ll ans(ll a, ll b, ll x, ll y, ll n)
{
    ll ra1 = min(n, a - x);
    ll rb1 = min(n - ra1, b - y);
    ll op1 = (a - ra1) * (b - rb1);

    ll rb2 = min(n, b - y);
    ll ra2 = min(n - rb2, a - x);
    ll op2 = (a - ra2) * (b - rb2);

    return min(op1, op2);
}

int main()
{
    fast;
    prb;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        cout << ans(a, b, x, y, n) << yo;
    }
}
