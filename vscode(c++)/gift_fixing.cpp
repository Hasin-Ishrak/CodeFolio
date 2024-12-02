#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p=100005;

int main() {
    fast;
    ll t ;
     cin >>t ;
     while(t--)
     {
        ll n;
        cin >> n;
        vector<ll>a(n),b(n);
        for(ll i =0 ;i <n;i++)
        {
            cin >> a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin >> b[i];
        }
        ll mna = *min_element(a.begin(),a.end());
        ll mnb = *min_element(b.begin(),b.end());
        ll ans =0;
        for(ll i=0;i<n;i++)
        {
            ans += max(a[i]-mna,b[i]-mnb);
        }
       cout << ans <<yo;
     }
}