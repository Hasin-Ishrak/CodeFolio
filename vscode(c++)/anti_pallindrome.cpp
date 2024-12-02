#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
int main() {
    fast;
    prb;
    ll t;
    cin >>t;
    while(t--)  
    { 
        int n, q; 
        cin >> n >> q;  // Input the size of the array and number of queries
        vector<int> a(n + 1);  // Array to store values
        
        // Reading the array elements (1-based indexing)
        for(int i = 1; i <= n; i++)  
        { 
            cin >> a[i]; 
        } 
        
        // Arrays to count the number of 1s, 2s, and 3s at each index
        vector<int> c1(n + 1, 0), c2(n + 1, 0), c3(n + 1, 0); 
        
        // Fill the prefix sum arrays
        for(int i = 1; i <= n; i++)  
        { 
            c1[i] = c1[i - 1] + (a[i] == 1); 
            c2[i] = c2[i - 1] + (a[i] == 2); 
            c3[i] = c3[i - 1] + (a[i] == 3); 
        } 
        
        // Processing each query
        while(q--)  
        { 
            int l, r; 
            cin >> l >> r;  // Input range [l, r]
            int m = r - l + 1;  // Length of the subarray
            
            // If the length of the subarray is odd, answer is "No"
            if(m % 2 != 0)  
            { 
                cout << "No" << endl; 
                continue; 
            } 
             
            int k = m / 2;  // Half of the subarray size
            
            // Count the occurrences of 1s, 2s, and 3s in the subarray [l, r]
            int count1 = c1[r] - c1[l - 1]; 
            int count2 = c2[r] - c2[l - 1]; 
            int count3 = c3[r] - c3[l - 1]; 
            
            // Check if any of the counts are greater than or equal to half of the subarray size
            if(count1 >= k || count2 >= k || count3 >= k) 
            {
                cout << "Yes" << endl;
            }
            else 
            {
                cout << "No" << endl;
            }
        } 
    } 
}