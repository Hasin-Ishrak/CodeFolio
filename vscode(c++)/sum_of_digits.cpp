#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

ll digitSum(const string &n) {
    ll sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    return sum;
}

int countToSingleDigit(string n) {
    int count = 0;
    while (n.size() > 1 || (n.size() == 1 && n[0] > '9')) {
        n = to_string(digitSum(n));
        count++;
    }
    return count;
}

int main() {
    fast;
    prb;

    string n;
    cin >> n;

    int c = countToSingleDigit(n);

    cout << c << yo;
}
