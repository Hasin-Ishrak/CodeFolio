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
ll calcu(const vector<vector<ll>>& v, ll n)
{
    ll pm=0,sc=0;
    for(ll i=0;i<n;i++)
    {
        pm+=v[i][i];
    }
    for(ll i=0;i<n;i++)
    {
        sc+=v[i][n-1-i];
    }
    return abs(pm-sc);
}
int main() {
    fast;
    prb;
    ll n ;
    cin >>n;
    vector<vector<ll>>v(n,vector<ll>(n));
    for(ll i =0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin >>v[i][j];
        }
    }
    cout << calcu(v,n)<<el;
}