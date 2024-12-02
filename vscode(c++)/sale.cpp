
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        if(a[i]>=0)
        {
            break;
        }
        s+=a[i];
    }
    cout<<abs(s);
}
