#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    char ch;
    string s1 = "qwertyuiopasdfghjkl;'zxcvbnm,./", s2, s3;

    cin >> ch;
    cin >> s2;
   
    if (ch == 'R') {
        for (int i = 0; i < s2.length(); ++i) {
            for (int j = 0; j < s1.length(); ++j) {
                if (s2[i] == s1[j]) {
                    if (j > 0) { 
                        s3 += s1[j - 1];
                    }
                    break; 
                }
            }
        }
    } else if (ch == 'L') {
        for (int i = 0; i < s2.length(); ++i) {
            for (int j = 0; j < s1.length(); ++j) {
                if (s2[i] == s1[j]) {
                    if (j < s1.length() - 1) { 
                        s3 += s1[j + 1];
                    }
                    break;
                }
            }
        }
    }

    cout << s3 << "\n";

}
