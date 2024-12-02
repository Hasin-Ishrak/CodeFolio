#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main() {
    fast;
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
    cin >> a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;

    cout <<((a11+a12+a21)%2==0 ?"1":"0")<<((a11+a12+a13+a22)%2==0 ?"1":"0")<<((a13+a23+a12)%2==0 ?"1":"0") << yo;

    cout <<((a11+a21+a22+a31)%2==0 ?"1":"0")<<((a22+a23+a12+a21+a32)%2==0 ?"1":"0")<<((a13+a23+a22+a33)%2==0 ?"1":"0")<<yo;

    cout <<((a31+a32+a21)%2==0 ?"1":"0")<<((a31+a32+a33+a22)%2==0 ?"1":"0")<<((a23+a32+a33)%2==0 ?"1":"0")<<yo;
}