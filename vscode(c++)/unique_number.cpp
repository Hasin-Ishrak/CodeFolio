#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>v;
        int sum=0,l=9;
        while(sum<n && l>0)
        {
            int a = min(n-sum,l);
            v.pb(a);
            sum+=a;
            l--;
        }
        if(sum<n)
        {
            cout<<-1<<"\n";
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<"\n";
        }
    }
}