#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);

        cout << a << " " << b << "\n";
    }
}
