#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        vector<int>a=v;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]!=a[1])
            {
                cout<<i+1<<endl;
            }
        }

        }
    }

