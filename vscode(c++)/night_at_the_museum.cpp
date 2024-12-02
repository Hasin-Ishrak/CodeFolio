#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    string s;
    cin >>s;
    char c = 'a';
    ll ans=0;
    for(ll i=0;i<s.size();i++)
    {
        ll a = abs(c-s[i]);
        ll b = 26 - abs(a);
        ans+=min(a,b);
        c = s[i];
    }
    cout << ans;
}