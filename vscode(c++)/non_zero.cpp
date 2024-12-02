#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, zero= 0, s = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 0) {
                zero++;
            }
        }

        s = zero; 
        sum += zero;  

        if (sum == 0) {
            s++;
        }

        cout << s<< endl;
    }
}
