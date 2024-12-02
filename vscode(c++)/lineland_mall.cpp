#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll s = v[0];
    ll en = v[n - 1];
    vector<ll> mn(n, LLONG_MAX);
    vector<ll> mx(n);            

    for (ll i = 0; i < n; i++)
    {
        mx[i] = max(abs(s - v[i]), abs(en - v[i]));
        if (i > 0)
        {
            mn[i] = min(mn[i], abs(v[i] - v[i - 1]));
        }
        if (i < n - 1)
        {
            mn[i] = min(mn[i], abs(v[i] - v[i + 1]));
        }
        if (i == 0)
        {
            mn[i] = abs(s - v[i + 1]);
        }
        else if (i == n - 1)
        {
            mn[i] = abs(en - v[i - 1]);
        }
        cout << mn[i] << " " << mx[i] << yo;
    }
}
