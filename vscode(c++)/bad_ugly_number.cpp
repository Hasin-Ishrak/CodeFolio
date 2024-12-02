#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

string ans(ll n) {
    string result = "2";
    result.append(n-1, '3'); 
    return result;
}

int main()
{
    fast ;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       if(n==1)
       {
        cout << -1 << yo;
       }
       else 
       {
        cout << ans(n) <<yo;
       }
    }
}