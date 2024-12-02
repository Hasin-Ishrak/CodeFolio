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
    ll n;
    cin >> n; 
    vector<ll> bn;
    ll c = 0;
    while(n > 0)
    {
        bn.pb(n % 2);
        n /= 2;
    }
    for(ll i = 0; i < bn.size(); i++)
    {
        if(bn[i] == 1)
        {
            c++;
        }
    }
    cout << c << yo; 
}
