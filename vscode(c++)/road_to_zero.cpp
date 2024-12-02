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
      ll x , y ;
      cin >> x >> y ;
      ll a , b;
      cin >> a >> b;
       b = min ( b , 2 *a);
      if( x < y)
      {
        swap(x,y);
      }
      cout <<( y * b)+ (( x - y) * a )<< yo;
    }
}