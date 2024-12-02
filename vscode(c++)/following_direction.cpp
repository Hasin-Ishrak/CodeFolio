#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
const int p=100005;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {x--;}
		if (s[i] == 'R') {x++;}
		if (s[i] == 'D') {y--;}
		if (s[i] == 'U') {y++;}
		if (x == 1 && y == 1) {cout << "YES\n"; return;}
	}	
	cout << "NO\n";
}

int main() {
    fast;
    int t;
    cin>>t;
    while(t--)
    {
    solve(); 
    }
}