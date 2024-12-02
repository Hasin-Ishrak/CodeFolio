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
  vector<vector<ll>> mc(3,vector<ll>(3));
  for(ll i=0;i<3;i++)
  {
    for(ll j=0;j<3;j++)
    {
        cin >> mc[i][j];
    }
  }
  ll ans= (mc[0][1]+mc[0][2]+mc[1][0]+mc[1][2]+
            mc[2][0]+mc[2][1])/2;
  
  mc[0][0]= ans -(mc[0][1]+mc[0][2]);
  mc[1][1]=ans-(mc[1][0]+mc[1][2]);
  mc[2][2]=ans-(mc[2][0]+mc[2][1]);

  for(ll i=0;i<3;i++)
  {
    for(ll j=0;j<3;j++)
    {
        cout << mc[i][j] << " ";
    }
    cout << el;
  }
}