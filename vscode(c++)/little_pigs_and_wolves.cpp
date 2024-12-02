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

ll x[]={1,-1,0,0};
ll y[]={0,0,-1,1};

ll etpig( vector<vector<char>>&v ,ll n ,ll m)
{
    ll pig=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='W')
            {
                for(ll k=0;k<4;k++)
                {
                    ll ni =i+x[k];
                    ll nj =j+y[k];
                    if(ni>=0 && ni<n && nj>=0 && nj<m && v[ni][nj]=='P')
                    {
                        pig++;
                        v[ni][nj] ='X';
                        break;
                    }
                }
            }
        }
    }
    return pig;
}

int main() {
    fast;
    prb;
    ll n ,m;
    cin >> n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    cout << etpig(v,n,m)<<el;
}