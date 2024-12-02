#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
       ll l, r ,p,q;
       cin >> l >> r >> p >>q;

       ll in = min(r,q) - max(l,p) +1;
       if(in>0)
       {
         ll a = in -1;
         if(l!=p)
         {
            a++;
         }
         if(r!=q)
         {
            a++;
         }
         cout << a <<yo;
       }
       else 
       {
        cout <<1 <<yo;
       }
    }
}