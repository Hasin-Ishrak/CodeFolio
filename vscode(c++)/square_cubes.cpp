#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b,c;
        cin>>n;
        a = sqrt(n);
		b = cbrt(n);
		c = sqrt(cbrt(n));
		cout<<a+b-c<<endl;
    }
}
