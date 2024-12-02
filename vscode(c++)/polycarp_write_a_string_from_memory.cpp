#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int days = 1;
        unordered_set<char> unique_chars;

        for (char ch : s) {
            unique_chars.insert(ch);
            if (unique_chars.size() > 3) {
                days++;
                unique_chars.clear();
                unique_chars.insert(ch);
            }
        }

        cout << days << endl;
    }
}
