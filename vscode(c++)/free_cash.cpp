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
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        ll h, m;
        cin >> h >> m;
        ll tm = (h * 60) + m;
        v[i] = tm;  
    }

    ll max_cashiers = 1;  
    ll current_cashiers = 1;

    for (ll i = 1; i < n; i++)
    {
        if (v[i] == v[i-1])
        {
            current_cashiers++;
            max_cashiers = max(max_cashiers, current_cashiers);  
        }
        else
        {
            current_cashiers = 1; 
        }
    }

    cout << max_cashiers << yo;
}
