#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p=100005;

int main() {
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=-1,o=0;
        cin>>n;
        for( int i =0;i<n;i++)
        {
            int x,y;
            cin >>x>>y;
            if(y>o && x<=10)
            {
                m=i+1;
                o=y;
            }
        }
      cout << m <<yo;
    }
}