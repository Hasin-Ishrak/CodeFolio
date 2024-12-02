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
     ll n , m,l ;
     dd t, max(0);
    cin >> n >> m;

    for ( ll i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            l = i;
            max = ceil(t / m);
        }
    }

    cout << l ;
}
