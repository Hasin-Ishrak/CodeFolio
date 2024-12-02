#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    ll n;
    cin >> n;
    
    if (n >= 0) {

        cout << n << "\n";
    } else {
        
        ll a = n / 10;
        ll b = (n / 100) * 10 + (n % 10);
        
        cout << max({n, a, b}) << "\n";
    }
}
