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
    cin >> t;
    while(t--)
    {
        ll n ;
        cin >> n ;
        ll ans =n,d =0;
        if(n<10)
        {
          cout << n << el;
        }
        else 
        {
            while(n>=10)
            {
                d=n/10;
                n=n%10;
                n+=d;
                ans+=d;
            }
            cout << ans << el;
        }
    }
}