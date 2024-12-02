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
    ll n,c25=0,c50=0;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
        if(i==25)
        {
            c25++;
        }
        else if(i==50)
        {
            if(c25>0)
            {
                c25--;
                c50++;
            }
            else{
                cout <<"NO"<<el;
                return 0;
            }
        }
        else{
            if(c25>0 &&c50>0)
            {
                c25--;
                c50--;
            }
            else if(c25>2)
            {
                c25-=3;
            }
            else{
                cout <<"NO"<<el;
                return 0;
            }
        }
    } 
    cout << "YES"<<el;
}
