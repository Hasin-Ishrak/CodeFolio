#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin >> n;

    int c = 0;
    for (int l = 1; l < n; ++l) 
    {
        if ((n - 1) % l == 0)
        {
            c++;
        }
    }

    cout << c << endl;
    
}