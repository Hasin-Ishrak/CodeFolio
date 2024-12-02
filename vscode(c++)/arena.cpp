#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int minele=a[0];

        for(int i=1;i<n;i++)
        {
            if(minele>a[i])
            {
                minele=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(minele==a[i])
            {
                c++;
            }
        }  cout<<n-c<<endl;

    }
}