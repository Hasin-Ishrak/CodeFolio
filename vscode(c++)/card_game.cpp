#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

bool ans(int s_card1, int s_card2, int l_card1, int l_card2) {
    int swr = 0;
    int slr = 0;
    if (s_card1 > l_card1) swr++;
    else if (s_card1 < l_card1) slr++;

    if (s_card2 > l_card2) swr++;
    else if (s_card2 < l_card2) slr++;

    return swr > slr;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int win = 0;
        int e[] = {a1, a2};
        int d[] = {b1, b2};
        for (int s1 = 0; s1 < 2; s1++) {
            for (int s2 = 0; s2 < 2; s2++) {
                if (s1 == s2) continue;
                for (int l1 = 0; l1 < 2; l1++) {
                    for (int l2 = 0; l2 < 2; l2++) {
                        if (l1 == l2) continue; 
                        if (ans(e[s1], e[s2], d[l1], d[l2])) {
                            win+=1;
                        }
                    }
                }
            }
        }

        cout << win << yo;
    }

}
