#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    ll n, b, d;
    cin >> n >> b >> d;
    vector<ll> v(n);
    ll sum = 0, count = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= b)
        {
            sum += v[i];
            if (sum > d)
            {
                sum = 0;
                count++;
            }
        }
    }
    cout << count << "\n";
}
