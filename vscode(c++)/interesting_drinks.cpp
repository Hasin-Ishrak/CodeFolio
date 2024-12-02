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
    ll n, b, ans;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> b;
        ans = upper_bound(a.begin(), a.end(), b) - a.begin();  
        cout << ans << yo;
    }
}