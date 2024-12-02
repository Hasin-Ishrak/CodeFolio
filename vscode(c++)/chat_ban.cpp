#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
       ll x , k;
       cin >> k >> x;
       ll s = 1 , e = k * 2 -1 ;
       ll ans =1;
       while(s<=e)
       {
        ll mid = (s + e) / 2;
        ll sum ;
        if(mid<=k)
        {
            sum = (mid * (mid+1)) / 2 ;
        }
        else 
        {
            ll n = mid -k ;
            ll a = k - n -1;
            sum = ( k * (k-1) / 2 - (a * (a+1) )/2) + (k * (k+1))/2;
        }
        if (sum ==x)
        {
         ans = mid ;
         break;
        }
        else if (sum > x)
        {
            e = mid -1; 
        }
        else {
          ans = mid + 1 ;
          s = mid + 1; 
        }
       }
       ans = min (ans,2 *k -1);
       cout <<  ans << yo ;
    }
}