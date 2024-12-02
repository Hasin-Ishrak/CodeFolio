#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int c=0;
    sort(ar,ar+n);
    for(int i =0 ;i<n-1;i++)
    {
        c+=(ar[n-1]-ar[i]);
    }
    cout<<c;
}

