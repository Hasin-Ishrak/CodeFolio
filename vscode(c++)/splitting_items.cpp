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
        ll n ,k ;
        cin >> n >> k;
        vector<ll>v(n);
        for(ll i =0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        ll sc=0,rem=k;
        for(ll i =0;i<n;i++)
        {
            if(i%2==0) 
            {sc+=v[i];}
            else
            {
                ll nd = min(rem,v[i-1]-v[i]);
                v[i]+=nd;
                rem-=nd;
                sc-=v[i];
            } 
        }
       cout << sc <<el;
    }
}