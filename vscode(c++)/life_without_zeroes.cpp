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

ll rmz(ll n)
{
    string s = to_string(n);
    s.erase(remove(s.begin(),s.end(),'0'),s.end());
    stringstream ss(s);
    ll ans;
    ss >>ans;

    return ans;
}
int main() {
    fast;
    prb;
    ll a ,b ;
    cin >> a >> b ;
    ll sum = a+b;
    ll sum2= rmz(a) +rmz(b);
    if(rmz(sum)==sum2)
    {
        cout <<"YES"<<el;
    }
    else 
    {
        cout <<"NO"<<el;
    }
}