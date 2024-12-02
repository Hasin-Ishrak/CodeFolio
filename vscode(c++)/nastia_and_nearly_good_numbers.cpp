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
    ll t ;
    cin >> t;
    while(t--)
    {
        ll a , b;
        cin >> a >> b ;
        if(b==1 )
        {
            cout << "NO" << yo;
        }
        else{
            cout << "YES" <<yo;
            cout << a << " " << (a*b) << " " << a * (b + 1) << yo;
        }
    }
}