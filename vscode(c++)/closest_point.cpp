#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n ;
        cin>>n ;
        vector<ll>v(n);
        for(ll i =0;i<n;i++)
        {
            cin >> v[i];
        } 
        if(n>2)
        {
            cout <<"NO"<<yo;
        }
        else {
            if(abs(v[0]-v[1]) ==1)
            cout <<"NO"<<yo;

            else cout <<"YES"<<yo;
        }
    }
}