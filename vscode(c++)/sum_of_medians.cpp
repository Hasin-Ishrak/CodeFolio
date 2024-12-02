#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 
        
        vector<int> arr(n * k);
        for (int i = 0; i < n * k; ++i) {
            cin >> arr[i]; 
        }
        
        ll sum = 0;
        
       ll div = n / 2;
        
        for (ll i = (n*k)- 1 - div, j = 0; j < k; i -= div + 1, ++j) {
            sum += arr[i];
        }

        cout << sum << "\n";
    }
}
