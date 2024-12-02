#include<bits/stdc++.h>
using namespace std;

int main() {
    int ar[4];
    int c=0;
    for(int i=0; i<4; i++) {
        cin >> ar[i];
    }

    string s;
    cin >> s;

    for(int j=0; j<s.size(); j++) {
        if(s[j] == '1') {
            c += ar[0];
        }
        else if(s[j] == '2') {
            c += ar[1];
        }
        else if(s[j] == '3') {
            c += ar[2];
        }
        else {
            c += ar[3];
        }
    }

    cout << c;
}
