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
    ll n ,ans =0;
    cin >> n;
    for(ll i = 0 ;i<n ;i++)
    {
        ans += ((i+1) * (n-i)) - i ;
    }
    cout << ans ;
    
}