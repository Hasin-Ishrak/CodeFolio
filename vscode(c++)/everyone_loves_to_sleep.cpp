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
    while(t--)
    {
        ll n, H, M, ans = LLONG_MAX;
        cin >> n >> H >> M;
        for(ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            ll minutes;

            if(a > H || (a == H && b >= M))
            {
                minutes = (a - H) * 60 + (b - M);
            }
            else
            {
                minutes = (24 - H + a) * 60 + (b - M);
            }

            ans = min(ans, minutes);
        }
        cout << ans / 60 << " " << ans % 60 << yo;
    }
}
