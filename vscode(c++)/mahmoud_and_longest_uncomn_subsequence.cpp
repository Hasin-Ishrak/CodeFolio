#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int ans(const string& s ,const string& p)
{
  if(s==p)
  {
    return -1;
  }
  else 
  {
    return max(s.length(),p.length());
  }
}

int main()
{
    fast;
    string a , b;
    cin >> a >> b;
    cout << ans(a,b) <<yo;
}