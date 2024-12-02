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
    ll t ;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin >> n ;
        vector<ll>a(n);
        set<ll>s;
        s.insert(0);
        bool ans =false;
        for(ll i =0;i<n ;i++)
        {
            cin >> a[i];
            if(i%2==0)
            {
                a[i] *= -1;
            }
            sum +=a[i];
            if(s.find(sum) != s.end())
            {
                ans = true;
            }
            s.insert(sum);
        }
        if(ans)
        {
            cout << "YES"<<yo;
        }
        else{
            cout << "NO" << yo ;
        }
    }
}