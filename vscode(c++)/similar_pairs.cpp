#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--) {
        ll n,ev=0,od=0;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2==0) ev++;
            else od++;
        }
        if(ev%2!=od%2)
        {
            cout <<"NO"<<yo;
        }
        else 
        {
            if(ev%2==0)
            {
                cout <<"YES" <<yo;
            }
            else {
                sort(a.begin(),a.end());
                bool ans = false;
                for(ll i=0;i<n-1;i++)
                {
                    if(abs(a[i]-a[i+1])==1)
                    {
                        ans=true;
                        break;
                    }
                }
                if(ans) cout<< "YES" <<yo;
                else cout <<"NO" <<yo; 
            }
        }
        
    }
}
