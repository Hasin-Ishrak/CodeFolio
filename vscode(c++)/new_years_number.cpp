#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool l = false;

        if (n >= 2020) {
            for (int i = 0; i * 2020 <= n; ++i) {
                for (int j = 0; j * 2021 <= n; ++j) {
                    if (i * 2020 + j * 2021 == n) {
                        l = true;
                        break;  
                    }
                }
                
            }
        }

        if (l) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
