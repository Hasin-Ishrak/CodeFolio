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
        ll x, n, m;
        cin >> x >> n >> m;

        while (n > 0 && x > 20)
        {
            x = (x / 2) + 10;
            n--;
        }

        x -= m * 10;
        if (x <= 0) {
            cout << "YES" << yo;
        } else {
            cout << "NO" << yo;
        }
    }
}
