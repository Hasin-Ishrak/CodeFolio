#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    int n, t;
    cin >> n >> t;
    string result;

    if (t == 10) {
        if (n == 1) {
            cout << "-1" << yo;
            return 0;
        } else {
            result = string(n - 1, '1') + '0';
        }
    } else {
        result = string(n, '0' + t);
    }
    cout << result << yo;
}
