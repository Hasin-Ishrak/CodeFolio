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
    ll n,f=0,z=0 ;
    cin >>n;
    vector<ll>v(n);
    for(auto &i:v)
    {
        cin >>i;
        if(i==5) f++;
        else z++;
    }
    if(f<9)
    {
        if(z==0)
        {
            cout <<-1;
        }
        else {
            cout <<0;
        }
    }
    else if(z==0)
    {
        cout <<-1;
    }
    else 
    {
        f-=(f%9);
        for(ll i=0;i<f;i++)
        {
            cout <<5;
        }
        for(ll i=0;i<z;i++)
        {
            cout<<0;
        }
    }
}