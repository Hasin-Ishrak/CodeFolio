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
        ll n;
        cin >> n;
        ll a =0 ;
        if(n%4==0) 
        a = n/4;
        else if(n%4==2) a= n/4 +1;
        else a = n/2;
        cout << a <<yo;
    }
}