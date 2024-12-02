#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    int n ;
    cin >> n;

    for(int j = -n ; j<=n ;j++)
    {
        int t = n - abs(j);

        for(int i =0;i<abs(j);i++)
        {
            cout <<"  ";
        }

        for(int i =0;i<t;i++)
        {
            cout << i << " ";
        }

        for(int i =t;i>0;i--)
        {
            cout << i << " ";
        }
        cout << 0 << yo;
    }
}