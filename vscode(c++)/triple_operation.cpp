#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
     ll a ,b ;
     cin >> a >> b;
     ll d = log2(a)/log2(3);
     d++;
     ll ans = d * 2;
     while(b>a)
     {
        ll c = log2(b)/log2(3);
        ll d = pow(3,c);
        ll e = b - max( d , a+1);
        ans+=(c+1)*(e+1);
        b = d -1;
     }
     cout << ans << yo;
    }
}