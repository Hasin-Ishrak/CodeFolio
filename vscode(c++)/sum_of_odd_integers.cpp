#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
     ll t;
     cin >> t;
     while(t--)
     {
        ll n ,k;
        cin >> n >> k;

        if((k * k) <= n && n % 2 == k % 2) cout << "YES" <<yo;
        
        else cout << "NO" <<yo;
     }
}