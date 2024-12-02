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

ll sm(ll n)
{
    ll s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main() {
    fast;
    prb;
    cin >> t;
    while(t--)
    {
        ll n ;
        cin >> n ;
        ll x = n/2;
        ll y=n-x;
        while(abs(sm(x)-sm(y))>1)
        {
            x++;
            y--;
        }
        cout << y >>" "<<x<<el;
    }
}