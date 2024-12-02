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
        cin >> n ;
        if(n%2==0)
        {
            cout << -1 <<yo;
        }
        else 
        {
            vector<ll>v(n);
            ll l =0 , r=n-1;
            for(ll i=1;i<=n;i++)
            {
                if(i%2==1)
                v[l++]=i;

                else 
                v[r--]=i;
            }
            for(ll i=0;i<n;i++)
            {
                cout <<v[i]<<" ";
            }
        }
        cout << yo;
    }
}