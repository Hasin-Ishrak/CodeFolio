#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string repeatedYes = "";
    for (int i = 0; i < 20; i++) {
        repeatedYes += "Yes";
    }

    while (t--) {
        string s;
        cin >> s;
        if (repeatedYes.find(s) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
