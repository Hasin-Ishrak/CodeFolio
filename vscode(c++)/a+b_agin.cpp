#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main() {
    fast;
    int t;
    cin >>t;
    while(t--)
    {
        int n ,sum=0;
        cin >>n;
        for(int i=0;i<2;i++)
        {
            sum+=n%10;
            n=n/10;
        }
        cout << sum <<yo;
    }
}