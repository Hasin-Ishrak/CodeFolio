#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
      char ch[n][m];
      ll x=0,y=0,c=0;
      for(ll i =0;i<n;i++)
      {
        for(ll j=0;j<m;j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='#')
            {
                x+=(i+1);
                y+=(j+1);
                c++;
            }
        }
      }
      ll a = x/c;
      ll b = y / c;

      cout << a << " "<< b<<"\n";
    }
}