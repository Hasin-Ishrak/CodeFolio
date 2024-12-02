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
void bns(const vector<ll>& v,ll n ,ll x)
{
    ll l =0, r =n-1;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(v[m]==x)
        {
            cout <<"found"<<el;
            return;
        }
        else if(v[m]<x)
        {
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout <<"not found"<<el;
}
int main() {
    fast;
    prb;
    ll n,q;
    cin >>n >>q;
    vector<ll>v(n);
    for(auto &i:v) cin >>i;

    sort(v.begin(),v.end());
    while(q--)
    {
        ll x;
        cin >>x;
        bns(v,n,x);
    }
}