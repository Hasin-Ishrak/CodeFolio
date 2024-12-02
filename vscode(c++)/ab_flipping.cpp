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
       ll n,a=0,b=0;
       cin>>n;
       string s;
       cin>>s;
       for(ll i=0;i<n;i++)
       {
        if(s[i]=='B')
        {
          b++;
        }
        else{
            break;
        }
       }
       for(ll i =n-1;i>=0;i--)
       { 
        if(s[i]=='A')
        {
            a++;
        }
        else{
            break;
        }
       }
       ll ans =n-1;
       if(a+b==n)
       {
        cout<<0<<"\n";
       }
       else{
        cout<< ans-a-b << "\n";
       }

    }
}