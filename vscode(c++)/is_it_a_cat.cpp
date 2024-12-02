#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;
    while (t--) {
        string s, p;
        cin >> s;
        p = s;
        transform(p.begin(), p.end(), p.begin(), ::tolower);

        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == 'm') {
                a++;
            }
            if (p[i] == 'e') {
                b++;
            }
            if (p[i] == 'o') {
                c++;
            }
            if (p[i] == 'w') {
                d++;
            }
        }

        if (a > 0 && b > 0 && c > 0 && d > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
