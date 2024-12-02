#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n, x;
    cin >> n >> x;
    ll c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            ll j = x / i;
            if (j <= n)
            {
                c++;
            }
        }
    }
    cout << c << yo;
}
