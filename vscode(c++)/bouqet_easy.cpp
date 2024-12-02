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

void ans(vector<ll>& v, ll n, ll m) 
{
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < n; i++)
     {
        freq[v[i]]++;
    }
    ll answer = 0;
    for (auto& entry : freq)
     {
        ll x = entry.first;
        ll count_x = entry.second;
        ll max_x = min(m / x, count_x);
        answer = max(answer, max_x * x);
        if (freq.find(x + 1) != freq.end())
         {
            ll count_x1 = freq[x + 1];
            ll max_combined = 0;
            for (ll k = 0; k <= min(count_x, m / x); k++)
             {
                ll remaining_m = m - k * x;
                ll max_x1 = min(remaining_m / (x + 1), count_x1);
                max_combined = max(max_combined, k * x + max_x1 * (x + 1));
            }

            answer = max(answer, max_combined);
        }
    }

    cout << answer << el;
}
int main() {
    fast;
    prb;
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (auto &i : v) cin >> i;
        ans(v, n, m);
    }
}
