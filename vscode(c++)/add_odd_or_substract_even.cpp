#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t ;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >>a >>b;
        
        if(a==b) cout << 0 <<yo;

        else if(a>b && (a-b)%2==0) cout << 1 << yo; 

        else if(a<b && (a-b)%2 !=0) cout << 1 <<yo;
    
        else cout << 2 <<yo;
    }
}