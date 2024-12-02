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
    ll n, m, ans = 0;
    cin >> n >> m;

    if (n > m)
    {
        cout << n - m << yo;
    }
    else
    {
        while (n < m)
        {
            if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m += 1;
            }
            ans++;
        }
        cout << ans + (n - m) << yo;
    }
}
