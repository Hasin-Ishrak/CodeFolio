#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n,sum=0,one=0;
       cin>>n;
       vector<ll>v(n);
       for(ll i=0;i<n;i++)
       {
        cin>>v[i];
        sum+=v[i];
        if(v[i]==1)
        {
            one++;
        }
       }
       if(sum>=one+n && n>1)
       {
        cout<< "YES" << "\n";
       }
       else{
        cout << "NO" << "\n";
       }

    }
}