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
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll>v(n);
       ll sum=0;
       for(ll i=0; i<n; i++)
       {
         cin>>v[i];
       }
      ll max=v[0],f=0;
      for(ll i=0; i<n; i++)
      {
            sum+=v[i];
         if(i==0 && v[i]==0)f++;
           if(v[i]>=max)max=v[i];
            if(sum-max==max && i>0)f++;
      }
      cout<<f<<yo;
    }

}