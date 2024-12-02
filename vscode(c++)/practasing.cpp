#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0)
    {
        int pd=n%2;
        ans+=pd*pow;
        pow*=10;
        n/=2;
    }
    cout<<ans;
    return 0;
}
