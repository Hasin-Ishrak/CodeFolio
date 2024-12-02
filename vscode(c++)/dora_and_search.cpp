#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        ll l = 0, r = n - 1;
        while (r - l > 1)
        {
            ll mn = *s.begin();
            ll mx = *s.rbegin();
            if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx)
            {
                break;
            }
            if (a[l] == mn || a[l] == mx)
            {
                s.erase(a[l]);
                l++;
            }
            if (a[r] == mn || a[r] == mx)
            {
                s.erase(a[r]);
                r--;
            }
        }
        if (r - l > 1)
        {
            cout << l + 1 << " " << r + 1 << yo;
        }
        else
        {
            cout << -1 << yo;
        }
    }
}
