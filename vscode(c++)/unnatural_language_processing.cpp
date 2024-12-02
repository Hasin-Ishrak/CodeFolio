#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back 
const ll mod = 1e6 + 123;

int main() {
    fast;
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        string s, a;
        cin >> s;
        while(!s.empty())
        {
            int b ;

            if(s.back()=='a'  || s.back()=='e') b =2;
            else  b =3;

            while(b--)
            {
                a+=s.back();
                s.pop_back();
            }
            a+='.';
        }  

        a.pop_back();
        reverse(a.begin(),a.end());

        cout << a << yo;
    }
}