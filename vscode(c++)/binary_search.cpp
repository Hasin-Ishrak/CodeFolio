#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int bs(const vector<ll>&a , ll t )
{
 ll l =0 , r = a.size() - 1 ;
 while(l<=r)
 {
    ll m = l + (r-l)/2;
    if(a[m]==t)
    {
        if( m ==0 || a[m-1] !=t )
        {
            return m;
        }
        else{
            r = m -1;
        }
    }
    else if (a[m]<t)
    {
        l = m+1;
    }
    else{
        r = m-1;
    }
 }
 return -1;
}
int main()
{
    fast;
    ll n , q;
    cin>> n >> q;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>> a[i];
    }
    for(ll i=0;i<q;i++)
    {
        ll qr;
        cin >> qr;
        ll ans = bs(a,qr);
        cout << ans <<yo;
    }
}