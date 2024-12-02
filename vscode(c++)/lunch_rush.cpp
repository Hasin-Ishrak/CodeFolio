#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
#define pp pop_back()
const ll mod=1e6+123;
bitset<mod>a;
vector<ll>p;

int main()
{
    fast;
    ll n,k;
    cin>>n>>k;
    ll maxj = -1000000000;
    for(ll i=0;i<n;i++)
    {
        ll f,t;
        cin>>f>>t;
        ll joy;
        if(t<=k)
        {
           maxj=max(maxj,f);
        }
        else{
            maxj = max(maxj,(f-(t-k)));
        }
      
    }
    cout<< maxj<<yo;
}