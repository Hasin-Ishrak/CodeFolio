#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),[](ll x,ll y){
            return x%2<y%2;
        }
        );
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
              ans+=__gcd(v[i],2*v[j])>1;
            }
        }
        cout<< ans <<yo;
    }
}