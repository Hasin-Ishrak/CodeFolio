#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n, c = 0;
       cin >> n;
       string s;
       cin >> s;

       for (ll i = 0; i < n - 2; i++)
       {
           if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie") {
               c++;
               i += 2; 
           }

           else if (i < n - 3 && (s.substr(i, 4) == "mapie" || s.substr(i, 4) == "piemap")) {
               c++;
               i += 3; 
           }
       }

       cout << c << yo;
    }
}
