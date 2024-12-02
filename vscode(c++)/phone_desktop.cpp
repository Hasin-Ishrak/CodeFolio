#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x,y;

    cin>>x>>y;
    int ans=(y+1)/2,xx=0;
    if(y%2==1)
    {
        xx=(y/2)*7 +11;
    }
    else{
        xx=(y/2)*7;
    }
    if(x<xx)
    {
        cout<<ans<<endl;
    }
    else{
        int b= x-xx;
        cout<<ans+(b+14)/15<<endl;
    }
    }
}