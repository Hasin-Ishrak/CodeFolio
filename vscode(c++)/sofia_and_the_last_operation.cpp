#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isvalid(vector<int> &a, vector<int> &b, vector<int> &d) {
    unordered_map<int, int> count;
    for(int value : d) {
        count[value]++;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            if(count[b[i]] > 0) {
                count[b[i]]--;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int m;
        cin >> m;
        vector<int> d(m);
        for(int i = 0; i < m; i++) {
            cin >> d[i];
        }
        if(isvalid(a, b, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
