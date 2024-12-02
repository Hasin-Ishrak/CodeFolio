#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=1,k=1;
        cin>>n;

        while(true)
        {
            sum+=pow(2,k++);

            if(n%sum==0)
            {
                cout<<n/sum<<"\n";
                break;
            }
        }

    }
}