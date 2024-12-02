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

int main() {
    fast;
    prb;
    int n;
    cin >> n;

    vector<string> rats, women_children, men, captain;

    for (int i = 0; i < n; ++i) {
        string name, status;
        cin >> name >> status;

        if (status == "rat") {
            rats.push_back(name);
        } else if (status == "woman" || status == "child") {
            women_children.push_back(name);
        } else if (status == "man") {
            men.push_back(name);
        } else if (status == "captain") {
            captain.push_back(name);
        }
    }
    for (const auto& name : rats) cout << name << el;
    for (const auto& name : women_children) cout << name << el;
    for (const auto& name : men) cout << name << el;
    for (const auto& name : captain) cout << name <<el;
}