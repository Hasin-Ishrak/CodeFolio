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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c=1,ans=1;
        for(ll i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
            {
                c=1;
            }
            else{
                c++;
            }
            ans= max(ans,c);
        }
        cout << ans+1 <<"\n";  
    }
}
