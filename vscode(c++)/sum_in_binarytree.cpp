#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

ll bst(ll n)
{
    ll sum =0;

    while(n>0)
    {
        sum+=n;
        n/=2;
    }
    return sum;
}

int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << bst(n) <<yo;
    }
}