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
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        for(ll i=1;i<=n;i++)
        {
            cout << i * n << " ";
        }
        cout << yo;
    }
}