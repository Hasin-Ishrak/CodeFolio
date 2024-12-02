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
    while(t--)
    {
        ll n ,f ,a ,b;
        cin >> n >>f >> a >> b ;
        vector<ll>v(n+1);
        v[0]=0;
        for(ll i =1;i<=n;i++)
        {
            cin >>v[i];
        }
        bool ans =true;
        for(ll i =1;i<=n;i++)
        {
            f-=min(a*(v[i]-v[i-1]),b);
            if(f<=0)
            {
                ans =false;
                break;
            }
        }
         
        if(ans)
        cout <<"YES"<<el;
        else 
        cout <<"NO"<<el;
    }
}