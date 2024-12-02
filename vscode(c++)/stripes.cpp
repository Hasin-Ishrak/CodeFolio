#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        char ch[8][8];
        bool RedRow = false;
        bool BlueCol = false;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> ch[i][j];
            }
        }

        for (int i = 0; i < 8; i++) {
            bool isRedRow = true;
            for (int j = 0; j < 8; j++) {
                if (ch[i][j] != 'R') {
                    isRedRow = false;
                    break;
                }
            }
            if (isRedRow) {
                RedRow = true;
                break;
            }
        }

        
        for (int j = 0; j < 8; j) {
            bool isBlueCol = true;
            for (int i = 0; i < 8; i++) {
                if (ch[i][j] != 'B') {
                    isBlueCol = false;
                    break;
                }
            }
            if (isBlueCol) {
                BlueCol = true;
                break;
            }
        }

        if (RedRow) {
            cout << 'R' << "\n";
        } else  {
            cout << 'B' << "\n";
        }
    }
}
