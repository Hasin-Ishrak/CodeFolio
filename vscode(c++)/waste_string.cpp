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
      ll a,b,c;
      cin>>a>>b>>c;
      ll d,e,f,g,h;
      cin>>d>>e>>f>>g>>h;
      bool gg =true;
      if(d>a  || e>b || f>c)
      {
        gg=false;
      }
      else
      {
        ll ra=a-d;
        ll rb=b-e;
        ll rc=c-f;

        ll gina=g;
        if(g>ra)
        {
            gina=ra;
        } 
        ll hinb=h;
        if(h>rb)
        {
            hinb=rb;
        }  
        ll rg= g-gina;
        ll rh = h-hinb;  
        if(rc<rg+rh)
        {
            gg=false;
        }   
      }
      if(gg)
      {
        cout<<"YES"<<yo;
      }
      else{
        cout <<"NO"<<yo;
      }
    }
}