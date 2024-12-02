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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int v[26]={0};
        for(auto c :s)
        {
            v[c-'a']++;
        }
        ll c=0;
        for(ll i=0;i<26;i++)
        {
            if(v[i]%2!=0)
            {
                c++;
            }
        }
        if((k+1)>=c)
        {
            cout<<"YES"<<yo;
        }
        else{
            cout<<"NO"<<yo;
        }

    }

}
