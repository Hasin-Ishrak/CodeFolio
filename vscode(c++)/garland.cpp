#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int cnt[10] = {0};

        for (int i = 0; i < s.size(); i++) {
            ++cnt[s[i] - '0'];
        }

        int mx = 0;
        for (int i = 0; i < 10; ++i) {
            if (cnt[i] > mx) {
                mx = cnt[i];
            }
        }

        if (mx == 4) {
            cout << -1;
        } else if (mx == 3) {
            cout << 6;
        } else {
            cout << 4;
        }
        cout<<"\n";
    }
}
