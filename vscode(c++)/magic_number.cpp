#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() {
    fast;
    string s;
    cin>>s;
    bool magic=true;
    for(int i=0;i<s.length();)
    {
        if(s[i]== '1' && s[i+1]== '4' && s[i+2]== '4')
        {
            i+=3;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1')
        {
            i++;
        }
        else{
            magic = false;
            break;
        }
    }
    if(magic)
    {
        cout<< "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}