#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long 
#define el '\n'
const ll mod = 1e6 + 123;

ll parti(vector<ll> &v, ll l, ll r) 
{
    ll pivot = v[r];
    ll i = l - 1; 

    for(ll j = l; j <= r - 1; j++) 
    {
        if(v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]); 
        }
    }
    swap(v[i + 1], v[r]);
    return i + 1;
}

void quicksort(vector<ll> &v, ll l, ll r) 
{
  if(l < r)
  {
    ll pi = parti(v, l, r);
    quicksort(v, l, pi - 1); 
    quicksort(v, pi + 1, r); 
  }
}

int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    quicksort(v, 0, n - 1);
    cout << el;
    cout << "Sorted Array" << el;
    for(auto &i : v)
    {
        cout << i << " ";
    }
    cout << el;
}
