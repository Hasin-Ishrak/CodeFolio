#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    string s ;
    cin >> s;
    ll t ;
    cin >> t;
    vector<ll>dp(s.size(),0);
    ll ans =0;

        for(ll i=1;i<s.size();i++)
        {
          if(s[i]==s[i-1]) ans++; 
          dp[i]=ans;
        }
    while(t--)
    {
        ll a ,b;
        cin >>a >>b;
        cout << dp[b-1] - dp[a-1] << yo;
    }
}