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

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    { 
        ll n ,m,q,f,g;
        cin >> n >>m >>q;
        ll a,b;
        cin >>a >>b;
        ll e;
        cin >>e;
        if(a>e && b >e)
        {
            cout << min(a,b)-1 <<el;
        }
        else if(a<e && b<e)
        {
            cout << n- max(a,b)<<el;
        }
        else 
        {
            cout << abs(a-b)/2 <<el;
        }
    }
}