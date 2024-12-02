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
        int a,b,c;
        cin>>a>>b>>c;
        int a1=0,b1=0,c1=0;
        if((b&1)==(c&1))
        {
            a1=1;
        }
        if((a&1)==(c&1))
        {
            b1=1;
        }
        if((a&1)==(b&1))
        {
            c1=1;
        }
        cout<<a1<<" "<<b1<<" "<<c1<<yo;
    }
}