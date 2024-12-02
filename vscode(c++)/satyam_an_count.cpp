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
int main() {
    fast;
    prb;
    cin >>t;
    while(t--)
    {
        ll n ,cn=0;
        cin >>n;
        while(n--)
        {
            ll a,b;
            cin >>a>>b;
            if(b==1)
            {cn+=1;}
        }
        ll ans = 2*cn;
        cout << ans <<el;
    }
}