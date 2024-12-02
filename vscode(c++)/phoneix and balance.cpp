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
        int a=n/2;
        int f=pow(2,n);
        for(int i=1;i<a;i++)
        {
            f=f+pow(2,i);
        }
        int s=0;
        for(int i=a;i<n;i++)
        {
            s=s+pow(2,i);
        }
        int d=f-s;
        cout<<d<<endl;
    }
}
