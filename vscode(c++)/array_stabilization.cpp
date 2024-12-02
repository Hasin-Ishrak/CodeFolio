#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;

    ll n;
    cin>>n;
    
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    
    ll ans =min (a[n-1]-a[1],a[n-2]-a[0]);
    cout<< ans << "\n";
}