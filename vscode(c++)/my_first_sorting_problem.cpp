#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=min(a,b);
        int d=max(a,b);
        cout<<c<<" "<<d<<endl;
    }
}