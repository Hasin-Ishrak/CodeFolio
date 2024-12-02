#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n;
    cin >> n;
    if (n==0)
    {
        cout << 1 << yo;
    }
    else if(n %4 == 0)
    {
        cout<< 6 << yo;
    }
    else if(n%4==1)
    {
        cout << 8 << yo;
    }
    else if(n%4==2)
    {
        cout << 4 << yo;
    }
    else if (n%4==3){
      cout << 2 << yo;
    }
}