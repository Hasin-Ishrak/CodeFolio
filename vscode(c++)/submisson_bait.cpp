#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
ll t;
const int N = 55;
int main()
{
    fast;
    prb;
    cin >> t;
    while (t--)
    {
        int n;
        int q[N] = {0};
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            ++q[x];
        }

        bool found_odd = false;
        for (int i = 1; i <= n; ++i)
        {
            if (q[i] % 2 == 1)
            {
                found_odd = true;
                break;
            }
        }

        if (found_odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}