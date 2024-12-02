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
    string n ,a ,ans;
    cin >> n;
    a = n;
    reverse(a.begin(),a.end());
    ans = n + a;
    cout << ans;
}
