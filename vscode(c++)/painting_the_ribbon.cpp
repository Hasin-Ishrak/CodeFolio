#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m,k;
    cin>>n>>m>>k;
    ll mc = ((n+m)-1)/m;
    if(mc + k >=n)
    {
        cout<< "NO"<< "\n";
    }
    else{
        cout << "YES" << "\n";
    }
    }
}
