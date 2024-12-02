#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    ll t ;
    cin >> t;
    while(t--)
    {
        ll n,ans =0 ;
        cin >> n;
        map<ll,ll>a;
        for(ll i=0;i<n;i++)
        {
            ll b ;
            cin >> b;
            b-=i;
            ans+=a[b];
            a[b]++;
        }

        cout << ans  <<yo;
    }
}