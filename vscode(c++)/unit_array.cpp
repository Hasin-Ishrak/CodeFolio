#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b = 0, c = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) { 
                b++;
            } else {
                c++;
            }
        }
        if(b<=c)
        {
            if(b%2 !=0)
            {
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            int f= b- n/2;
            if((n/2)%2!=0)
            {
                f++;
            }
            cout<<f<<endl;
        }
    }
}
