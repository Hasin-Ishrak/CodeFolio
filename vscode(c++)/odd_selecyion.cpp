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
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, ev = 0, od = 0;
        cin >> n >> x;
        vector<int> v(n);

        for(auto& i : v)
        { 
            cin >> i;
            if(i % 2 == 0)
                ev++;
            else 
                od++;
        }

        bool possible = false;
        
        for(int i = 1; i <= x; i += 2) {
            if(i <= od && (x - i) <= ev) {
                possible = true;
                break;
            }
        }

        if(possible)
            cout << "Yes" << yo;
        else
            cout << "No" << yo;
    }
}