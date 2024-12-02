#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    int sum = a;
    
    while(a >= b)
    {
        int c = a / b;
        sum += c;
        a = a % b + c; 
    }
    
    cout << sum << endl;

}
