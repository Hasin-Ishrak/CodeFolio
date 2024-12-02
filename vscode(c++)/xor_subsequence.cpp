#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main()
{
    fast;
    
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        int xorxy = x ^ y;

        int l=1;

        while(xorxy %2 ==0)
        {
            xorxy >>= 1;
            l <<= 1 ;
        }
        cout<< l << "\n";

    }

}