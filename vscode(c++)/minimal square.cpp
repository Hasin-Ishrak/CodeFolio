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
        if(a<b)
        {
            a=2*a;
        }
        else
        {
            b=2*b;
        }
        int area=max(a,b)*max(a,b);
        cout<<area<<endl;
    }
}
