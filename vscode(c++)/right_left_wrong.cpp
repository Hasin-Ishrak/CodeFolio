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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1), p(n + 1); 
        for(ll i = 1; i <= n; i++) cin >> v[i];
        string s;
        cin >> s;
        
        for(ll i = 1; i <= n; i++)
            p[i] = p[i - 1] + v[i];

        ll ans = 0, it = n;
        for(ll i = 1; i <= n; i++)
        {
            if(s[i - 1] == 'L')
            {
                while(it > i && s[it - 1] != 'R')
                    it--;
                
                if(it > i)
                    ans += p[it] - p[i - 1];
                
                it--; 
            }
        }
        cout << ans << yo;
    }
}
