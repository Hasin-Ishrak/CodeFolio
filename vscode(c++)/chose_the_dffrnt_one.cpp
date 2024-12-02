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
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> a(n), b(m);
        vector<int> cnt(k + 1, 0);
        
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                cnt[a[i]] |= 1;
        }
        
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= k)
                cnt[b[i]] |= 2;
        }

        vector<int> c(4, 0);
        for (int e : cnt)
        {
            c[e]++;
        }

        if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k)
        {
            cout << "NO" << yo;
        }
        else
        {
            cout << "YES" << yo;
        }
    }
}
