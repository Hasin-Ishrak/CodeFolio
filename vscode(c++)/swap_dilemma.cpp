#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n ;
        cin >> n;
        vector<ll> b(n), c(n);
        unordered_set<ll> e ,f;
        for(ll i=0;i<n;i++)
        {
            cin>> b[i];
            e.insert(b[i]);
        }
        for(ll i=0;i<n;i++)
        {
            cin >> c[i];
            f.insert(b[i]);
        }
        if(e == f)
        {
            cout << "YES" << yo;
        }
        else{
            cout << "NO" << yo;
        }
    }
}