#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll n , a ,one(0),zero(0),mzero(-1);
    cin >>n;
    while(n--)
    {
        cin >> a;
        if(a==1)
        {
            one++;
            if(zero>0)zero--;
        }

        else 
        {
            zero++;
            if(mzero<zero) mzero=zero;
        }
    }
    cout << one + mzero <<yo;
}