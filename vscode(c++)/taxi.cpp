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
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0, two = 0, three = 0, four = 0, ans = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) one++;
        else if(a[i] == 2) two++;
        else if(a[i] == 3) three++;
        else four++;
    }
    ans += four;
    ans += three; 
    one -= min(one, three); 
    ans += two / 2;
    if (two % 2 == 1) { 
        ans++; 
        one -= min(one, 2); 
    }
    if (one > 0) {
        ans += (one + 3) / 4;
    }
    cout << ans << yo;
}
