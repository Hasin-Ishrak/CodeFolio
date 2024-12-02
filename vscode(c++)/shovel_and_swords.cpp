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
ll ans (ll a , ll b)
{
    return min(a,min(b,(a+b)/3));
}
int main()
{
    fast;
    prb;
    cin >> t;
    while(t--)
    {
        ll a ,b ; 
        cin >> a >> b;
        cout << ans(a,b)<<el;
    }
}