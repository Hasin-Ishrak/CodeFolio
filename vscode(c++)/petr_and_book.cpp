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
    cin >> n;
    vector<ll>v(7);
    for(ll i=0;i<7;i++)
    {
        cin >> v[i];
    }
    ll sum =0,in=0;

    while(sum<n)
    {
       sum+=v[in];
       in =(in+1)%7;
    }
    if(in==0)
    cout << 7 <<yo;
    else 
    cout << in << yo;
   
}