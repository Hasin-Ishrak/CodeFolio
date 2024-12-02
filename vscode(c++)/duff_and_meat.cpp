#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll n,sum=0;
    cin>>n;
    vector<ll> a(n),p(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
    }
    ll m =LLONG_MAX;
    ll tc=0;
    for(ll j=0;j<n;j++)
    {
        if(m>p[j])
        {
            m=p[j];
        }
        tc += a[j]*m;
    }
    cout<< tc <<yo;

}