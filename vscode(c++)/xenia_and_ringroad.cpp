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
    ll n,m;
    cin >> n >> m;
    ll a=1,ans=0;
    for(ll i=0;i<m;i++)
    {
        ll b;
        cin>>b;
        if(b>=a)
        {
            ans+=b-a;
        }
        else{
            ans+=n-(a-b);
        }
        a = b;
    }
    cout << ans << yo;
}