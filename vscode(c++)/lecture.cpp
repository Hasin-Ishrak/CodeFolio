#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
     fast;
     ll n , m;
     cin >> n >> m;
     map<string ,string > t;
     for(ll i =0;i<m ;i++)
     {
        string a ,b;
        cin >> a >> b;
        t[a]=b;
     }
     for(ll i=0;i<n;i++)
     {
        string c,d;
        cin >> c;
        d = t[c];
        if(d.size() < c.size())
        cout << d << " ";
        else cout << c <<" ";
     }
}