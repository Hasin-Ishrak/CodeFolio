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
        ll a,b,c;
        cin>>a>>b>>c;

        if((2*b-c>0) && (2*b-c)%a==0)
        {
            cout<<"YES"<<yo;
        }
        else if((a+c)%(2*b)==0)
        {
            cout<<"YES"<<yo;
        }
        else if((2*b-a>0) && (2*b-a)%c==0)
        {
            cout<<"YES"<<yo;
        }
        else{
            cout<<"NO"<<yo;
        }
    }
}