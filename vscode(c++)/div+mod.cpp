#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

void ans() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll e = b / c + b % c;
    ll f = b / c * c - 1;
    if (f >= a) {
        e = max(e, f / c + f % c);
    }
    cout << e << yo;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ans();
    }
}
