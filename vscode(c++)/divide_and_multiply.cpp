#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
        cin >> n;
        ll mx = 0, cnt = 0, res = 0;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            while (x % 2 == 0) {
                x /= 2;
                ++cnt;
            }
            if (x > mx) {
                res += mx;
                mx = x;
            } else {
                res += x;
            }
        }

        for (ll i = 0; i < cnt; i++) {
            mx *= 2;
        }
        res += mx;
        cout << res << yo;
    }
}
