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
      cin>>n;
      string s;
      cin>>s;
      string p=s;
      reverse(p.begin(),p.end());
      cout<< min(s,p+s) << yo;
    }
}