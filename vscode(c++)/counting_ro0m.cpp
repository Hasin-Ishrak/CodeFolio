#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
char c;
ll n ,m ,ans=0;
ll h[]={1,-1,0,0}, v[]={0,0,1,-1};
bool vis [1000][1000];

void dfs(ll x,ll y)
{
    vis[x][y]=true;
    for(ll i=0;i<4;i++)
    {
        ll dx = x+h[i] , dy = y+v[i];
        if(dx>=0  && dx<n  && dy>=0 && dy < m  && !vis[dx][dy])
        {
            dfs(dx,dy);
        }
    }
}
int main()
{
    fast;
    cin >> n>> m;
    for(ll i =0;i<n;i++)
    {
        for(ll j =0;j<m;j++)
        {
            cin >> c;
            vis[i][j]=(c=='#');
        }
    }
    for(ll i =0;i<n;i++)
    {
        for(ll j =0;j<m;j++)
        {
            if(!vis[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout << ans <<yo;
}