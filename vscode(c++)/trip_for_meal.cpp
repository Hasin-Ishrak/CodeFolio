#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
   fast;
   ll n,a,b,c;
   cin>>n;
   cin>>a;
   cin>>b;
   cin>>c;
   ll e= min(a,min(b,c));
   if(e==a || e==b || n==1 )
   {
    cout<< min(a,b)*(n-1)<<yo;
   }
   else{
    cout<< min(a,b)+ c * (n-2)<<yo;
   }
}