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
        ll n , m, k,ans=0;
        cin >> n >> m >>k;
        vector<ll>a(n),b(m);
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin >> b[i];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(a[i]+b[j]<=k)
                ans++;
            }
        }
        cout << ans <<yo;
    }
}