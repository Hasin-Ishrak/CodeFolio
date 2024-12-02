#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
     fast;
     ll t;
     cin >> t;
     while(t--)
     {
        int c[3]={};
        for(int i =0;i<9;i++)
        {
            char ch;
            cin >> ch;
            if(ch!='?')
            c[ch-'A']++;
        }
        for(int i =0;i<3;i++)
        {
            if(c[i]<3)
            cout << (char)('A'+i) <<yo;
        }
     }
}