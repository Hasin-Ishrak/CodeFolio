#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        
        while (n > 1 && ((s.front() == '1' && s.back() == '0') || (s.front() == '0' && s.back() == '1'))) {
            s.erase(s.begin());
            s.erase(s.end() - 1);
            n -= 2;
        }
        
        cout << n << yo;
    }
}
