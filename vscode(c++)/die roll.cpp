#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a=max(x,y);
     a=7-a;
    int d=6;
    if(a==6)
    {
        a/=6;
        d/=6;
    }
    else if(a==4)
    {
        a/=2;
        d/=2;
    }
    else if(a==3)
    {
        a/=3;
        d/=3;
    }
    else if(a==2)
    {
        a/=2;
        d/=2;
    }
    cout<<a<<"/"<<d<<endl;
}
