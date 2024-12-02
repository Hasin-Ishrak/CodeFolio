#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
#define pp pop_back()
const ll mod=1e6+123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string result;

        if (n % 2 != 0) {
            result += '7';
            n -= 3;
        }
        for (ll i = 0; i < n / 2; ++i) {
            result += '1';
        }
        
        cout << result << yo;
    }
}
