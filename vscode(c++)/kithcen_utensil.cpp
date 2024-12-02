#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
   fast;
   ll n,k;
   cin>>n>>k;
   vector<ll>u(n);
   unordered_map<ll,ll>uc;
   for(ll i=0;i<n;i++)
   {
    cin>>u[i];
    uc[u[i]]++;
   }
   ll mc=0;
   for(const auto& [type,count]:uc)
   {
    if(count>mc)
    {
        mc=count;
    }
   }
   ll dish=(mc+k-1)/k;
   ll total =dish * k* uc.size();
   cout<< total -n<<yo;
}