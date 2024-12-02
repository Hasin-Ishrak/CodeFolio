#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d, b,n,c=0;
    cin>>n;
    long long  a[n];
    for(int  i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        b=a[n-1];
        if(a[i]==b)
        {
           d=a[i-1];
           break;
        }   
    }for(int i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            c++;
        }
    }


    cout<<c;
}