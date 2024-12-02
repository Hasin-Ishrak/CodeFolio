#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll ans = n - n % k;
        cout<< ans + min( n % k, k /2) << "\n";
    }
}   