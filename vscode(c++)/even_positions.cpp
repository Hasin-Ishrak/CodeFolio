#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int minc(ll l, string &s) {
    ll c = 0;
    stack<ll> st;
    for (ll i = 0; i < l; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (!st.empty()) {
                c += i - st.top();
                st.pop();
            }
        }
    }
    return c;
}

int rcc(ll l, string &s) {
    for (ll i = 0; i < l; i++) {
        if (s[i] == '_') {
            s[i] = (i == 0 || s[i - 1] == ')') ? '(' : ')';
        }
    }
    return minc(l, s);
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll l;
        cin >> l;
        string s;
        cin >> s;
        ll ans = rcc(l, s);
        cout << ans << yo;
    }
}