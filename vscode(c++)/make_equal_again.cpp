#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;

        ll a = 0, b = 0;
        while(a < n && v[a] == v[0]) a++;
        while(b < n && v[n - b - 1] == v[n - 1]) b++;

        ll res = n;
        if(v[0] == v[n - 1])
            res -= (a + b);
        else
            res -= max(a, b);

        cout << max(0LL, res) << yo;
    }
}
