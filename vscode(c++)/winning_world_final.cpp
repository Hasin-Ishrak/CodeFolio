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
ll ans(ll m, ll p)
{
  ll tm=m,sl=0;
  while((tm+p+21)<=1000 && tm<299)
  {
    tm++;
    sl++;
    p=p+20;
  }
  return sl;
}

int main() {
    fast;
    prb;
    ll t;
    cin >>t;
    while(t--)
    {
        ll m,p;
        cin >>m>>p;
        cout <<ans(m,p)<<el;
    }
}