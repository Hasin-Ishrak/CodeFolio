#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a,ll b) {return __gcd(a,b);}
ll lcm(ll a,ll b) {return (a*b)/__gcd(a,b);}
const ll mod=2e5+123;
ll t,n;
string s ;
int main() {
    fast;
    prb;
    cin >> t;
    while(t--)
    {
        ll a ,sum=0;
        cin >> n >> a ;
        for(ll i =0;i<n;i++)
        {
            ll c;
            cin >> c;
            sum = max(sum,c);
        }
        while(a--)
        {
            char ch;
            ll e ,f ;
            cin >> ch >> e >>f;
            if(e<=sum && sum<=f)
            {
                if(ch=='-')
                { sum--;}
                else {sum++;}
            }
            cout << sum << " ";
        }
        cout << el;  
    }
}