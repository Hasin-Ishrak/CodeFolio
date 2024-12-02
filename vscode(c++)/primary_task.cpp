#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool ans = false;
        if(s.size()>=3)
        {
            if(s[0]=='1' &&s[1]=='0' && ( s[2]>='2' || (s.size()>=4 && s[2]>='1')))
            {
                ans=true;
            }
        }

        if(ans)
            cout << "YES" << yo;
        else 
            cout << "NO" << yo;
    }
}