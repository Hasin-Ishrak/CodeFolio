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

ll sl(ll n, ll m) 
{
   string s[m];
   ll ans=0;
   for(ll i=0;i<m;i++)
   {
    cin >>s[i];
   }
   for(ll i=0;i<n;i++)
   {
    ll z=0,o=0,q=0;
    for(ll j=0;j<m;j++)
    {
        char cc=s[j][i];
        if(cc=='1') o++;
        else if(cc=='?') q++;
        else z++;
    }
    ll mx=max(z,o) ,mn=min(o,z);
    if(mn+q<=mx)
    {
        mn=mn+q;
    }
    else 
    {
        q-=mx-mn;
        mn=mx;
        mn+=(q+1)/2;
        mx+=q/2;
    }
    ans=ans+(mn*mx);
   }
   return ans;
}

int main() {
    fast;
    prb;
    ll t;
    cin >>t;
    while (t--)
    {
        ll n,m;
        cin >>n >>m;
        cout <<sl(n,m)<<el;
    } 
}