#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int d = k^(k>>1);
        cout<<d<<"\n";
    }
    return 0;
}
