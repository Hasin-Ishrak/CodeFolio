#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       ll x = a * d , y = b * c ;
       if(x == y)
       {
        cout<< '0' <<yo;
       }
       else if(x != 0 && y % x == 0 || y != 0 && x % y == 0)
       {
        cout <<'1'<< yo;
       }
       else{
        cout<< '2' << yo;
       }
    }
}