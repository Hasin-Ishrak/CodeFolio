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
        bool k = true ;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];

            if(v[i]<=n)
            {
                k = false;
            }
        }

        if(!k)
        {
            cout<< -1 << "\n";
        }

        else{
            for(int i=0;i<n;i++)
            {
                cout << 1 << " ";
            }
            cout<< "\n";
        }
        
    }
}   