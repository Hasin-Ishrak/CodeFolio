#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        char maxchar = s[0];
        for(char ch : s)
        {
            if(ch>maxchar)
            {
                maxchar =ch;
            }
        }
        int ans = (int)maxchar -96;
        cout<< ans << endl;
    }
}