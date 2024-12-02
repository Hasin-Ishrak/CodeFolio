#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, mx = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > mx)
                mx = v[i];
        }
        bool found = false;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == mx)
            {
                if ((i > 0 && v[i-1] < mx) || (i < n-1 && v[i+1] < mx))
                {
                    cout << i + 1 << yo;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << -1 << yo;
    }
}
