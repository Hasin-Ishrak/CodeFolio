#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

ll ans(vector<ll>& c ,ll t)
{
    ll left=0 , right = c.size()-1;
    while (left<=right)
    {
       ll mid = left+(right-left)/2;
       if(c[mid]<=t)
       {
        left=mid+1;
       }
       else 
       {
        right = mid-1;
       }
    }
  return left;
}

int main()
{
    fast;
    prb;
    ll n ,m ;
    cin >> n >> m ;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i =0;i<m;i++)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    for(auto& t :b)
    {
        ll count = ans(a,t);
        cout << count<<" ";
    }
}