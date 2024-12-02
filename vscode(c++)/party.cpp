#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int c = 0;
        int cu = i;
        while (cu != -1)
        {
            cu = v[cu];
            c++;
        }
        ans = max(ans, c);
    }

    cout << ans << yo;
}
