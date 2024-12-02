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
void ans(vector<ll>& v,const string& s,vector<bool>& vis,vector<ll>& a, ll i) 
{
    ll bl =0, c =i;
     vector<ll> b;
    while(!vis[c]) {
         vis[c]= true;
        b.pb(c);
        if (s[c] == '0')
        {bl++;}
          c = v[c];
    }
    for (auto &j :b) {
          a[j] = bl;
    }
}

int main() {
    fast;
    prb;
    cin >> t;
    while(t--)
    {
        ll n ;
        cin >> n;
        vector<ll>v(n),a(n,0);
        for(ll i= 0;i<n;i++)
        {
            cin >>v[i];
            v[i]--;
        }
        string s ;
        cin >> s ;
        vector<bool>vis(n,false);

        for(ll i =0;i<n;i++)
        {
            if(!vis[i])
            {
                ans(v,s,vis,a,i);
        }
    }
        for(auto &i : a)
        {
            cout <<i<<" ";
        }
        cout <<el;
    }
}