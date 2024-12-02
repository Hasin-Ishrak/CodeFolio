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
ll t;
int main() {
    fast;
    prb;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll>pf(n+1,0);
        for(ll i =1;i<=n;i++)
        {
            pf[i]=pf[i-1]+ (s[i-1]=='W');
        }
        ll ans = LLONG_MAX;
        for(ll i =k;i<=n;i++)
        {
            ans =min(ans,pf[i]-pf[i-k]);
        }
        cout<< ans << el;
        
    }
}
