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
    ll n ,m,x ;
    cin >> n >>m;
   vector<vector<ll>> v(n, vector<ll>(m));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin >>v[i][j];
        }
    }
    cin >> x;
    bool ans =false;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]==x)
            ans=true;
        }
    }
    if(ans)
    {
        cout <<"will not take number"<<el;
    }
    else 
    {
        cout <<"will take number"<<el;
    }
}