#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int low = 0, high = 1e9;

        while (low < high) {
            int mid = (low + high + 1) / 2;
            bool found = false;

            for (int i = 0; i < n; i++) {
                if (b[i] == 1 && a[i] + k >= mid) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                int needed = (n + 1) / 2;
                int sum = 0;
                
                for (int i = 0; i < n; i++) {
                    if (b[i] == 0 && a[i] + k >= mid) {
                        needed--;
                    } else if (b[i] == 1) {
                        sum += max(0, mid - a[i]);
                    }
                }
                
                if (needed <= 0 || sum <= k) {
                    found = true;
                }
            }

            if (found) {
                low = mid; // mid is achievable, try for a higher value
            } else {
                high = mid - 1; // mid is too high, try lower
            }
        }

        cout << low << yo; // Output the maximum achievable mid value
    }

    return 0;
}