#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
      ll n;
      cin >> n;
      for(ll i =0;i<20;i++)
      {
        if(n%11==0)
        {
            cout <<"YES" <<yo;
            goto done;
        }
        n-=111;
        if(n<0)
        break;
      }
      cout <<"NO" <<yo;  
      done:; 
    }
}
