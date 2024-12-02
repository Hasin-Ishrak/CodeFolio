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
    string s, a;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        ll d = s[i] - '0'; 
        if (i == 0 && d == 9)
        {
            a += '9'; 
        }
        else if (d > 4)
        {
            a += (9 - d) + '0'; 
        }
        else
        {
            a += s[i]; 
        }
    }
    cout << a; 
}