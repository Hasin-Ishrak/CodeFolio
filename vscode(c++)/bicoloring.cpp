#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

const ll mx =210;
vector<ll>tree[mx];
bool vis[mx]={false};
bool clr [mx];

bool dfs(ll v , bool cc)
{
    vis[v] = true;
    clr [v] = cc ;
    for( auto u : tree[v])
    {
        if(!vis[u])
        {
            if(!dfs(u , !cc))
            {
                return false;
            }
        }
        else if (clr[u]==clr[v])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fast;
    ll n ,e ;
    while(cin >> n && n !=0)
    {
        cin >> e;
        for(ll i =0;i<n ;i++)
        {
            tree[i].clear();
            vis[i] = false ;
        }
        for(ll i =0 ;i<e;i++)
        {
            ll u ,v;
            cin >> u >>v ;
            tree[u].pb(v);
            tree[v].pb(u);
        }
        if(dfs(0,false))
        {
            cout <<  "BICOLORABLE." << yo;
        }
        else{
            cout << "NOT BICOLORABLE." << yo;
        }
    }
}