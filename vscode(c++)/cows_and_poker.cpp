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
    ll n ;
    cin >> n ;
    string s ;
    cin >> s;
    ll a =0,in=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='A')
        a++;
        else if(s[i]=='I')
        in++;
    }
    if(in==0 )
    cout << a <<yo;
    else if(in>1)
    cout << 0 <<yo;
    else 
    cout << 1 <<yo;
}