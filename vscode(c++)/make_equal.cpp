#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
    
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int d = 0;
        int target = sum / n;
        bool possible = true;
        for(int i = 0; i < n; i++) {
            if(a[i] + d < target) {
                possible = false; 
                break;
            } else {
                d += (a[i] - target); 
            }
        }
        if(possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
