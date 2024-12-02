#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        if(n % 2050 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            long long d = n / 2050;
            int sum = 0;
            
            while(d > 0)
            {
                sum += d % 10;
                d /= 10;
            }
            
            cout << sum << endl;
        }
    }

}
