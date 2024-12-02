#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n,g(0);
    cin >> n;
    string t,w;

    while(n--)
    {
       if(g != 0)
       {
        cin>>t;
        if(t==w)
        {
            g++;
        }
        else{
            g--;
        }
       }
       else{
        cin>>w;
        g=1;
       }
    }
     cout<< w <<yo;
}
