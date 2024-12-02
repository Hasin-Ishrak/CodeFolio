#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,c=0;
    cin>>n;

     bool b[3001] = {false};
    int a[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                a[j] += 1;
            }
        }

        if (a[i] == 2)
        {
            c += 1;
        }
    }
    cout<<c;
}