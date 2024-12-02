#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
      
      int c = INT_MAX;
      for(int i=0;i<n-1;i++)
      {
        int ans = max (v[i],v[i+1]);
        c = min(c,ans);
      }

      cout<< c-1<<"\n";
    }
}