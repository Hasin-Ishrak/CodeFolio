#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    prb;
    int x,y;
    cin >> x >>y;
    if(x<y)
    {
        if(y-x<=2) cout <<"Yes";
        else cout <<"No";
    }
    else 
    {
        if(x-y<=3) cout <<"Yes";
        else  cout <<"No";
    }
}