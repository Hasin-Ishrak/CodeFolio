#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'
#define pb push_back
#define pp pop_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end() 
#define rall(x) (x).rbegin(), (x).rend()

using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;     
const ld PI = acos(-1); 

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }
template <typename T> void read(vector<T> &v) { for (auto &x : v) cin >> x; }

void mini(string s ,ll n ,ll k)
{
    if (k == 0)
    {
        cout << s; 
        return;
    }
    if (n == 1) 
    { 
        cout << 0;
        return;
    }
    if (s[0] != '1')
     {
        s[0] = '1';
        k--;
    }
    for (ll i = 1; i < n && k > 0; i++) 
    {
        if (s[i] != '0') 
        {
            s[i] = '0';
            k--;
        }
    }
    cout << s;  
}

int main() {
    fast;
    prb;
    ll n ,k;
    cin >> n >>k;
    string s;
    cin >> s;
    mini(s,n,k);
}