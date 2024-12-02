#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)  
        {
            cin >> a[i];
        }

        int fv = a[f - 1];  

        sort(a.begin(), a.end(), greater<int>());

        int rmv = 0;

        for (int i = 0; i < k; i++)  
        {
            if (a[i] == fv)
            {
                rmv++;
            }
        }

        int c = count(a.begin(), a.end(), fv);

        if (rmv == c)
        {
            cout << "YES" << endl;
        }
        else if (rmv == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }
}
