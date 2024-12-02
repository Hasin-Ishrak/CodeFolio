#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
#define pp pop_back()
const ll mod=1e6+123;
bitset<mod>a;
vector<ll>p;

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll s = 0, a = 0;
        bool ans  = true;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            s += v[i];
            a += i;
            if(s < a)
            {
                ans = false;
            }
        }
        if(ans)
        {
            cout << "YES" << yo;
        }
        else
        {
            cout << "NO" << yo;
        }
    }
}