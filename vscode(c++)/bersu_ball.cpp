#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
     fast;
     ll n ,m,c(0) ;

     cin >> n ;
     vector<ll>a(n);
     for(ll i=0;i<n;i++) cin >> a[i];

     cin >> m ;
     vector<ll>b(m);
     for(ll i=0;i<m;i++) cin >> b[i];

     sort(a.begin(),a.end());
     sort(b.begin(),b.end());

     for(ll i =0;i<n;i++)
     {
        for(ll j =0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
            b[j]=1000;
            c++;
            break;
            }
        }
     }
     
     cout << c<<yo;
}