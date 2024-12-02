#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
            }
        }
        int maxa = *max_element(a.begin(), a.end());
        int maxb = *max_element(b.begin(), b.end());
        cout << maxa * maxb << endl;
    }
}
