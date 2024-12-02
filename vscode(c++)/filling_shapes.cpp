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
    ll n,ans=1;
    cin >> n;
    ll a = n /2;
    if(n%2!=0)
    {
        cout << 0 ;
    }
    else{
        for(ll i =0;i<a;i++)
        {
          ans *=2;
        }
        cout << ans;
    }
}