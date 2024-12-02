#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    ll n,b=0,m=0;
    cin>>n;
    vector<ll>v(12);
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
    }
    if(n==0)
    {
        cout<< 0<<"\n";
        return 0;
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(int i=0;i<12;i++)
    {
        b+=v[i];
        m++;
        if(b>=n)
        {
            cout<< m << "\n";
            return 0;
        }
    }
    cout<< -1 <<"\n";
    return 0;
   
}