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
    ll  a, b,k;
    cin >> a >> b >> k;
    
    if(a>=k)
    {
        cout << a-k << " " << b <<yo;
    }
    else 
    {
        ll t = k-a;
        cout << 0 <<" " << max(0LL,b-t) <<yo;
    }
}