#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n , m ;
    cin >> n >> m;
    ll ans =-1;
    if( m % n == 0)
    {
        ans =0 ;
        ll d = m / n;
        while(d%2==0)
        {
            ans ++;
            d/=2;
        }
        while(d%3==0)
        {
            ans++;
            d/=3;
        }
        if(d!=1)
        {
            ans =-1;
        }
    }
    cout << ans ;
}