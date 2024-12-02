#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        int x ,y , k;
        cin >> x >> y >> k;
        
        for(int i =0;i<k/2;i++)
        {
            cout << x <<" " << y+i+1 << yo;
            cout << x << " "<< y-i-1 <<yo;
        }
        if(k&1)
        {
            cout <<x <<" "<<y << yo;
        }
    }
    
}