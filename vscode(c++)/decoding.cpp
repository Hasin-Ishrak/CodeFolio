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
    ll n;
    cin >> n;
    string s, ans;
    cin >> s;
   vector<char>v;
   while(n!=0)
   {
    if(n%2!=0)
    {
        v.pb(s[0]);
    }
    else {
        v.insert(v.begin(),s[0]);
    }
    s.erase(0,1);
    n = s.size();
   }
   for(auto &i:v)
   {
    cout <<i;
   }
   cout <<el;
}
