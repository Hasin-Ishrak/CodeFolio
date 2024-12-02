#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll b = LLONG_MAX;
    ll c = 0;
    for (ll i : v)
    {
        if (i < b)
        {
            b = i;
            c = 1;
        }
        else if (i == b)
        {
            c++;
        }
    }

    if (c > 1)
    {
        cout << "Still Rozdil" << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (b == v[i])
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }

}
