#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
const ll mod = 2e5 + 123;
ll digitSum(ll num)
{
    ll sum = 0;
    while(num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    ll ans = 0, currentNum = 0;

    while(t)
    {
        currentNum++;
        if(digitSum(currentNum) == 10) {
            t--;
        }
    }
    cout << currentNum << el;
}
