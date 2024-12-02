#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int a = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (a >= t.size())
            {
                break;
            }
            if (s[i] == t[a])
            {
                a++;
            }
            else if (s[i] == '?')
            {
                s[i] = t[a];
                a++;
            }
        }
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'a';
            }
        }

        if (a >= t.size())
        {
            cout << "YES" << yo;
            cout << s << yo;
        }
        else
        {
            cout << "NO" << yo;
        }
    }
}
