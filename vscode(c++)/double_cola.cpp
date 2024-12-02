#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
ll t;
ll ans(ll n)
{
    ll a =1 ;
    while(a*5<n)
    { 
        n = n-(a*5);
        a*=2;
    }
    return (n-1)/a;
}
int main() {
    fast;
    prb;
    ll n;
    cin >> n;
    if(ans(n)==0)
    {
        cout << "Sheldon"<<el;
    }
    else if(ans(n)==1)
    {
        cout << "Leonard"<<el;
    }
    else if (ans(n)==2)
    {
        cout <<"Penny"<<el;
    }
    else if(ans(n)==3)
    {
        cout <<"Rajesh"<<el;
    }
    else {
        cout << "Howard"<<el;
    }
}