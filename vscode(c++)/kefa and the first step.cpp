#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1<<"\n";
        return 0;
    }
    int c =1;
    int maxcount=0;
    for(int i =0; i<n-1 ; i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
        }
        else
        {
            c=1;
        }

        if(c>maxcount)

        {
            maxcount =c;

        }
    }

    cout<<maxcount<<"\n";
    return 0;
}
