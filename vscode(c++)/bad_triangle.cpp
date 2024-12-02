#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
     
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }

        if(a[0] + a[1] <= a[n-1] )
        {
            cout<< 1 << " "<< 2 << " "<< n<< endl;
        }
        else{
            cout<< -1 << endl;
        }
    }
}