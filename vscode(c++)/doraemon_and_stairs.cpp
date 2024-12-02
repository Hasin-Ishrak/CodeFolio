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
    ll n,m;
    cin >> n >> m;
    ll a = (n+1)/2;
    ll ans = (a + m -1) / m*m;
    if(ans>n)
    {
        cout << -1 <<yo;
    }
    else{
        cout<< ans << yo;
    }

}