#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar1[5001], ar2[5001], ar3[5001];
    int a1 = 0, a2 = 0, a3 = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            ar1[a1] = i;
            a1++;
        }
        else if (b == 2)
        {
            ar2[a2] = i;
            a2++;
        }
        else
        {
            ar3[a3] = i;
            a3++;
        }
    }
    int team = min(a1, min(a2, a3));
    cout << team << endl;
    for (int i = 0; i < team; i++)
    {
        cout << ar1[i] + 1 << " " << ar2[i] + 1 << " " << ar3[i] + 1 << endl;
    }
}
