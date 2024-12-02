#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,k,x,y,n;
        cin>>x>>y>>n;
        p=(n-y)/x;
        k=(p*x)+y;
        cout<<k<<endl;
    }
}
