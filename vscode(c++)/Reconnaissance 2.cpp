#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    int first=0,second=n-1;
    int mn=abs(ar[0]-ar[n-1]);
    for(int i=0;i<n;i++)
    {
        int nm=abs(ar[i]-ar[i+1]);
        if(nm<mn)
        {
            first=i;
            second=i+1;
            mn=nm;
        }
    }
    cout<<first+1<<" "<<second+1;
}
