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
        int a[n];
        int c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c++;
            }
            else{
                ans=max(ans,c);
                c=0;
            }
    }
    cout<<max(ans,c)<<endl;

    }
}