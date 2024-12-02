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
int main() {
    fast;
    prb;
    cin >> t;
    while (t--)
     {
        ll n,a,b;
        cin>>n >>a >>b;
         ll g=gcd(a,b);
         vector<ll>e(n); 
        for(ll i =0;i<n; i++)
         {
            cin>>e[i];
             e[i]=e[i] % g;
        }

         sort(e.begin(), e.end());  
        ll sl = e[n-1] - e[0];

        for(ll j =0;j< n-1;j++) 
         {
             sl =min(sl,e[j] +g -e[j + 1]);
        }
         cout<<sl<<el;
     }
}
