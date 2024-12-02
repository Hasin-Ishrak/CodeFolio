#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    unordered_set<int>seen;
    vector<int>r;
     for(int i=n-1;i>=0;i--)
     {
        if(seen.find(a[i])==seen.end())
        {
            r.push_back(a[i]);
            seen.insert(a[i]);
        }
     }

     reverse(r.begin(),r.end());

     cout<<r.size()<<endl;

     for(int i=0;i<r.size();i++)
     {
        cout<<r[i]<<" ";
     }
}