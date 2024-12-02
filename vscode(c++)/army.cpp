#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> a[i];
    }
    int c, b;
    cin >> c >> b;
    int ans = 0;
    c--; 
    b--;
    for (int j = c; j < b; j++) 
    {
        ans += a[j];
    }

    cout << ans ;
}
