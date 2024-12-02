#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
   fast;
   ll n,a,b=0;
   cin>>n>>a;
   vector<ll>v(n);
   for(ll i=0;i<n;i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   for(ll i=n-1;i>=0;i--)
   {
    if(a%v[i]==0)
    {
      b=v[i];
      break;
    }
   }
   cout<< a/b <<yo;
}