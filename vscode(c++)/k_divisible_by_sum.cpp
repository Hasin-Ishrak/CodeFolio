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
    ll t;
    cin>> t;
    while(t--)
    {
      ll n , k ;
      cin >> n >> k;
      ll ans = ( n + k -1) / k;
      k = k * ans ;
      cout << ( n + k -1)/n << yo;
    }
}