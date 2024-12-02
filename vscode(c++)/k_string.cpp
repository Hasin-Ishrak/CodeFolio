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
string ans(const string &s,ll k)
{
    string an,ans;
    unordered_map<char,ll>f;
    for(auto &i:s)
    {
        f[i]++;
    }
    for(auto &i:f)
    {
        if(i.second % k !=0)
        {
            return "-1";
        }
    }
    for(auto &i:f)
    {
       an+= string (i.second/k,i.first);
    }
    
    for(ll i =0;i<k;i++)
    {
        ans+=an;
    }
    return ans;
}
int main() {
    fast;
    prb;
    ll k;
    cin >> k;
    string s ;
    cin >> s;
    cout << ans(s,k)<<el;
}