#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        ll sum = n * (n + 1) / 2;
        
        ll  psum = 0;
        for (ll i = 1; i <= n; i *= 2) {
            psum += i;
        }
        
        cout << sum - 2 * psum << "\n";
    }

}
