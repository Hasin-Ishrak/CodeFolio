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
    while(t--)
    {
        ll n,z=0,o=0 ;
        cin >> n ;
        string s ;
        cin >> s ;
        bool ans =false;
        for(ll i =0;i<n;i++)
        {
            if(s[i]=='0') z++;
            else o++;
        }
        for(ll i =1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ll a=i,b =n/i;
                if(o==2*(a+b-2) && z==(a*b-o))
                {
                    if(a==b)
                    {
                        ans =true;
                    }
                }

            }
        }
        if(ans) cout <<"Yes"<<el;
        else cout <<"No"<<el;
        
    }
}