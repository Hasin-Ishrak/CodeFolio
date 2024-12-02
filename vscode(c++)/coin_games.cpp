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
      ll n ,c=0;
      cin >>n;
      string s;
      cin >>s;
      for(ll i=0;i<n;i++)
      {
        if(s[i]=='U') c++;
      }
      if(c%2!=0)
      {
        cout << "YES"<<el;
      }
      else{
        cout <<"NO"<<el;
      }
    }
}