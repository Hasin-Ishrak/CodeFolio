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
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        if ((a == c && b + d == a) || (a == d && b + c == a) ||
        (b == c && a + d == b) || (b == d && a + c == b)) 
        {
            cout << "YES" << yo;
        } 
        else 
        {
            cout << "NO" << yo;
        }
    }
}
