#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll e = max((3 * a) / 10, a - (a / 250) * c);
    ll f = max((3 * b) / 10, b - (b / 250) * d);
    
    if(e > f)
    {
        cout << "Misha" << "\n";
    }
    else if(f > e)
    {
        cout << "Vasya" << "\n";
    }
    else
    {
        cout << "Tie" << "\n";
    }
}
