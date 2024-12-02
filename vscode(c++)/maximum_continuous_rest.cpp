#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    int r=0;
    for(int i=0;i<2* n;i++)
    {
        if(v[i%n]==1)
        {
            r++;
            ans = max(ans,r);
        }
        else{
            r=0;
        }
    }
    cout<< ans<< "\n";
}