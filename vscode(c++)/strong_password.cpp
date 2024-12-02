#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int time(const string &s)
{
  int tm =2;
  for(ll i =1;i<s.size();i++)
  {
    if(s[i]==s[i-1]) tm++;
    else tm+=2;
  }
  return tm;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        string s, a;
        cin >> s;
        int mxt = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            for (ll i = 0; i <= s.size(); i++) {
                string b = s.substr(0, i) + ch + s.substr(i);
                int tt = time(b);

                if (tt > mxt) {
                    mxt = tt;
                    a = b;
                }
            }
        }
      cout << a << yo;
    }
}