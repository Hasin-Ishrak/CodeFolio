#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'

int main()
{
    fast;
    prb;
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> v(n), a(n + 2, 0); 
        
        for (ll i = 0; i < n; i++) 
            cin >> v[i];
        
        bool ans = true;

        for (ll i = 0; i < n; i++) 
        {
            a[v[i]] = true;
            if (i > 0 && !a[v[i] - 1] && !a[v[i] + 1]) 
            {
                ans = false;
            }
        }

        if (ans)
            cout << "YES" << yo;
        else
            cout << "NO" << yo;
    }
}
