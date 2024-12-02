#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    ll n , a,b;
    cin >> n;
    set<ll>heap;
    while(n--)
    {
        cin >> a ;
        if(a==1)
        {
            cin >> b;
            heap.insert(b);
        }
        else if(a==2)
        {
            cin >> b;
            heap.erase(b);
        }
        else if(a==3)
        {
            if(!heap.empty())
            {
                cout << *heap.begin()<<yo;
            }
        }
    }
}