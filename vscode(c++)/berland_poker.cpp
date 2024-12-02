#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    int t;
     cin >> t;
     while(t--)
     {
        ll n ,m ,k ;
        cin >> n >> m >> k;
        
        ll crd = n/k;
        ll mjoker = min(n/k,m);
        ll rjoker = m - mjoker;
        ll ojoker = (rjoker+(k-2))/(k-1);
        
        cout << mjoker - ojoker << yo;
     }
}