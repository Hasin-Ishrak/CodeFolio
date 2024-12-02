#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    int a ,b ,c ,n,x,y,z;
    cin >>n >> a >> b >> c;
    int dp[n+1];
    dp[0]=0;
    for(int i =1;i<=n;i++)
    {
        x =INT_MIN, y= INT_MIN , z = INT_MIN;

        if(i>=a) x = dp[i-a];

        if(i>=b) y = dp[i-b];

        if(i>=c) z =dp[i-c];

        dp[i] = 1+ max (z,max(x,y));
    }
    cout << dp[n];
}