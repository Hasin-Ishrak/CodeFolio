#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
#define pp pop_back()
const ll mod=1e6+123;
bitset<mod>a;
vector<ll>p;

int main()
{
    fast;
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ll cn;
        ll m=INT_MAX;

        for(ll i=1 ; i<=10 ; i++)
        {
            cn=abs(a-i)+abs(b-i)+abs(c-i);
            if(m>cn) m=cn;
        }
        cout<<m<<yo;
    }
}