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
        int n;
        cin >> n;
        long long sum=0;
        for (int i = 0; i < n; i++)
        { 
            int b;
            cin >> b;
            sum += b;
        }
        long long a = sqrt(sum);
        if (a * a == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
}
