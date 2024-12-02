#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans =0 , a =0;
        cin >> n;
        string s ;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                a++;
            }
    
            else{
                a--;
                if(a<0)
                {
                    ans++;
                    a=0;
                }
            }
        }
        cout << ans << yo;
    }  
}