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
        string ans;
        vector<ll>f(26,-1),tr(n);
        for(ll i=0;i<n;i++)
        {
            cin>>tr[i];
            for(char j ='z';j>='a';j--)
            {
                if(f[j-'a']==tr[i]-1)
                {
                    f[j-'a']++; 
                    ans+=j;
                   break;
                }
            }
        }
        cout<<ans<<yo;
    }
}