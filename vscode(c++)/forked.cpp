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
       ll a, b;
       cin >> a >> b;
       ll xk, yk;
       cin >> xk >> yk;
       ll xq, yq;
       cin >> xq >> yq;
       
       vector<pair<ll,ll>> dir = {{a,b},{a,-b},{-a,-b},{-a,b},
                                  {b,a},{-b,a},{-b,-a},{b,-a}};
        set<pair<ll,ll>> st1, st2;
        
        for(auto d : dir)
        {
            int x = xk + d.first;
            int y = yk + d.second;
            st1.insert(make_pair(x,y));

            int w = xq + d.first;
            int z = yq + d.second;
            st2.insert(make_pair(w,z));
        }
        
        int ans = 0;
        for(auto pos : st1)
        {
            if(st2.find(pos) != st2.end())
            {
                ans++;
            }
        }
        cout << ans << yo;
    }
}
