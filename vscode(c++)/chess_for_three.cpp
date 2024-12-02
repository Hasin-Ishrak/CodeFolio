#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {   
        int a,b,c;
        cin>>a>>b>>c;
        int tp=a+b+c;
        if(tp%2==1)
        {
            cout<< -1 << yo;

        }
        else{
            cout<< (tp - max(0,c-b-a))/2 << yo;
        }
    }
}
