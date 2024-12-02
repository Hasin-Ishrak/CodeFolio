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
        bool a[26]={};
        int ans=0;
        for(int i=0;i<n;i++)
        {
            char c= s[i];
            if(!a[c-'A'])
            {
                ans+=2;
                a[c-'A'] = true;
            }
            else{
                ans++;
            }
        }
        cout<< ans <<endl;
    }
}