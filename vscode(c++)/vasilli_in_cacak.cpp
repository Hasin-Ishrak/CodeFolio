#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;
        
        ll min_k = (x * (x+ 1)) / 2;
        ll max_k =(n*(n+1)-(n-x)*(n-x+1))/2;
        
        if (k >= min_k && k <= max_k)
        {
            cout << "YES" << yo;
        }
        else
        {
            cout << "NO" << yo;
        }
    }
}
