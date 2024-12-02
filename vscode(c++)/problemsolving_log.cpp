#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        vector<int> a(27); 

        for (int i = 0; i < n; i++) {
            a[s[i] - 'A']++;
            if (a[s[i] - 'A'] == (s[i] - 'A' + 1)) {
                c++;
            }
        }
        cout << c << endl;
    }
}
