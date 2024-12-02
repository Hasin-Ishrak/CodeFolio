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

ll domino(string& s,ll n)
{
ll ans=0 ,m;
for(ll i =0;i<n;i++)
{
    if(s[i]=='L')
    {
         for (ll j = i - 1; j >= 0 && s[j] == '.'; j--)
        {
                s[j] = '!';
        }
    }
    else if(s[i]=='R')
    {
        m=-1;
        for(ll k=i+1;k<n;k++)
        {
            if(s[k]=='L')
            {
                m=k;
                break;
            }

        }
        if(m==-1)
        {
           for(ll j=i+1;j<n;j++)
                    s[j]='!';
        }
        else{
            for(ll j=i+1;j<=m;j++)
                    s[j]='!';

                if((m-i+1)%2)
                {
                    s[(m+i)/2]='.';
                }
        }
    }
}
for(ll i =0;i<n;i++)
{
    if(s[i]=='.') ans++;
}
return ans;
}

int main() {
    fast;
    prb;
     ll n ;
     cin >> n;
     string s;
     cin >> s;
     cout << domino(s,n)<<el;
}