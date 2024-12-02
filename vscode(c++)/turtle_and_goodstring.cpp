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
        ll n;
        cin >>n ;
        string s ;
        cin >>s;
        if(s[0]==s[n-1])
        {
            cout <<"NO"<<yo;
        }
        else 
        {
            cout <<"YES" <<yo;
        }
    }
}