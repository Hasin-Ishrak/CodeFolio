#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a,ll b) { return __gcd(a,b); }
ll lcm(ll a,ll b) { return (a*b)/__gcd(a,b); }
const ll mod = 2e5 + 123;
ll t;
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    fast;
    prb;
    cin >> t;
    while(t--){
       ll n, k;
        cin >> n >> k;
        ll ans = n;  
        for(ll i =1 ;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i<=k)
                {
                    ans = min(ans,n/i);
                }
                if(n/i<=k){
                    ans = min(ans,i);
                }
            }
        }
        cout << ans << el;
    }
}