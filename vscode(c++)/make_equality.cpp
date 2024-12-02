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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >>s;
        if (s[0] == '1' && s[n - 1] == '1')
        {
            cout << "YES" << yo;
        }
        else
        {
            cout << "NO" << yo;
        }
    }
    return 0;
}
