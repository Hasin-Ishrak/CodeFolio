#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if(s <= a[i].first) {
            cout << "NO" << endl;
            return 0;
        } else {
            s += a[i].second;
        }
    }

    cout << "YES" << endl;
}
