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
    cin >>t;
    while(t--)
    {
        ll n, a ,b ,c ,d ;
        cin >> n >> a >> b >> c >> d;
        ll e = n * (a-b), f = n * (a+b);
        
        if(f < c-d || e > c+d)
        {
            cout <<"No"<<yo;
        }
        else 
        {
            cout <<"Yes"<<yo;
        }
    }
}
