#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
     fast;
    string s;
    cin >> s;
    ll n = s.size();
    ll first_ab = -1, first_ba = -1;
    for (ll i = 0; i < n - 1; i++) {
        if (s.substr(i, 2) == "AB") {
            first_ab = i;
            break;
        }
    }
    for (ll i = 0; i < n - 1; i++) {
        if (s.substr(i, 2) == "BA") {
            first_ba = i;
            break;
        }
    }
    if (first_ab != -1) {
        for (ll i = first_ab + 2; i < n - 1; i++) {
            if (s.substr(i, 2) == "BA") {
                cout << "YES" << yo;
                return 0;
            }
        }
    }
    if (first_ba != -1) {
        for (ll i = first_ba + 2; i < n - 1; i++) {
            if (s.substr(i, 2) == "AB") {
                cout << "YES" << yo;
                return 0;
            }
        }
    }
    cout << "NO" << yo;
}