#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int e = n * a;
    int f, h;
    if (n % m == 0)
    {
        f = (n / m) * b;
    }
    else
    {
        int g = (n % m) * a;
        h = g + (n / m) * b;
    }
    int x = min(e, min(f, h));
    cout << x;
}
