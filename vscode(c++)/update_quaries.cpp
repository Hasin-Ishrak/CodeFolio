#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, nmu;
        cin >> l >> nmu;
        string os;
        cin >> os;
        vector<ll> indices(nmu);
        for (ll &in : indices)
        {
            cin >> in;
        }
        string uc;
        cin >> uc;
        
        set<ll> ui(indices.begin(), indices.end());
        vector<ll> si(ui.begin(), ui.end());
        sort(si.begin(), si.end());

        sort(uc.begin(), uc.end());

        map<ll, char> ic;
        for (ll i = 0; i < si.size(); i++)
        {
            ic[si[i]] = uc[i];
        }

        for (const auto &pair : ic)
        {
            os[pair.first - 1] = pair.second;
        }

        cout << os << yo;
    }
}
