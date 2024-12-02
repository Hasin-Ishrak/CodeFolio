#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define yo '\n'
#define pb push_back

int main() {
    fast;
    prb;
    ll t;
    cin >>t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >>s;
        vector<ll> freq(26, 0);
        for(char c : s) {
            freq[c -'a']++;
        }
        string r;
        while (true) {
            bool done = true;
            for (ll i = 0; i < 26; i++) {
                if (freq[i] > 0) {
                    r+= (char)('a' + i);
                    freq[i]--;
                    done =false;
                }
            }
            if (done) break; 
        }
        cout <<r<< yo;
    }
}
